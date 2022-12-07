#include<bits/stdc++.h>
using namespace std;


class Solution{

    public :
        void sortList(Node *head){

            int count = {0,0,0};

            if(head == NULL) return ;

            Node *ptr = head;
            while(ptr != NULL){

                count[ptr->data] += 1;
                ptr = ptr->next;
            }

            int i = 0;
            ptr = head;

            while(ptr != NULL){
                if(count[i] == 0){
                    ++i;
                }else{
                    ptr->data = i;
                    --count[i];
                    ptr = ptr->next;
                }
            }
        }
}


int main(){

}