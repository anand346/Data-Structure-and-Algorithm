// Input : 
// N = 8
// arr[] = {1, -1, 3, 2, -7, -5, 11, 6 }
// Output : 
// 1  3  2  11  6  -1  -7  -5


#include<bits/stdc++.h>
using namespace std;



void arrange(int a[], int n) { //arranging negative on the left side
    int negi = 0;
    int posi = n - 1;

    while (negi <= posi) {
        if (a[negi] < 0 && a[posi] < 0) {
            negi++;
        }
        else if (a[negi] > 0 && a[posi] < 0) {
            swap(a[negi], a[posi]);
            negi++;
            posi--;
        }
        else if (a[negi] > 0 && a[posi] > 0) posi--;
        else {
            negi++;
            posi--;
        }
    }
}

void mySwap(int arr[],int s,int e){ //arranging negative on the right side
    for(int i = s;i <= e-1;i++){
        swap(arr[i],arr[i+1]);
    }
}

void segregateElements(int arr[],int n){
        // Your code goes here
        // int s = n-1;
        // int j = n-1;
        // for(int i = n-1;i >= 0;i--){
        //     if(arr[i] < 0){
        //         mySwap(arr,i,j);
        //         // swap(arr[i],arr[j]);
        //         j--;
        //     }
        // }

        vector<int> hel; // arranging negative on the right side
        for(int i= 0;i < n;i++){
            if(arr[i] > 0){
                hel.push_back(arr[i]);
            }
        }
        for(int i= 0;i < n;i++){
            if(arr[i] < 0){
                hel.push_back(arr[i]);
            }
        }
        for(int i= 0;i < hel.size();i++){
            arr[i] = hel[i];
        }
    
}
int main(){
    int arr[] = {-5, 7, -3, -4, 9, 10, -1, 11 };
    segregateElements(arr,8);
    for(int i = 0;i < 8;i++){
        cout<<arr[i]<<" ";
    }

}