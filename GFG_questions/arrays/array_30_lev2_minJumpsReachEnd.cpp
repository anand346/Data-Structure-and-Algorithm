// Input:
// N = 11 
// arr[] = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9} 
// Output: 3 
// Explanation: 
// First jump from 1st element to 2nd 
// element with value 3. Now, from here 
// we jump to 5th element with value 9, 
// and from here we will jump to the last. 


#include<bits/stdc++.h>
using namespace std;

int minJumps(int arr[], int n){

    if(n == 1){
        return 0;
    }

    if(arr[0] == 0){
        return -1;
    }

    int jumps = 1;
    int steps = arr[0];
    int maxReach = arr[0];

    for(int i = 1;i < n;i++){
        if(i == n-1){
            return jumps;
        }

        maxReach = max(maxReach,arr[i]+i);
        steps--;
        if(steps == 0){
            // cout<<"steps 0 "<<maxReach-i<<endl;
            jumps++;
            if(i >= maxReach){
                return -1;
            }
            steps = maxReach - i;
        }
    }
    return -1;
}
int main(){
    int n = 11 ;
    int arr[] = {1, 3, 0, 5, 0, 2, 6, 7, 6, 8, 9} ;
    cout<<minJumps(arr,n);
}