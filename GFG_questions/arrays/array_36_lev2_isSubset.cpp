// Input:
// a1[] = {11, 1, 13, 21, 3, 7}
// a2[] = {11, 3, 7, 1}
// Output:
// Yes
// Explanation:
// a2[] is a subset of a1[]


#include<bits/stdc++.h>
using namespace std;
string isSubset(int a1[], int a2[], int n, int m){
    int i = 0,j=0;
    sort(a1,a1+n);
    sort(a2,a2+m);
    while(j < m){
        if(a1[i] == a2[j]){
            i++;
            j++;
        }else if(a1[i] > a2[j]){
            return "No";
        }else{
            i++;
        }
    }
    return "Yes";
}
int main(){
    int a1[] = {11, 1, 13, 21, 3, 7};
    int a2[] = {11, 3, 7, 1};

    cout<<isSubset(a1,a2,6,4);
}