// Input: 
// N = 6
// array[] = {1, 10, 3, 11, 6, 15}
// Output: 
// 2
// Explanation:
// 2 is the smallest integer value that cannot 
// be represented as sum of elements from the array.


#include<bits/stdc++.h>
using namespace std;
long long smallestpositive(vector<long long> array, int n)
    { 
        // code here 
        long long target= 1;
        long long res = 0;
        sort(array.begin(),array.end());
        for(int i = 0;i <n;i++){
            if(array[i] <= target){
                res += array[i];
                target = res +1;
            }else{
                return target;
            }
        }
        return target;
    } 
int main(){
    int n = 6;
    vector<long long> array = {1, 10, 3, 11, 6, 15};
    cout<<smallestpositive(array,n);
}