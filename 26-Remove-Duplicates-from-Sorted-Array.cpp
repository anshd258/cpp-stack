#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        auto eu=nums.end();
        
        for(auto i=nums.begin();i!=nums.end();i++)
        {
            eu = remove(i+1,eu,*i);
        }
        nums.erase(eu,nums.end());
        int size=nums.size();
        return size;
    }
};

int main()
{
   

    vector <int> num {0,0,1,1,1,2,3,3,3,3,4,5,5,2,5,5,6,6,8,9,5,6,5,6,5,6,5,6,5,9,8,9,8,2,3,2,3,2,6,5,9,8,7,4,1,2,0,3,2,6,5,9,8,7,4,1,0};
 Solution piss;


 cout<<"-------------"<<piss.removeDuplicates(num)<<"\n";
 for(auto i=num.begin();i!=num.end();i++)
 cout<<*i;
 

}