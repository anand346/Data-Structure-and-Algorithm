// Input:
// n1 = 6; A = {1, 5, 10, 20, 40, 80}
// n2 = 5; B = {6, 7, 20, 80, 100}
// n3 = 8; C = {3, 4, 15, 20, 30, 70, 80, 120}
// Output: 20 80
// Explanation: 20 and 80 are the only
// common elements in A, B and C.


#include<bits/stdc++.h>
using namespace std;
vector<int> commonElements (int a[], int b[], int c[], int n1, int n2, int n3) {
    vector<int> result;
    set<int> ans;
    int xloc = 0;int yloc = 0;int zloc = 0;
    while(xloc != n1 && yloc != n2 && zloc !=  n3){
        if(a[xloc] == b[yloc] && b[yloc] == c[zloc]){
            ans.insert(a[xloc]);
            xloc++;
            yloc++;
            zloc++;
        }else if(a[xloc] <= b[yloc] && a[xloc] <= c[zloc]){
            xloc++;
        }else if(b[yloc] <= a[xloc] && b[yloc] <= c[zloc]){
            yloc++;
        }else{
            zloc++;
        }
    }
    for(auto it = ans.begin();it != ans.end();it++){
        result.push_back((*it));
    }
    return result;
}
int main(){
    int a[] = {1, 5, 10, 20, 40, 80};
    int b[] = {6, 7, 20, 80, 100};
    int c[] = {3, 4, 15, 20, 30, 70, 80, 120};
    int n1 = 6;int n2 = 5;int n3 = 8;
    vector<int> result = commonElements(a,b,c,n1,n2,n3);
    for(int i = 0;i < result.size();i++){
        cout<<result[i]<<" ";
    }
}