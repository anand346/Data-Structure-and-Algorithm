#include<bits/stdc++.h>
using namespace std;


class Node{
    public : 
        int data ;
        Node* next;
        Node* prev;

        Node(int data){
            this->data = data;
        }
}

class Solution{
    public :
        Node* dummy ;
        Node* head = dummy;
        Node* mid  = dummy;
        int cnt = 0;

        void push(int data){
            Node* curr = new Node(data);
            curr->prev = NULL;
            curr->next = head;
            cnt++;
            head->prev = curr;
            head = curr;

            if(cnt == 1){
                mid = curr;
            }else if(cnt%2 == 0){
                mid = mid->prev;
            }
        }

        int pop(){
            if(cnt == 0){
                cout<<"Stack is empty";
                return -1;
            }

            Node* temp = head;
            int x = head->data;
            head = head->next;

            if(head != NULL){
                head->prev = NULL;

            }
            cnt--;
            if(cnt&1){
                mid = mid->next;
            }
            temp->next = NULL;
            temp->prev = NULL;
            delete temp;
            return x;
        }

        int middle(){
            if(cnt == 0){
                cout<<"STack is empty";
                return -1;
            }
            return mid->data;
        }

        void printData(){
            Node* curr = head;
            if(cnt == 0){
                cout<<"STack is empty"<<endl;
                return ;
            }
            for(int i = 0;i < cnt;i++){
                cout<<curr->data<<" ";
                curr = curr->next;
            }
            cout<<endl;
        }
}

int main(){

}