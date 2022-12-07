// Input:
// M = 5, N = 4
// A[] = {2,3,7,10,12}
// B[] = {1,5,7,8}
// Output: 35
// Explanation: The path will be 1+5+7+10+12
// = 35.

#include<bits/stdc++.h>
using namespace std;
int max_path_sum(int a[], int b[], int l1, int l2){
    int sum_x = INT_MIN;
    int sum_y = INT_MIN;

    int i = 0;
    int j = 0;

    int sum = INT_MIN;
    

    while(i < l1 && j < l2){

        if(a[i] < b[j]){
            sum_x += a[i];
            i++;
        }else if(a[i] > b[j]){
            sum_y += b[j];
            j++;
        }else{
            sum += max(sum_x,sum_y) + a[i];
            i++;
            j++;
            sum_x = 0;
            sum_y = 0;
        }
    }

    while(j < l2){
        sum_y += b[j++];
    }
    while(i < l1){
        sum_x += a[i++];
    }

    sum += max(sum_x,sum_y);
    return sum;

}
int main(){
    int M = 5, N = 4;
    int A[] = {2,3,7,10,12};
    int B[] = {1,5,7,8};

    cout<<max_path_sum(A,B,M,N);
}