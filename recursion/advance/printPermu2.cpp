// https://leetcode.com/problems/permutations-ii/
// Given a collection of numbers, nums, that might contain duplicates, return all possible unique permutations in any order.

// https://leetcode.com/problems/combination-sum-ii/solutions/1277764/combination-sum-i-ii-and-iii-subsets-i-and-ii-permutations-i-and-ii-one-stop-c-solutions/

class Solution {
public:
    vector<vector<int>> result;
    
    vector<int> swap(vector<int> &nums, int a, int b){
        int temp = nums[a];
        nums[a] = nums[b];
        nums[b] = temp;
        return nums;
    }
    
    void perm(vector<int> &nums, int l, int r){
        if(l==r){
            result.push_back(nums);
            return;
        }
        set<int> s;
        for(int i = l; i <= r; i++){
                if(s.find(nums[i]) != s.end() )
                    continue;
                s.insert(nums[i]);
                nums = swap(nums, l, i);
                perm(nums, l+1, r);
                nums = swap(nums, l, i);  
        }
    }
    
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        perm(nums, 0, nums.size()-1);
        return result;  
    }
};