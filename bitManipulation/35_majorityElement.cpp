// https://youtu.be/0s3zqYaDInE

#include<bits/stdc++.h>
using namespace std;

//time complexity NlogN
void findMajority(int a[],int n){

    int len = sizeof(int)*8;

    int number = 0;

    for(int i = 0;i < len; i++){
        int count = 0;

        for(int j = 0; j < n;j++){
            if(a[j] & (1 << i)){
                count++;
            }
        }

        if(count > (n/2)){
            number += (1 << i);
        }

    }

    int count = 0;

    for(int i = 0;i < n;i++){
        if(a[i] == number){
            count++;
        }
    }

    if(count > (n/2)){
        cout<<number;
    }else{
        cout<<"majority element is not present";
    }
}

int main(){
    int arr[] = { 3, 3, 4, 2, 4, 4, 2, 4, 4 }; 
	int n = sizeof(arr) / sizeof(arr[0]); 
	findMajority(arr, n); 
    return 0;

}