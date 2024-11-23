//implementing min priority queue 

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class PriorityQueue{
    vector<int> pq;
    public :
        PriorityQueue(){

        }
        bool isEmpty(){
            return pq.size() == 0;
        }
        int getSize(){
            return pq.size();
        }
        int getMin(){
            if(isEmpty()){
                return 0;
            }
            return pq[0];
        }
        void insert(int element){
            pq.push_back(element);
            int CI = pq.size() -1;
            while(CI > 0){
                int PI = (CI - 1)/2; 
                if(pq[CI] < pq[PI]){
                    swap(pq[CI],pq[PI]);
                    CI = PI;
                }else{
                    break;
                }
            }
        }
        void removeMin(){
            if(isEmpty()){
                return 0;
            }
            int ans = pq[0];
            swap(pq[0],pq[pq.size() -1]);
            pq.pop_back();

            int pi = 0;
            while(true){
                int lci = 2*pi +1;
                int rci = 2*pi +2;
                int mini = pi;

                if(lci < pq.size() && pq[lci] < pq[mini]){
                    mini = lci;
                }
                if(rci < pq.size() && pq[rci] < pq[mini]){
                    mini = rci;
                }
                if(mini == pi){
                    break;
                }
                swap(pq[pi],pq[mini]);
                pi = mini;
            }
            return ans;
        }
}
void inplaceHeapSort(int *pq, int n){
   /// Build the heap in input array
   for(int i=1;i<n;i++){
        int cI = i;
        while(cI > 0){
            int pI = (cI-1)/2;
            if(pq[cI] < pq[pI]){
                swap(pq[cI], pq[pI]);
                cI = pI;
            }else {
                break;
            }
        }
    }
   /// Remove min n times
   int size = n;
   while(size>=1){
        swap(pq[0], pq[size-1]);
        size--; /// element is removed

    /// Down Heapify
        int pi = 0;
        while(true) {
            int lci = 2*pi + 1;
            int rci = 2*pi + 2;
            int mini = pi;

            if(lci < size && pq[lci] < pq[mini]){
                mini = lci;
            }
            if(rci < size && pq[rci] < pq[mini]){
                mini = rci;
            }

            if(mini == pi){
                break;
            }
            swap(pq[pi], pq[mini]);
            pi = mini;
        }
    }

}
int main(){
    //perfect example //  7 4 3 1 2
}