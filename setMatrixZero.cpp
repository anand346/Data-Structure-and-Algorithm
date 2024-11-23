#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    // Q.1

    void setZeroes(vector<vector<int>>& matrix) {
        
        bool r = false,c=false;
        for(int i = 0;i < matrix.size();i++){
            for(int j = 0;j < matrix[0].size();j++){
                if(matrix[i][j] == 0){
                    if(i == 0) r = true;
                    if(j == 0) c = true;
                    
                    matrix[0][j] = matrix[i][0] = 0;
                }
            }
        }
        
        for(int i = 1;i < matrix.size();i++){
            for(int j = 1;j < matrix[0].size();j++){
                if(matrix[i][0] == 0 || matrix[0][j] == 0){
                    matrix[i][j] = 0;
                }
            }
        }
        
        if(c){
            for(int i = 0;i < matrix.size();i++){
                matrix[i][0] = 0;
            }
        }
        
        if(r){
            for(int i = 0;i < matrix[0].size();i++){
                matrix[0][i] = 0;
            }
        }

        for(int i = 0;i < matrix.size();i++){
            for(int j = 0;j < matrix[0].size();j++){
                cout<<matrix[i][j]<<" ";
            }

            cout<<endl;
        }
    }

    // Q.2

    int maxDiff(vector<int> &arr){


        int n = arr.size();

        if(n <=2){
            return -1;
        }
        int maxSoFar = INT_MIN;
        int minSoFar = INT_MAX;

        for(int i = 0;i < n;i++){
            if(arr[i] > maxSoFar){
                maxSoFar = arr[i];
            }

            if(arr[n-i-1] < minSoFar){
                minSoFar = arr[n-i-1];
            }
        }

        return (maxSoFar-minSoFar);
    }
};


int main(){
    Solution s;
    vector<vector<int>> arr = {{1,1,1},
                               {1,0,1},
                               {1,1,1}
                            };

    s.setZeroes(arr);

    


}


q.3 SQL Queries

1.CREATE TABLE WORKER(
        WORKER_ID INT NOT NULL AUTO_INCREMENT,
        FIRST_NAME VARCHAR(20) NOT NULL,
        LAST_NAME VARCHAR(20) NOT NULL,
        SALARY INT NOT NULL,
        JOINING_DATE DATETIME NOT NULL ,
        DEPARTMENT VARCHAR(20) NOT NULL ,
    
        PRIMARY KEY (WORKER_ID)
    );

INSERT INTO WORKER(FIRST_NAME,LAST_NAME,SALARY,JOINING_DATE,DEPARTMENT) VALUES("Monika","Arora",100000,CURRENT_TIMESTAMP,"HR");
INSERT INTO WORKER(FIRST_NAME,LAST_NAME,SALARY,JOINING_DATE,DEPARTMENT) VALUES("Niharika","Verma",80000,CURRENT_TIMESTAMP,"Admin");
INSERT INTO WORKER(FIRST_NAME,LAST_NAME,SALARY,JOINING_DATE,DEPARTMENT) VALUES("Monika","Arora",300000,CURRENT_TIMESTAMP,"HR");
INSERT INTO WORKER(FIRST_NAME,LAST_NAME,SALARY,JOINING_DATE,DEPARTMENT) VALUES("Monika","Arora",500000,CURRENT_TIMESTAMP,"Admin");
INSERT INTO WORKER(FIRST_NAME,LAST_NAME,SALARY,JOINING_DATE,DEPARTMENT) VALUES("Monika","Arora",500000,CURRENT_TIMESTAMP,"Admin");
INSERT INTO WORKER(FIRST_NAME,LAST_NAME,SALARY,JOINING_DATE,DEPARTMENT) VALUES("Monika","Arora",200000,CURRENT_TIMESTAMP,"Account");
INSERT INTO WORKER(FIRST_NAME,LAST_NAME,SALARY,JOINING_DATE,DEPARTMENT) VALUES("Monika","Arora",75000,CURRENT_TIMESTAMP,"Account");
INSERT INTO WORKER(FIRST_NAME,LAST_NAME,SALARY,JOINING_DATE,DEPARTMENT) VALUES("Monika","Arora",90000,CURRENT_TIMESTAMP,"Admin");

2. SELECT DISTINCT DEPARTMENT as dept,COUNT(WORKER_ID) as count FROM WORKER;

3.a) SELECT FIRST_NAME FROM WORKER WHERE SALARY=100000;
3.b) SELECT FIRST_NAME FROM WORKER WHERE SALARY=90000;
3.c) SELECT FIRST_NAME FROM WORKER WHERE SALARY=300000;
3.d) SELECT FIRST_NAME FROM WORKER WHERE SALARY=500000;
3.e) SELECT FIRST_NAME FROM WORKER WHERE SALARY=200000;
3.f) SELECT FIRST_NAME FROM WORKER WHERE SALARY=75000;
3.g) SELECT FIRST_NAME FROM WORKER WHERE SALARY=80000;

4.a) SELECT AVG(SALARY) as avg FROM WORKER WHERE DEPARTMENT="HR";
4.b) SELECT AVG(SALARY) as avg FROM WORKER WHERE DEPARTMENT="Admin";
4.c) SELECT AVG(SALARY) as avg FROM WORKER WHERE DEPARTMENT="Account";
