#include<bits/stdc++.h>
using namespace std;

class Solution{

    public :
        int maxBinTreeGCD(vector<vector<int>> arr , int N){
            map<int,int> mp;

            int max_gcd = INT_MIN;

            for(auto pair : arr){
                int x = pair[0];
                int y = pair[1];

                if(mp[x] != 0){
                    mp[x] = __gcd(mp[x],y);
                    if(mp[x] > max_gcd){
                        max_gcd = mp[x];
                    }
                }else{
                    mp[x] = y;
                }
            }

            return max_gcd < 0 ? 0 : max_gcd;
        }
}