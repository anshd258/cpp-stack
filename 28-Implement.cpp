#include<bits/stdc++.h>
using namespace std;
 class Solution {
    public:
     int strStr(string haystack, string needle) {
        int nl = needle.length();
        int hl = haystack.length();
        if(nl==0)return 0;
        for(int i=0; i<=hl-nl; i++){
            if(haystack.substr(i, nl) == needle)return i;
        }
        return -1;
    }
};

int main()
{
    string a = "a";
    string b = "a";

    Solution s;
   cout<< s.strStr(a,b);
}