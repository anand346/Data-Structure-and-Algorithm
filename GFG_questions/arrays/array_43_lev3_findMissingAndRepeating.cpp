// Input:
// N = 2
// Arr[] = {2, 2}
// Output: 2 1
// Explanation: Repeating number is 2 and 
// smallest positive missing number is 1.


#include<bits/stdc++.h>
using namespace std;
vector<int> findTwoElement(int *arr, int n) {
    int maxEl = INT_MIN;
    for(int i = 0;i < n;i++){
        if(arr[i] > maxEl){
            maxEl = arr[i];
        }
    }
    vector<int> subs(maxEl+2,0);
    vector<int> result;
    int missing = -1;
    int repeating = -1;
    for(int i = 0;i < n;i++){
        subs[arr[i]]++;
    }
    int count = 0;
    for(int i = 1;i <= subs.size();i++){
        if(count == 2){
            break;
        }
        if(subs[i]){
            if(subs[i] == 2){
                repeating = i;
                count++;
            }
            if(subs[i] == 0){
                missing = i;
                count++;
            }
        }else{
            
            missing = i;
            count++;
            
        }
    }

    result.push_back(repeating);
    result.push_back(missing);
    return result;
}
int main(){
    int N = 2;
    int Arr[] = {2, 2};
    vector<int> result = findTwoElement(Arr,N);
    for(int i = 0;i < result.size();i++){
        cout<<result[i]<<" ";       
    }

}