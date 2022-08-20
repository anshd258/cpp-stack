#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>an;
        for(int i=0;i+2<nums.size();i++){
            int s=i+1,m=nums.size()-1;
            
            while(s<m){
                 
                if(nums[s]+nums[m]+nums[i]==0){
                    cout<<i<<s<<m;
                    cout<<nums[i]<<nums[s]<<nums[m];
                    an.push_back({nums[i],nums[s],nums[m]});
                while(s<m&&nums[s]==nums[s+1]) s++;
                while(s<m&&nums[m]==nums[m-1]) m--;
                s++,m--;}
                else if(nums[s]+nums[m]+nums[i]>0)
                    m--;
                else
                    s++;
            }
         while(i<nums.size()-1&&nums[i]==nums[i+1]) i++;
            
        }
        
        
        
        
        return an;
    }
};

int main()
{
    Solution so;
    vector<int> puss= {-1,0,2,-1,1,-4,2,3,-1,-5,-6,-7,7,8,3,0,-3,-5,-5,-7,-8,-2,-1,-9,0};
    /* clock_t clock(void) returns the number of clock ticks
       elapsed since the program was launched.To get the number 
       of seconds used by the CPU, you will need to divide by 
       CLOCKS_PER_SEC.where CLOCKS_PER_SEC is 1000000 on typical
       32 bit system.  */
    clock_t start, end;
  
    /* Recording the starting clock tick.*/
    start = clock();
 ios_base::sync_with_stdio(true);
    so.threeSum(puss);
  
    // Recording the end clock tick.
    end = clock();
  
    // Calculating total time taken by the program.
    double time_taken = double(end - start) / double(CLOCKS_PER_SEC);
    cout << "Time taken by program is : " << fixed 
         << time_taken << setprecision(5);
    cout << " sec " << endl;
    return 0;
}