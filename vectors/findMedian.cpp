#include<bits/stdc++.h>
using namespace std;

int median(vector<vector<int>> &m, int r, int c){
    int low=0,high=1e9,desired=(((r * c) + 1) / 2);
    while (low <= high)
    {
        int mid = low + (high-low) / 2;
        int count = 0;
        for (int i = 0; i < r; ++i)  // Find count of elements smaller than mid
        count += upper_bound(m[i].begin(),m[i].end(), mid) - m[i].begin();
        if (count < desired)
            low=mid+1;
        else
            high=mid-1;
    }
    return low;
}

int main(){

}