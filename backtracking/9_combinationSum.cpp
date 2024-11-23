// https://www.youtube.com/watch?v=XluVO8rlRf4

#include<bits/stdc++.h>
using namespace std;


class Solution{
    public :
        

        void solve(vector<int> &a,int b,vector<int> &v,int i,vector<vector<int>> &ans){


            if(b == 0){
                ans.push_back(v);
            }
            if(i == a.size()){
                return ;
            }
            while(i < a.size() && b-a[i] >= 0){

                v.push_back(a[i]);
                solve(a,b-a[i],v,i,ans);
                i++;
                v.pop_back();                
            }
        }

        vector<vector<int>> combinationSum(vector<int> &a,int b){
        
            vector<vector<int>> ans;
            sort(a.begin(),a.end());
            set<int> s(a.begin(),a.end());
            a.assign(s.begin(),s.end());
            vector<int> v = {0};
            solve(a,b,v,0,ans);
            return ans;
        }
};

int main(){
    Solution s;
    vector<int> a = {2,3,6,7};
    int target = 7;
    vector<vector<int>> ans = s.combinationSum(a,target);

    for(int i = 0;i < ans.size();i++){
        for(int j = 0;j < ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }

        cout<<endl;
    }
}