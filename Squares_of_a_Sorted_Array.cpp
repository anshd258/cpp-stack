//Given an integer array nums sorted in non-decreasing order, return an array of the squares of each number sorted in non-decreasing order.

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int l=nums.size();
        for(int i=0;i<l;i++)
        {
           nums[i] =nums[i]*nums[i];
    
        }
        sort(nums.begin(),nums.end());
        return nums;
    }
};