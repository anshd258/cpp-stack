#include<iostream>
using namespace std;
 
int main()  
{  
int num,i;
int f = 1;    
 
cout << "Enter a number:";    
cin >> num;  
 
for (i=num; i>1; i--)   
f = f * i;  
 
cout << num << "!" << "=" << f;  
return 0;
}
