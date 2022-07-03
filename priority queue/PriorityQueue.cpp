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
int main(){

}