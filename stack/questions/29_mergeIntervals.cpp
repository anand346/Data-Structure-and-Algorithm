// https://www.youtube.com/watch?v=RGr2RuH6iH4

#include<bits/stdc++.h>
using namespace std;


class Solution{

    public :
        // try to implement using stack 
        vector<vector<int>> merge(vector<vector<int>>& intervals) {
            
            vector<vector<int>> ans;
            sort(intervals.begin(),intervals.end());
            ans.push_back(intervals[0]);
            
            for(int i = 1;i < intervals.size();i++){
                if(ans.back()[1] >= intervals[i][0]){
                    ans.back()[1] = max(ans.back()[1],intervals[i][1]);
                }else{
                    ans.push_back(intervals[i]);
                }
            }
            return ans;
                
            
        }
}

int main(){

}