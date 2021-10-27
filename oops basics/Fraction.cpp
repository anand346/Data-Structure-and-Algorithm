#include <iostream>
using namespace std;
class Fraction{
    int numerator;
    int denominator;

    public : 
        Fraction(int numerator ,int denominator){
            this->numerator = numerator;
            this->denominator = denominator;
        }
        void print(){
            cout<<this->numerator<<"/"<<this->denominator<<endl;
        }
        void multiply(Fraction const &f2){
            int numMul = this->numerator * f2.numerator;
            int denMul = this->denominator * f2.denominator;

            this->numerator = numMul;
            this->denominator = denMul;

            this->simplify();
        }
        void add(Fraction const &f2){
            int lcm = this->denominator * f2.denominator;
            int x = lcm/this->denominator;
            int y = lcm/f2.denominator;
            int sum = this->numerator*x + f2.numerator*y;
            this->numerator = sum;
            this->denominator = lcm;

            this->simplify();
        }
        //inbuilt function for gcd int c = __gcd(a,b);
        void simplify(){
            int gcd = 1;
            int j = min(this->numerator,this->denominator);
            for(int i = 1; i <= j; i++){
                if(this->denominator%i == 0 && this->numerator%i == 0){
                    gcd = i;
                }
            }
            this->numerator /= gcd; 
            this->denominator /= gcd; 
        }
};
int main(){
    Fraction f1(20,4);
    Fraction f2(40,5);
    f1.multiply(f2);
    f1.print();
}