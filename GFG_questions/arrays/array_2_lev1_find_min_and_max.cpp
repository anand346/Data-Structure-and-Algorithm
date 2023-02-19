// find min and max from given array
//  N = 6
//  A[] = {3, 2, 1, 56, 10000, 167}
// output -> 1 , 10000

#include <bits/stdc++.h>
using namespace std;
pair<long long, long long> getMinMax(long long arr[], int n)
{
    int max = INT_MIN;
    int min = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    pair<long long, long long> result;
    result.first = min;
    result.second = max;
    return result;
}
int main()
{
    long long A[] = {3, 2, 1, 56, 10000, 167};
    pair<long long, long long> result = getMinMax(A, 6);
    cout << result.first << " " << result.second;
}