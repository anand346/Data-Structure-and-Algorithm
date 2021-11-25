#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Node{
    public :
        int data;
        Node *next;
        Node(int data){
            this->data = data;
            next = NULL;
        }
};
void print(Node *head){
    Node *temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
Node* takeInput(){
    int data;
    cin>>data;
    Node *head = NULL;
    Node *tail = NULL;
    while(data != -1){
        Node *n = new Node(data);
        if(head == NULL){
            head = n;
            tail = n;
        }else{
            tail->next = n;
            tail = n;
        }
        cin>>data;
    }
    return head;

}
Node* takeInput2(){
    int data;
    cin>>data;
    Node *head = NULL;
    Node *tail = NULL;
    while(data != -1){
        Node *n = new Node(data);
        if(head == NULL){
            head = n;
            tail = n;
        }else{
            n->next = head;
            head = n;
        }
        cin>>data;
    }
    return head;
}
int length(Node *head){
    Node *temp = head;
    int count = 0;
    while(temp){
        count++;
        temp = temp->next;
    }
    return count;
}
void printIthNode(Node *head,int i){
    if(i < 0 || i > length(head) - 1){
        cout<<"-1"<<endl;
        return ;
    }
    int count = 1;
    while(count <= i && head != NULL){
        head = head->next;
        count++;
    }
    if(head){
        cout<<head->data<<endl;
    }else{
        cout<<"-1"<<endl;
    }
}
Node* insertAtIthPos(Node *head,int i ,int data){
    if(i < 0){
        return head;
    }
    if(i == 0){
        Node *n = new Node(data);
        n->next = head;
        head = n;
        return head;
    }
    Node *copyHead = head;
    int count = 1;
    while(count < i){
        count++;
        head = head->next;
    }
    if(head){
        Node *n = new Node(data);
        n->next = head->next;
        head->next = n;
        return copyHead;
    }
    return copyHead;
}
Node* deleteIthNode(Node* head,int i){
    if(i <= 0){
        return head;
    }
    if(i == 0){
        Node *temp = head->next;
        head = head->next->next;
        temp->next = NULL;
        delete temp;
        return head;
    }
    int count = 1;
    Node* copyHead = head;
    while(count < i){
        head = head->next;
        count++;
    }
    if(head){
        Node *temp = head->next;
       head->next = head->next->next;
       temp->next = NULL;
       delete temp;
       return copyHead;
    }
    return copyHead;
}
bool isPresent(Node* head,int data){
    Node *temp = head;
    while(temp != NULL){
        if(temp->data == data){
            return true;
        }
        temp = temp->next;
    }
    return false;
}
int main(){
    Node *head = takeInput();
    print(head);
    cout<<endl;
    // printIthNode(head,3);
    Node *newHead = insertAtIthPos(head,3,10);
    // print(newHead);
    // Node *newHead = deleteIthNode(head,3);
    print(newHead);
}