/*You are given two strings,  and , separated by a new line. Each string will consist of lower case Latin characters ('a'-'z').

OUTPUT

In the first line print two space-separated integers, representing the length of  and  respectively.
In the second line print the string produced by concatenating  and  ().
In the third line print two strings separated by a space,  and .  and  are the same as  and , respectively,
 except that their first characters are swapped.
 */

#include <iostream>
#include <string>
using namespace std;

int main() {
	string a;
    string b;
    cin>>a;
    cin>>b;
    cout<<a.size()<<" "<<b.size()<<"\n";
    cout<<a+b<<"\n";
    char c=a[0];
    a[0]=b[0];
    b[0]=c;
    cout<<a<<" "<<b;
    
  
    return 0;
}