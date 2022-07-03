
// Online IDE - Code Editor, Compiler, Interpreter

#include<iostream>
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
Node* takeInput(){
    int data;
    cin>>data;
    Node *headNode = NULL;
    Node *currNode = NULL;
    while(data != -1){
        Node *n = new Node(data);
        if(headNode == NULL){
            headNode = n;
            currNode = n;
        }else{
            currNode->next = n; //insert at head
            currNode = n;
        }
        cin>>data;
    }
    return headNode;
}
Node* takeInput1(){
    int data;
    cin>>data;
    Node *headNode = NULL;
    Node *currNode = NULL;
    while(data != -1){
        Node *n = new Node(data);
        if(headNode == NULL){
            headNode = n;
            currNode = n;
        }else{
            n->next = headNode;
            headNode = n; //insert at head
        }
        cin>>data;
    }
    return headNode;
}
void print(Node *head){
    if(head == NULL){
        cout<<"LL is empty"<<endl;
        return ;
    }
    Node *temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
int length(Node *head){
    Node *temp = head;
    if(temp == NULL){
        return 0;
    }
    int small = length(temp->next);
    return small+1;
}
void printIthNode(Node *head,int i){
    if(head == NULL){
        return ;
    }
    Node *temp = head;
    while(i--){
        temp = temp->next;
    }
    cout<<temp->data;
}
Node* insertAtIthPos(Node* head,int i,int data){
    if(head == NULL){
        return NULL;
    }
    Node *temp = head;
    int count = 1;
    while(count < i){
        temp = temp->next;
        count++;
    }
    Node *newNode = new Node(data);
    newNode->next = temp->next;
    temp->next = newNode;
    return head;
}
Node* deleteIthNode(Node *head,int i){
    if(head == NULL){
        return NULL;
    }
    int count = 1;
    Node *temp = head;
    while(count < i){
        temp = temp->next;
        count++;
    }
    Node *toDelete = temp->next;
    temp->next = temp->next->next;
    toDelete->next = NULL;
    delete toDelete;
    return head;
}
bool isPresent(Node *head, int element){
    if(head == NULL){
        return false;
    }
    Node *temp = head;
    while(temp){
        if(temp->data == element){
            return true;
        }
        temp = temp->next;
    }
}
int middleLL(Node *head){
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
    if(head == NULL){
        return NULL;
    }
    Node *first = head;
    Node *second = head;
    while(k--){
        second = second->next;
    }
    while(second->next != NULL){
        first = first->next;
        second = second->next;
    }
    Node *temp = first->next;
    first->next = first->next->next;
    temp->next = NULL;
    delete temp;
    return head;
}
Node* reverseLL(Node *head){
    if(head == NULL){
        return NULL;
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
int main()
{
    cout<<"Enter your linked list : ";
    Node *head = takeInput();
    //print(head);
    // cout<<endl<<"Length is : "<<length(head);
    // cout<<endl;printIthNode(head,4);
    //Node *newHead = insertAtIthPos(head,3,10);
    // Node *newHead = deleteIthNode(head,3);
    // print(newHead);
    // cout<<endl<<isPresent(head,12);
    // cout<<endl<<middleLL(head);
    // Node *newHead = removeKthNode(head,3);
    // cout<<endl;
    // print(newHead);
    Node *newHead = reverseLL(head);
    print(newHead);
    return 0;
}
