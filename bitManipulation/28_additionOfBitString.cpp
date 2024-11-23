#include <bits/stdc++.h>
using namespace std;

// The function that adds two-bit sequences and returns the addition
string addBitStrings(string str1, string str2)
{
	string ans = "";
	int i = str1.size() - 1;
	int j = str2.size() - 1;
	int carry = 0;
	while (i >= 0 || j >= 0 || carry) {
		carry += ((i >= 0) ? (str1[i--] - '0') : (0));
		carry += ((j >= 0) ? (str2[j--] - '0') : (0));
		ans = char('0' + (carry % 2)) + ans;
		carry = carry / 2;
	}
	return ans;
}

// Driver program to test above functions
int main()
{
	string str1 = "1100011";
	string str2 = "10";

	cout << "Sum is " << addBitStrings(str1, str2);
	return 0;
}
