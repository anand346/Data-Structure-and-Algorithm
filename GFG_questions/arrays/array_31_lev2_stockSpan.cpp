// Input: 
// N = 7, price[] = [100 80 60 70 60 75 85]
// Output:
// 1 1 1 2 1 4 6
// Explanation:
// Traversing the given input span for 100 
// will be 1, 80 is smaller than 100 so the 
// span is 1, 60 is smaller than 80 so the 
// span is 1, 70 is greater than 60 so the 
// span is 2 and so on. Hence the output will 
// be 1 1 1 2 1 4 6.

// tech dose

//span is max number of consecutive days which stock price is lower than current day .
#include<bits/stdc++.h>
using namespace std;
vector<int> calculateSpan(int price[], int n){
    stack<int> st;
    st.push(0);
    int span[n+1];
    span[0] = 1;
    vector<int> ans;
    for(int i = 1;i < n;i++){
        while(!st.empty() && price[st.top()] <= price[i]){
            st.pop();
        }

        if(st.empty()){
            span[i] = i+1;
        }else{
            span[i] = i - st.top();
        }

        st.push(i);
    }

    for(int i = 0;i < n;i++){
        ans.push_back(span[i]);
    }

    return ans;
}
int main(){
    int price[] = {100,80,60,70,60,75,85};
    int n = 7;
    vector<int> ans = calculateSpan(price,n);
    for(int i = 0;i < ans.size();i++){
        cout<<ans[i]<<" ";
    }
}