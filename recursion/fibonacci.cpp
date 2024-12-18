#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int fibonacci(int n){
    if(n == 0){
        return 0;
    }
    if(n == 1){
        return 1;
    }
    int smallO1 = fibonacci(n - 1);
    int smallO2 = fibonacci(n - 2);
    return smallO1+smallO2;
}
int findGCD(int num1,int num2){
    if(num2 == 0){
        return num1;    
    }
    return findGCD(num2,num1%num2);
}
int factorial(int n){
    if(n < 1){
        return 1;
    }
    int result = factorial(n-1);
    return n*result;
}
int power(int n, int x){
    if(x == 0){
        return 1;
    }
    if(x < 0){
        return -1;
    }
    int result = power(n,x-1);
    return result*n;
    
}
int print(int n){   
    if(n <= 1){
        return 1;
    }
    cout<<print(n-1)<<" ";
    return n;
}
void fib(int n){
    int e1=0,e2=1,number;
    cout<<e1<<" "<<e2<<" ";
    for(int i = 2; i < n;i++){
        number = e1 + e2;
        cout<<number<<" ";
        e1 = e2;
        e2 = number;
    }
}
int countNoOfDigit(int n){
    if(n/10 == 0){
        return 1;
    }
    int result =  countNoOfDigit(n/10);
    return result + 1;
}
int sumOfDigits(int n){
    if(n ==  0){
        return 0;
    }
    int result = sumOfDigits(n/10);
    int last_digit = n%10;
    return result + last_digit;
}
int multiply(int m,int n){  
    if(n == 0){
        return 0;
    }
    int result = multiply(m,n-1);
    return result+m;
}
long long countZeros(long long m){
    if(m == 0){
        return 0;
    }
    long long result = countZeros(m/10);
    long long lastDigit = m%10;
    if(lastDigit == 0){
        return result + 1;
    }else{
        return result;
    }
}
double gSum(int n){
    if(n ==0){
        return 1;
    }
    double result = gSum(n-1);
    return result + 1.0/pow(2,n);   
}
int main(){
    // int n;
    // cout<<"Enter position of fibonacci series : "<<endl;
    // cin>>n;
    // cout<<"number at "<<n<<" position is : "<<fibonacci(n);
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       
    
    // int n;
    // cout<<"Enter number for factorial : "<<endl;
    // cin>>n;
    // cout<<"factorial is : "<<factorial(n);


    // int n,x;
    // cout<<"enter no. and exponent : "<<endl;
    // cin>>n>>x;
    // cout<<"result is : "<<power(n,x);

    // int n;
    // cout<<"enter no. : "<<endl;
    // cin>>n;
    // fib(n);

    // int n;
    // cout<<"enter no."<<endl;
    // cin>>n;
    // cout<<"result is : "<<print(n);
    

    // int n;
    // cout<<"enter no."<<endl;
    // cin>>n;
    // cout<<"digits are : "<<count(n);
    
    
    // int n;
    // cout<<"enter no."<<endl;
    // cin>>n;
    // cout<<"sum is : "<<sumOfDigits(n);
    
    
    int m,n;
    cout<<"enter no."<<endl;
    cin>>m>>n;
    cout<<"multiplication is : "<<multiply(m,n);
    
    
    // long long m;
    // cout<<"enter no."<<endl;
    // cin>>m;
    // cout<<"zeros are : "<<countZeros(m);


    // int m;
    // cout<<"enter no."<<endl;
    // cin>>m;
    // cout<<"geometric sum is : "<<gSum(m);
}