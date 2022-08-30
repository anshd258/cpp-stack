#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        bool samerow;
        vector<string> result;
      
        unordered_map <char , int> character;
        string temp="qwertyuiopQWERTYUIOP";
        for(char &i : temp )
            character[i]=1;
        temp="asdfghjklASDFGHJKL";
        for(char &b : temp )
            character[b]=2;
        temp= "zxcvbnmZXCVBNM";
        for(char &r : temp )
            character[r]=3;
        
        for (string &m:words){
            samerow=true;
        
            for (int j=1;j<m.size();j++){
         
                if(character[m[j]]==character[m[0]])
                {
                    samerow=true;
                }
              else{
                  samerow=false;
                  break;
              }
                
            }
            if(samerow)
                result.push_back(m);
        }
        return result;
    }
};