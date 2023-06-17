#include<bits/stdc++.h>
using namespace std;

class Solution{

    int leftIdx(int i){
        return (2*i + 1);
    }
    int rightIdx(int i){
        return (2*i + 2);
    }
    void heapify(vector<int> &v,int i,int n){

        int left = leftIdx(i);
        int right = rightIdx(i);


        int largest = i;
        if(left < n && v[left] > v[largest]){
            largest = left;
        }
        if(right < n && v[right] > v[largest]){
            largest = right;
        }

        if(largest != i){
            swap(v[i],v[largest]);
            heapify(v,largest,n);
        }
    }

    public :
        maxHeap(vector<int>& v){

            int n = v.size();
            int i = (n-2)/2;
            while(i >= 0){
                heapify(v,i--,n);
            }
        }
        int pop(vector<int> &v,int n){

        }
}

int main(){


}