//Given a binary array nums, return the maximum number of consecutive 1's in the array.




#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans=0,me=0;
        for(auto i=nums.begin();i!=nums.end();i++)
        {
            if(*i==1){
                me++;
                if(ans<me)
                    ans=me;
            }
            else
                me=0;
        }
        return ans;
    }
};