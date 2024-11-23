// https://practice.geeksforgeeks.org/problems/find-distinct-elements2054/1

// User function Template for C++

class Solution{
public:
    // int distinct(vector<vector<int>> M, int n)
    // {
    //     int ct=0;
    //     unordered_map<int, int> mp;
    //     set<int> st;
    //     for(int i=0; i<n; i++) st.insert(M[0][i]);
        
    //     for(int i=1; i<n; i++){
    //         unordered_set<int> uniq(M[i].begin(), M[i].end());
    //         for(auto &x: uniq){
    //             if(st.count(x)>0) mp[x]++;
    //         }
    //     }
        
    //     for(auto &x: mp){
    //         if(x.second>=n-1) ct++;
    //     }
        
    //     return ct;
    // }
    
    int distinct(vector<vector<int>>& M, int N)
{
    if(N==1)
    return 1;
    unordered_map<int, int> freqMap;
    set<int> distinctSet;

    for (int j = 0; j < N; j++)
    {
        distinctSet.insert(M[0][j]);
    }

    for (int i = 1; i < N; i++)
    {
        unordered_set<int> uniqueElements(M[i].begin(), M[i].end());

        for (int num : uniqueElements)
        {
            if (distinctSet.count(num) > 0)
            {
                freqMap[num]++;
            }
        }
    }

    int cnt = 0;
    for (const auto& pair : freqMap)
    {
        if (pair.second >= N - 1)
        {
            cnt++;
        }
    }

    return cnt;
}


};