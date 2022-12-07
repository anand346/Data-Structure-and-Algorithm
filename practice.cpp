#include<bits/stdc++.h>
using namespace std;
class Node{
    public : 
        int data;
        Node *next;

        Node(int data){
            this->data = data;
            this->next = NULL;
        }
};

Node* takeInput(){
    int data;
    cin>>data;
    Node *head = NULL;
    Node *currNode = NULL;
    while(data != -1){
        Node *n = new Node(data);
        if(head == NULL){
            head = n;
            currNode = n;
        }else{
            currNode->next = n;
            currNode = n;
        }
        cin>>data;
    }
    return head;
}

int length(Node *head){

    int count = 0;
    Node *temp = head;
    while(temp){
        count++;
        temp = temp->next;
    }
    return count;
}

void print(Node* head){

    Node *temp = head;
    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
    return ;
}

void printIthNode(Node *head,int i){

    if(i < 0 || i > length(head) -1 ){
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

Node* insertAtIthNode(Node *head,int i ,int data){
    if(i < 0){
        return head;
    }

    if(i == 0){
        Node *n = new Node(data);
        n->next = head;
        head = n;
        return head;
    }

    Node *copyhead = head;

    int count = 1;
    while(count <= i-1 && head != NULL){
        head = head->next;
        count++;
    }

    if(head){
        Node *n = new Node(data);
        n->next = head->next;
        head->next = n;
        return copyhead;
    }
    return copyhead;
}

Node* deleteIthNode(Node *head,int i){
    if(i < 0 || i > length(head)-1){
        return head;
    }

    if(i == 0 && head != NULL){
        Node *newHead = head->next;
        head->next = NULL;
        delete head;
        return newHead;
    }

    Node *copyHead = head;
    int count = 1;
    while(count <= i-1 && head != NULL){
        head = head->next;
        count++;
    }

    if(head && head->next){
        Node *temp = head->next;
        head->next = head->next->next;
        temp->next = NULL;
        delete temp;
        return copyHead;
    }
    return copyHead;

}

int lengthRecursive(Node* head){
    if(head == NULL) return 0;
    int smallAns = lengthRecursive(head->next);
    return 1+smallAns;
}

bool isPresent(Node *head,int data){
    if(head == NULL){
        return false;
    }
    Node *temp = head;
    while(temp){
        if(temp->data == data){
            return true;
        }
        temp = temp->next;
    }
    return false;
}

bool isPresent2(Node *head,int data){
    if(head == NULL) return false;
    if(head->data == data) return true;
    return isPresent(head->next,data);
}

int middleLL(Node *head){

    
}
int main(){
    // string anand = "geeksforgeeks";
    // // cout<<minimumNumberOfDeletions(anand);
    // vector<string> temp;
    // temp.push_back("hello");
    // cout<<temp.back();

    Node *head = takeInput();
    // cout<<length(head)<<endl;
    print(head);
    insertAtIthNode(head,3,19);
    print(head);
    deleteIthNode(head,3);
    print(head);
}