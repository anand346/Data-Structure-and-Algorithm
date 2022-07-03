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
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    // cout<<endl;
    // temp = head; //for printing linked list two times store the address of head in a temp variable and use temp in loops for iterating so that first node address will always be stored in head and we can use it further for printing the linked list.
    // while(temp!=NULL){
    //     cout<<temp->data<<" ";
    //     temp = temp->next;   
    // }
}
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
            currNode->next = n; //inserting at tail
            currNode = n;
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
            n->next = head; //inserting at head
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
Node* insertAtithPos(Node *head, int i, int data){
      if(i<0){
        return head;
      }
      if(i==0){
        Node* n = new Node(data);
        n->next = head;
        head = n;
        return head;
      }
      Node * copyHead = head;
      int count = 1;
      while(count<=i-1 && head!=NULL){
        head = head->next;
        count++;
      }
      if(head){
        /*Node *n = new Node(data);
        n->next = head->next;
        head->next = n;*/
        Node *n = new Node(data);
        Node *temp = head->next;
        head->next = n;
        n->next = temp;
        return copyHead;
      }
      return copyHead;
}
Node* deleteIthNode(Node* head, int i){ //with memory leak
   if(i<0){
      return head;
   }
   if(i==0 && head){
    return head->next;
   }

   Node* curr = head;
   int count = 1;
   while(count<=i-1 && curr!=NULL){
    curr = curr->next;
    count++;
   }
   if(curr && curr->next){
    curr->next = curr->next->next;
    return head;
   }
   return head;
}
Node* deleteithNode2(Node* head, int i){ //without memory leak
   if(i<0){
      return head;
   }
   if(i==0 && head){
    Node* newHead = head->next;
    head->next = NULL;
    delete head;
    return newHead;
   }

   Node* curr = head;
   int count = 1;
   while(count<=i-1 && curr!=NULL){
    curr = curr->next;
    count++;
   }
   if(curr && curr->next){
     Node *temp = curr->next;
     curr->next = curr->next->next;
     temp->next=NULL;
     delete temp;
     return head;
   }
   return head;
}
int length2(Node *head){
    if(head == NULL) return 0;
    int smallAns = length(head->next);
    return 1+smallAns;
}
bool isPresent(Node *head,int data){
    Node *curr = head;
    while(curr != NULL){
        if(curr->data == data){
            return true;
        }
        curr = curr->next;
    }
    return false;
}
bool isPresent2(Node *head,int data){ //recursive
    if(head == NULL) return false;
    if(head->data == data) return true;
    return isPresent2(head->next,data);
}
int middleLL(Node* head){
    Node* slow = head;
    Node* fast = head->next;
    while(fast && fast->next){
        slow = slow->next;
        fast = fast->next->next;
    }
    if(fast != NULL){ //even
        return slow->next->data;
    }
    return slow->data;   //odd
}
Node* removeKthNode(Node* head,int k){
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
Node* reverseLL(Node* head){
    Node *curr = head;
    Node *prev = NULL;
    while(curr != NULL){
        Node* n = curr->next;
        curr->next = prev;
        prev = curr;
        curr = n;
    }
    return prev;
}
int main(){

    //static object of node class;
    // Node n1(1) ;
    // Node n2(2);
    // Node *head = &n1;
    // n1.next= &n2;
    /*
    int p = 5;
    int *v = p; //data of p will be stored at the data section of v;
    v = &p; //address of p will be stored at the address section of v;
    cout<<v<<endl; //outputs the address of p;
    cout<<*v<<endl; //outputs the data of p;
    
    
     */



    //->               => is used only with pointer variables to access other properties of address it can't be used with normal variables ,it is always used to get the data stored . Mainly it is used with user defined variable like dynamic object of any class;
    //head->data       => means give the data of "data" property of address;
    //head = NULL      => address of head pointer will be replaced with NULL and address of head pointer will be NULL; 
    //Node *head       => declares pointer of Node data type means the head pointer can replace his address only with Node data type objects.
    //head = &n1       => head pointer replace his own address with address of n1 Node class object.
    //cout<<head       => print address of head means print the address of n1 because head replaced his own address with address of n1 earlier;
    //cout<<head->data => head go to his memory address i.e., address of n1 and print the data of "data" property of n1;
    //cout<<head->next => head go to his memory address i.e., address of n1 and print the data of "next" property of n1;
    //Node *head = &n1 => declaration and initialization at the same time of head pointer i.e.,declared head pointer of Node class and replace address of head with address of n1 ; 
    //n1.next = &n2    => replaces address n1's "next" pointer variable with address of n2 object;
    //cout<<n1.next->data => prints the data of "data" property of variable whose address stored at n1's "next" pointer i.e., of n2;
    //cout<<head<<" "<<head->next<<" "<<&n1<<" "<<n1.next<<" "<<n1.next->data<<" "<<&n2<<endl;


    //create dynamic linked list or dynamic object of Node class;
    // Node *n3 = new Node(3);
    // Node *n4 = new Node(4);
    // n3->next = n4;
    // cout<<n3->next<<" "<<n4<<endl;

    //n3->next = n4 => address of n4 pointer varible i,e, variable of Node class is getting stored in n3's next pointer variable i.e., property of n3 object.



    // Node n5(5);
    // Node n6(6);
    // Node n7(7);
    // Node n8(8);
    // Node n9(9);

    // head = &n5;
    // n5.next = &n6;
    // n6.next = &n7;
    // n7.next = &n8;
    // n8.next = &n9;
    // n9.next = NULL;
    Node *head = takeInput(); //inserting at tail
    // Node *head = takeInput2(); //inserting at head
    print(head);
    cout<<endl;
    // Node *newHead = removeKthNode(head,2);
    Node *newHead = reverseLL(head);
    print(newHead);
    // cout<<middleLL(head)<<endl;
    // if(isPresent(head,3)){
    //     cout<<"found"<<endl;
    // }else{
    //     cout<<"not found"<<endl;
    // }
    // head = deleteIthNode(head,1);
    // printIthNode(head,3);

    // print(head);
}