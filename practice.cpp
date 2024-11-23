#include<bits/stdc++.h>
using namespace std;
// class Node{
//     public : 
//         int data;
//         Node *next;

//         Node(int data){
//             this->data = data;
//             this->next = NULL;
//         }
// };

// Node* takeInput(){
//     int data;
//     cin>>data;
//     Node *head = NULL;
//     Node *currNode = NULL;
//     while(data != -1){
//         Node *n = new Node(data);
//         if(head == NULL){
//             head = n;
//             currNode = n;
//         }else{
//             currNode->next = n;
//             currNode = n;
//         }
//         cin>>data;
//     }
//     return head;
// }

// int length(Node *head){

//     int count = 0;
//     Node *temp = head;
//     while(temp){
//         count++;
//         temp = temp->next;
//     }
//     return count;
// }

// void print(Node* head){

//     Node *temp = head;
//     while(temp){
//         cout<<temp->data<<" ";
//         temp = temp->next;
//     }
//     cout<<endl;
//     return ;
// }

// void printIthNode(Node *head,int i){

//     if(i < 0 || i > length(head) -1 ){
//         cout<<"-1"<<endl;
//         return ;
//     }
//     int count = 1;
//     while(count <= i && head != NULL){
//         head = head->next;
//         count++;
//     }

//     if(head){
//         cout<<head->data<<endl;
//     }else{
//         cout<<"-1"<<endl;
//     }
// }

// Node* insertAtIthNode(Node *head,int i ,int data){
//     if(i < 0){
//         return head;
//     }

//     if(i == 0){
//         Node *n = new Node(data);
//         n->next = head;
//         head = n;
//         return head;
//     }

//     Node *copyhead = head;

//     int count = 1;
//     while(count <= i-1 && head != NULL){
//         head = head->next;
//         count++;
//     }

//     if(head){
//         Node *n = new Node(data);
//         n->next = head->next;
//         head->next = n;
//         return copyhead;
//     }
//     return copyhead;
// }

// Node* deleteIthNode(Node *head,int i){
//     if(i < 0 || i > length(head)-1){
//         return head;
//     }

//     if(i == 0 && head != NULL){
//         Node *newHead = head->next;
//         head->next = NULL;
//         delete head;
//         return newHead;
//     }

//     Node *copyHead = head;
//     int count = 1;
//     while(count <= i-1 && head != NULL){
//         head = head->next;
//         count++;
//     }

//     if(head && head->next){
//         Node *temp = head->next;
//         head->next = head->next->next;
//         temp->next = NULL;
//         delete temp;
//         return copyHead;
//     }
//     return copyHead;

// }

// int lengthRecursive(Node* head){
//     if(head == NULL) return 0;
//     int smallAns = lengthRecursive(head->next);
//     return 1+smallAns;
// }

// bool isPresent(Node *head,int data){
//     if(head == NULL){
//         return false;
//     }
//     Node *temp = head;
//     while(temp){
//         if(temp->data == data){
//             return true;
//         }
//         temp = temp->next;
//     }
//     return false;
// }

// bool isPresent2(Node *head,int data){
//     if(head == NULL) return false;
//     if(head->data == data) return true;
//     return isPresent(head->next,data);
// }

// int middleLL(Node *head){

    
// }

// bool checkElement(int a[],int n,int m){

//     if(n < 0){
//         return false;
//     }

//     if(a[0] == m){
//         return true;
//     }
//     return checkElement(a+1,n-1,m);
// }
// class Solution{
//     public :
//         vector<pair<int,string>> nums = {{1000000000,"billion"},{1000000,"million"},{1000,"thousand"},{100,"hundred"},{90,"nienty"},{80,"eighty"},{70,"seventy"},{60,"sixty"},{50,"fifty"},{40,"forty"},{30,"thirty"},{20,"twenty"},{19,"nienteen"},{18,"eighteen"},{17,"seventeen"},{16,"sixteen"},{15,"fifteen"},{14,"fourteen"},{13,"thirteen"},{12,"twelve"},{11,"eleven"},{10,"10"},{9,"nine"},{8,"eight"},{7,"seven"},{6,"six"},{5,"five"},{4,"four"},{3,"three"},{2,"two"},{2,"two"},{1,"one"}} ;

//         string intToWords(int num){
//             if(num == 0){
//                 return "zero";
//             }
//             for(auto it : nums){
//                 if(num >= it.first){
//                     return (num >= 100 ? intToWords(num/it.first) + " " : "") + it.second + ( num%it.first == 0 ? "" : " " + intToWords(num%it.first)) ;
//                 }
//             }
//             return  "";

//         }       
// };

int countDigits(int n){
    if(n/10 == 0){
        return 1;
    }

    int small = countDigits(n/10);
    return small+1;
}


bool powerOfThree(int n){

    if(n == 1 || n == 3) return true;
    if(n == 0 || n%3 != 0) return false;


    return powerOfThree(n/3);
}
int main(){

    // string anand = "geeksforgeeks";
    // // cout<<minimumNumberOfDeletions(anand);
    // vector<string> temp;
    // temp.push_back("hello");
    // cout<<temp.back();

    // Node *head = takeInput();
    // // cout<<length(head)<<endl;
    // print(head);
    // insertAtIthNode(head,3,19);
    // print(head);
    // deleteIthNode(head,3);
    // print(head);

    // int a[] = {4,5,2,7,8,1};
    // cout<<checkElement(a,6,10);

    // Solution a ;
    // cout<<a.intToWords(40333);

    cout<<countDigits(1363738)<<endl;
}

// string intToWords(int num){

//     if(num == 0){
//         return "zero";
//     }

//     for(auto it : nums){
//         if(num >= it.first){
//             return (num >= 100 ? intToWords(num/it.first) + " " : "") + it.second + (num%it.first == 0 ? "" : " " + intToWords(num%it.first));
//         }
//     }

//     return "";
// }


// string IntToWords(int num){

//     if(num == 0){
//         return "zero";
//     }

//     for(auto it : nums){

//         if(num >= it.first){
//             return (num >= 100 ? IntToWords(num/it.first) + " " : "") + it.second + (num%it.first == 0 ? "" : " " + IntToWords(num%it.first));
//         }
        
//     }
//     return "";
// }