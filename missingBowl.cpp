
// Online IDE - Code Editor, Compiler, Interpreter
// 5 {1,3,5,9,11}
// 5 {2,4,6,10,12}
#include<bits/stdc++.h>
using namespace std;
int missingBowl(int a[],int n){
    int s = 0;
    int e = n-1;
    int mid = (s+e)/2;
    int sum = a[s] + a[e];
    int required = 0;
    while(s <= e){
        if(s == mid){
            required = sum-a[s];
        }
        s++;
        e--;
    }
    return required;
}
int main()
{
    int a[] = {1,3,5,9,11};
    cout<<missingBowl(a,5);
}




SELECT EMPLOYEE_INFO.EMPID , EMPLOYEE_INFO.EMPNAME , DEPT_INFO.DEPTID , DEPT_INFO.DEPTNAME FROM EMPLOYEE_INFO INNER JOIN DEPT_INFO ON EMPLOYEE_INFO.DEPTID = DEPT_INFO.DEPTID ;














SELECT EMPLOYEE_INFO.EMPID , EMPLOYEE_INFO.EMPNAME FROM EMPLOYEE_INFO INNER JOIN DEPT_INFO ON EMPLOYEE_INFO.DEPTID = DEPT_INFO.DEPTID WHERE EMPLOYEE_INFO.DEPTID = NULL;




datediff( YY, birthDate, getdate()) as age

SELECT EMPID , EMPNAME , DOB ,datediff( YY, DOB , getdate()) as AGE FROM EMPLOYEE_INFO;