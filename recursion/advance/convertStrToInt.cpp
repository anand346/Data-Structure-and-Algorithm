#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int convertStrToInt(char str[], int n)
{
    if (n == 0)
    {
        return 0;
    }
    int small = convertStrToInt(str, n - 1);
    int lastDigit = str[n - 1] - '0';
    return small * 10 + lastDigit;
}

int myAtoi(string str)
{

    if (str.length() == 0)
    {
        return 0;
    }
    if (str.length() == 1)
    {
        if (isdigit(str[0]))
        {
            return str[0] - '0';
        }
        else
        {
            return 0;
        }
    }
    long long int result = 0;
    int indicator = 1;

    int i = str.find_first_not_of(' ');
    if (i == -1)
    {
        return 0;
    }
    if (str[i] == '-' || str[i] == '+')
        indicator = (str[i++] == '-') ? -1 : 1;

    while (isdigit(str[i]))
    {
        result = result * 10 + (str[i++] - '0');
        if (result * indicator >= INT_MAX)
            return INT_MAX;
        if (result * indicator <= INT_MIN)
            return INT_MIN;
    }

    return result * indicator;
}


int main()
{
    char str[] = "12345";
    int n = strlen(str);
    // int n = sizeof(str)/sizeof(str[0]);
    int result = convertStrToInt(str, n);
    cout << result << endl;
}