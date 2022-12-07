// https://www.youtube.com/watch?v=Z5AEc12ieOs

#include<bits/stdc++.h>
using namespace std;


class Solution{
    public :

        int findCelebrity(vector<vector<int>>&a ,int n){

            int in[n] = {0};
            int out[n] = {0};

            for(int i = 0;i <n;i++){
                for(int j = 0;j < n;j++){
                    if(a[i][j] == 1){
                        out[i]++;
                        in[j]++;
                    }
                }
            }

            for(int i = 0;i < n;i++){
                if(in[i] == n-1 and out[i] == 0){
                    return i;
                }
            }
            return -1;
        }
}