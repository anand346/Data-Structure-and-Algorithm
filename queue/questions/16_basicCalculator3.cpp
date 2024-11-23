// https://www.youtube.com/watch?v=C_jxn1hTn6Q
// https://leetcode.com/problems/basic-calculator-iii/


#include<bits/stdc++.h>
using namespace std;


class Solution{

    public :

        int helper(queue<int> q){
            int num = prev = sum = 0;
            char prevOP = '+';

            while(!q.empty()){
                char c = q.front();
                if(c >= '0' and c <= '9'){
                    num = num*10 + c-'0';
                }else if(c == '('){
                    num = helper(q);
                }else{
                    switch(prevOP){
                        case '+' : 
                            sum += prev;
                            prev = num;
                            break;
                        
                        case '-' :
                            sum += prev;
                            prev = -num;
                            break;

                        case '*' :
                            prev *= num;
                            break;

                        case '/' :
                            prev /= num;
                            break;
                    }
                    if(c == ')') break;
                    prevOP = c;
                    num = 0;
                }
            }
            return prev + sum;
        }

        int calculate(string s){

            queue<char> q ;

            for(auto c : s){
                if(c != ' '){
                    q.push(c);
                }
            }
            q.push(' ');
            return helper(q);
        }
}