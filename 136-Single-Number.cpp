#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int res=0;
        for(auto &m:nums){
            res^=m;
            bitset<4> a(res);
          cout<<  a.to_string()<<"\n";
        }
        
        
        return res;
    }
};

int main(){
Solution s1;

  vector<int> mass={8,2,8,2,9,4,9,5,3,4,5};
 cout<< s1.singleNumber(mass);

}