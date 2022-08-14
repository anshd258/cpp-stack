//Given an array nums of integers, return how many of them contain an even number of digits.

#include<iostream>
#include<vector>

using namespace std;



class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int ans=0;
        for(int i:nums)
        {  
            int rec=0;
            while(i>0)
            { rec++;
               i= i/10;
                
               
            }
         if(rec%2==0)
             ans++;
        }
        return ans;
    }
};