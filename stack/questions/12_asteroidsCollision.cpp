// https://www.youtube.com/watch?v=jAm5amcYsnA

// https://leetcode.com/problems/asteroid-collision/

#include<bits/stdc++.h>
using namespace std;

class Solution{

    public : 
        vector<int> asteroidCollision(vector<int>& asteroids) {
            
            int len = asteroids.size();
            int i = 0;
            int j = 1;

            while(j < len){

                if(i >= 0 && asteroids[i] > 0 && asteroids[j] < 0 ){
                    if(asteroids[i] == abs(asteroids[j])){
                        i--;
                        j++;
                    }else if(asteroids[i] < abs(asteroids[j])){
                        i--;
                    }else{
                        j++;
                    }
                }else{
                    asteroids[i+1] = asteroids[j];
                    i++;
                    j++;
                }
            }
            vector<int> res(i+1);
            for(int k = 0;k <= i;k++){
                res[k] = asteroids[k];
            }
            return res;  
        }
}