// https://youtu.be/D0pv3TQoDJE

#include<bits/stdc++.h>
using namespace std;


// int swapBits(int x, int p1, int p2, int n)
// {
// 	/* Move all bits of first set to rightmost side */
// 	unsigned int set1 = (x >> p1) & ((1U << n) - 1);

// 	/* Move all bits of second set to rightmost side */
// 	unsigned int set2 = (x >> p2) & ((1U << n) - 1);

// 	/* Xor the two sets */
// 	unsigned int Xor = (set1 ^ set2);

// 	/* Put the Xor bits back to their original positions */
// 	Xor = (Xor << p1) | (Xor << p2);

// 	/* Xor the 'Xor' with the original number so that the
// 	two sets are swapped */
// 	unsigned int result = x ^ Xor;

// 	return result;
// }


int swapBits(int x,int p1, int p2, int n){

    int hello = ((x>>p1) ^ (x>>p2)) & ((1U<<n)-1);

    return x^((hello<<p1) | (hello<<p2));
}

int main(){
    cout<<swapBits(47,1,5,3);

}