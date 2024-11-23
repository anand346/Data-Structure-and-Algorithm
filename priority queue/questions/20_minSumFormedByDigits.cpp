// https://www.youtube.com/watch?v=9ny0Sm73Apo

#include<bits/stdc++.h>
using namespace std;


long long int minSum(int arr[],int n){
    
    sort(arr,arr+n);
    long long int num1 = 0;
    long long int num2 = 0;

    for(long long int i = 0;i < n;i++){
        if(i%2 == 0){
            num1 = num1*10+arr[i];
        }else{
            num2 = num2*10+arr[i];
        }
    }
    return num2+num1;
}

long long int minSum(int arr[],int n){
    priority_queue <int, vector<int>, greater<int> > pq;

    long long int a=0, b=0;

    for(int i=0; i<n; i++){
        pq.push(arr[i]);
    }

    while(!pq.empty()){
        a*=10;
        a+=pq.top();
        pq.pop();

        if(!pq.empty())
        {
            b*=10;
            b+=pq.top();
            pq.pop();
        }
    }

    return a+b;
}

int main(){

}