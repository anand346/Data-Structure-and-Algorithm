// Input:
// N = 6
// arr[] = 7 10 4 3 20 15
// K = 3
// Output : 7
// Explanation :
// 3rd smallest element in the given 
// array is 7.


#include<bits/stdc++.h>
using namespace std;
int kthSmallest(int arr[], int l, int r, int k) {
        //code here
        sort(arr,arr+r+1);
        int ans = 0;
        for(int i = l;i <= r;i++){
            if(i == k-1){
                ans = arr[i];
            }    
        }
        return ans;

}
int main(){
    int arr[] = {7,10,4,3,20,15};
    cout<<kthSmallest(arr,0,5,3);
}