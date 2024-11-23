#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int fibonacci(int n){
    if(n == 0){
        return 0;
    }
    if(n == 1){
        return 1;
    }
    int small1 = fibonacci(n-1);
    int small2 = fibonacci(n-2);
    return small1+small2;
}
int factorial(int n){
    if(n == 0){
        return 1;
    }
    int small = factorial(n-1);
    return small*n;
}
int power(int m,int n){
    if(n == 0){
        return 1;
    }
    int small = power(m,n-1);
    return small*m;
}
int print(int n){
    if(n <=1){
        return 1;
    }
    cout<<print(n-1)<<" ";
    return n;
}
void fib(int n){
    int e1=0,e2=1,number;
    cout<<e1<<" "<<e2<<" ";
    for(int i = 2;i < n;i++){
        number = e1+e2;
        cout<<number<<" ";
        e1 = e2;
        e2= number;
    }
}
int count(int n){
    if(n/10 == 0){
        return 1;
    }
    int small = count(n/10);
    return small+ 1;
}
int sumOfDigits(int m){
    if(m/10 == 0){
        return 1;
    }
    int small = sumOfDigits(m/10);
    int lastDigit = m%10;
    return small+lastDigit;

}
int multiply(int m,int n){
    if(n == 0){
        return 0;
    }
    int small = multiply(m,n-1);
    return small + m;
}
int countZeroes(int m){
    if(m == 0){
        return 0;
    }
    int small = countZeroes(m/10);
    int lastDigit = m%10;
    if(lastDigit == 0){
        return small + 1;
    }else{
        return small;
    }
}
double gSum(int m){
    if(m == 0){
        return 1;
    }
    double small = gSum(m-1);
    return small + 1.0/pow(2,m);
}
int main(){
    // int n,num;
    // cout<<"Enter position for fibonacci series :  "<<endl;
    // cin>>n;
    // num = fibonacci(n);
    // cout<<"fibonacci no. at "<<n<<" position is "<<num;


    // int n;
    // cout<<"enter no. to find factorial :  "<<endl;
    // cin>>n;
    // cout<<"factorial is : "<<factorial(n)<<endl;


    // int m,n;
    // cout<<"enter no. to find power :  "<<endl;
    // cin>>m>>n;
    // cout<<"result is : "<<power(m,n)<<endl;

    // int m;
    // cout<<"enter no. to print :  "<<endl;
    // cin>>m;
    // cout<<"result is : "<<print(m)<<endl;
    
    
    // int m;
    // cout<<"enter no. for fibonacci print :  "<<endl;
    // cin>>m;
    // fib(m);

    // int m;
    // cout<<"enter no. for counting :  "<<endl;
    // cin>>m;
    // cout<<"digits are : "<<count(m);


    // int m;
    // cout<<"enter no. for sum :  "<<endl;
    // cin>>m;
    // cout<<"result are : "<<sumOfDigits(m);


    // int m,n;
    // cout<<"enter no. for multiplication :  "<<endl;
    // cin>>m>>n;
    // cout<<"result are : "<<multiply(m,n);

    // int m;
    // cout<<"enter no. for counting of zero :  "<<endl;
    // cin>>m;
    // cout<<"result are : "<<countZeroes(m);


    int m;
    cout<<"enter no. for gsum :  "<<endl;
    cin>>m;
    cout<<"result are : "<<gSum(m);
}