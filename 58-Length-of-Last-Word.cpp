#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        if (s.size()==0)
            return 0;
        int len=0;
        int i=s.size()-1;
       
        while(i>=0&&s[i]==' '){
            i--;

        }
       while(i>=0)
        {
            if(s[i]==' '){
                break;
            }
         
            i--;
                len++;
        }
            
        return len;
    }
};