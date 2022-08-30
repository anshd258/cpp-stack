
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int mySqrt(int x) {
 if (x == 0 || x == 1)
        return x;
 

    long start = 1 ,end= x/2, ans;
    while (start <= end) {
       long m= (start + end) / 2;
 
        
        long sqr = m * m;
        if (sqr == x)
            return m;
 

        if (sqr <= x) {
            
            start = m + 1;
            ans = m;
        }
        else
            end = m - 1;
    }
    return ans;
        
    }
};
int main()
{
    Solution s1;
    int m=226565655;
    cout<<s1.mySqrt(m);

}