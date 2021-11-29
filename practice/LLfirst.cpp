#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Node{
    public :
    int data;
    Node* next;
    Node(int data){
        this->data = data;
        next = NULL;
    }
};
Node* takeInput(){
    int data;
    Node *head = NULL;
    Node *tail = NULL;
    cin>>data;
    while(data != -1){
        Node *n = new Node(data);
        if(head == NULL){
            head = n;
            tail = n;
        }else{
            tail->next = n;
            tail = n; //insert at tail
        }
        cin>>data;
    }
    return head;
}
void print(Node* head){
    Node *temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
Node* takeInput2(){
    int data;
    Node *head = NULL;
    Node *tail = NULL;
    cin>>data;
    while(data != -1){
        Node *n = new Node(data);
        if(head == NULL){
            head = n;
            tail = n;
        }else{
            n->next = head;
            head = n; //insert at head
        }
        cin>>data;
    }
    return head;
}
int length(Node *head){
    Node *temp = head;
    int count = 0;
    while(temp != NULL){
        count++;
        temp = temp->next;
    }
    return count;
}
void printIthNode(Node* head,int i){
    Node *temp = head;
    int count = 1;
    while(count <= i){
        temp = temp->next;
        count++;
    }
    if(temp){
        cout<<temp->data<<endl;
    }
}
void insertAtIthPos(Node *head,int i,int data){
    if(head == NULL){
        cout<<"ll is  null"<<endl;
    }
    int count= 1;
    Node* temp = head;
    while(count < i){
        temp = temp->next;
        count++;
    }
    if(temp){
        Node *n = new Node(data);
        n->next = temp->next;
        temp->next = n;
    }
}
void deleteIthNode(Node* head,int i){
    if(head == NULL){
        cout<<"LL is empty"<<endl;
        return ;
    }
    int count = 1;
    Node *temp = head;
    while(count < i){
        temp = temp->next;
        count++;
    }
    if(temp){
        Node *hello = temp->next;
        temp->next = temp->next->next;
        hello->next = NULL;
        delete hello;
    }
}
int lengthRecursive(Node *head){
    
    if(head == NULL){
        return 0;
    }
    Node *temp = head;
    int small = lengthRecursive(temp->next);
    return small + 1;
}
bool isPresent(Node *head,int target){
    // if(head == NULL){
    //     cout<<"LL is empty"<<endl;
    //     return false;
    // }
    // Node *temp = head;
    // while(temp != NULL){
    //     if(temp->data == target){
    //         return true;
    //     }
    //     temp = temp->next;
    // }
    // return false;
    if(head == NULL){
        return false;
    }
    if(head->data == target){
        return true;
    }
    Node *temp = head;
    bool small = isPresent(temp->next,target);
    return small;
}
int middle(Node *head){
    Node *slow = head;
    Node *fast = head->next;
    while(fast && fast->next){
        slow = slow->next;
        fast = fast->next->next;
    }
    if(fast){
        return slow->next->data; 
    }else{
        return slow->data;
    }
}
Node* removeKthNode(Node *head,int k){
    Node *first = head;
    Node *second = head;

    while(k--){
        second = second->next;
    }
    if(second == NULL){ // if k == length of LL 
        return first->next;
    }
    while(second->next != NULL){
        first = first->next;
        second = second->next;
    }
    first->next = first->next->next;
    return head;
}
Node* reverseLL(Node *head){
    if(head == NULL){
        return 0;
    }
    Node *curr = head;
    Node *prev = NULL;
    while(curr != NULL){
        Node *n = curr->next;
        curr->next = prev;
        prev = curr;
        curr = n;
    }
    return prev;
}
int main(){
    Node *head = takeInput();
    // cout<<head;
    print(head);
    cout<<endl<<length(head);
    cout<<endl;
    printIthNode(head,3);
    cout<<endl;
    insertAtIthPos(head,3,6);
    print(head);
    cout<<endl;
    deleteIthNode(head,3);
    print(head);
    cout<<endl;
    cout<<lengthRecursive(head);
    cout<<endl;
    cout<<isPresent(head,10);
    cout<<endl;
    cout<<middle(head);
    Node *newHead = removeKthNode(head,2);
    cout<<endl;
    print(newHead);
    Node *newHead1 = reverseLL(newHead);
    cout<<endl;
    print(newHead1);
}