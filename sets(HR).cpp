/*The first line of the input contains  where  is the number of queries. The next  lines contain  query each. Each query consists of 
two integers  and  where  is the type of the query and  is an integer.
For queries of type  print "Yes"(without quotes) if the number  is present in the set and if the number is not present, then print "No"(without quotes).
Each query of type  should be printed in a new line.
Each query is of one of the following three types:

  1 : Add an element  to the set.
  2 : Delete an element  from the set. (If the number  is not present in the set, then do nothing).
  3 : If the number  is present in the set, then print "Yes"(without quotes) else print "No"(without quotes).
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    int c,t,n;
    scanf("%d",&n);
    set<int>ns;
    while(n--)
    {
        cin>>c>>t;
        switch(c){
            case 1: ns.insert(t);
            break;
            case 2: ns.erase(t);
            break;
            case 3: if(ns.find(t)!=ns.end())
                cout<<"Yes \n";
                else
                cout<<"No \n";
                break;
        
            
        }
    }
    
    
    return 0;
}


