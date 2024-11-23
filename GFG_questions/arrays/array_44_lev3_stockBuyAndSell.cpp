// Input:
// N = 7
// A[] = {100,180,260,310,40,535,695}
// Output:
// 1
// Explanation:
// One possible solution is (0 3) (4 6)
// We can buy stock on day 0,
// and sell it on 3rd day, which will 
// give us maximum profit. Now, we buy 
// stock on day 4 and sell it on day 6.

#include<bits/stdc++.h>
using namespace std;
vector<vector<int> > stockBuySell(vector<int> arr, int n){

    int buy = 0;
    int sell = 0;
    vector<int> temp;
    vector<vector<int>> result;
    bool key = false;
    for(int i = 1;i < n;i++){
        if(arr[i] > arr[i-1]){
            sell++;
        }else{
            if(buy != sell){
                temp.push_back(buy);
                temp.push_back(sell);
                result.push_back(temp);
                temp.clear();
                key = true;
                buy=sell=i;
            }
        }
    }

    if(buy != sell){
        temp.push_back(buy);
        temp.push_back(sell);
        result.push_back(temp);
        temp.clear();
        key = true;
    }

    if(!key){
        result.clear();
        return result;
    }else{
        return result;
    }

}
int main(){
    int N = 7;
    vector<int> A = {100,180,260,310,40,535,695};
    vector<vector<int>> result = stockBuySell(A,N) ;
    for(int i = 0;i < result.size();i++){
        for(int j = 0;j < result[i].size();j++){
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
}