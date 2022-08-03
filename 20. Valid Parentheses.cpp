#include <iostream>
#include <string>
using namespace std;


int main()
{
     int n, num, digit, rev = 0, i=0, len,t=0,testcase;
     string s = "";

     cout<<"Enter number of testcases:";

     cin>>testcase;

     while(testcase){



     cout << "Enter the string: ";
     cin>>s;
     len = s.length();


     cout<<len<<"\n"<<s[0]<<s[1]<<endl;



        if( len %2 != 0)
        {
            cout<<"False";
        }
        else{

     do
     {
         if( s[i] == '('  && s[len -i -1] == ')' )
         {
             t +=1;
         }
         if( s[i] == '['  && s[len -i -1] == ']')
         {
             cout<<s[i]<<" "<<s[len -i -1]<<endl;;
             t +=1;


         }  if( s[i] == '{'  && s[len -i -1] == '}')
         {
             t +=1;

         }


     } while ( i == len  );

     cout<<t<<endl;

if( t == len/2)
{
    cout<<"true";
}


        }

     }

    return 0;
}
