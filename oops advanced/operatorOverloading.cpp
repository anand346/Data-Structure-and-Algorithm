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
        Fraction operator*(Fraction const &f2) const {
            int numMul = this->numerator * f2.numerator;
            int denMul = this->denominator * f2.denominator;

            Fraction fnew(numMul,denMul);
            fnew.simplify();
            return fnew;
        }
        Fraction operator+(Fraction const &f2) const{
            int lcm = this->denominator * f2.denominator;
            int x = lcm/this->denominator;
            int y = lcm/f2.denominator;
            int sum = this->numerator*x + f2.numerator*y;
            
            Fraction fnew(sum,lcm);
            fnew.simplify();
            return fnew;
        }
        Fraction& operator++(){
            numerator = numerator + denominator;
            return *this;
        }
        Fraction operator++(int){
            Fraction fnew(numerator,denominator);
            numerator = numerator + denominator;
            simplify();
            fnew.simplify();
            return fnew;
        }
        Fraction& operator+=(Fraction const &f2){
            int lcm = this->denominator * f2.denominator;
            int x = lcm/this->denominator;
            int y = lcm/f2.denominator;
            int sum = this->numerator*x + f2.numerator*y;
            this->numerator = sum;
            this->denominator = lcm;
            simplify();            
            return *this;
        }
        void simplify(){
            int gcd = 1;
            for(int i = 1; i <= this->denominator; i++){
                if(this->denominator%i == 0 && this->numerator%i == 0){
                    gcd = i;
                }
            }
            this->numerator /= gcd; 
            this->denominator /= gcd; 
        }
        bool operator==(Fraction const &f2) const { //constant functions are those functions which doesn't change the property of current object i.e., f1;
            return (this->numerator == f2.numerator && this->denominator == f2.denominator);
        }
};
int main(){
    Fraction f1(10,3);
    Fraction f2(5,2);
    f1 += f2;
    f1.print();
    f2.print();
    // Fraction f3 = f1 * f2;
    // Fraction f3 = f1++;
    // f1.print();
    // f3.print();
    // f2.print();
    // f3.print();
    // ++(++f3);
    // f3.print();

    if(f1 == f1){
        cout<<"equal"<<endl;
    }else{
        cout<<"not equal"<<endl;        
    }
}