#include<bits/stdc++.h>

using namespace std;



class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        auto ma=nums.end();
        
        for(auto i=nums.begin();i!=nums.end();i++)
        {
            ma= remove(i,ma,val);
        }
        nums.erase(ma,nums.end());
        return nums.size();
    }
};