#include<iostream>
 
using namespace std;
#define INT_BITS 32
class gfg
{
     

public:
/*Function to left rotate n by d bits*/
int leftRotate(int n, unsigned int d)
{
     
    return (n << d)|(n >> (INT_BITS - d));
}
 
/*Function to right rotate n by d bits*/
int rightRotate(int n, unsigned int d)
{
    return (n >> d)|(n << (INT_BITS - d));
}
};
 
/* Driver code*/
int main()
{
    gfg g;
    int n = 16;
    int d = 2;
    cout << "Left Rotation of " << n <<
            " by " << d << " is ";
    cout << g.leftRotate(n, d);
    cout << "\nRight Rotation of " << n <<
            " by " << d << " is ";
    cout << g.rightRotate(n, d);
    getchar();
}
 
// This code is contributed by SoM15242