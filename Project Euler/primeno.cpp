#include<iostream>
using namespace std;
int main()
{
    int i, check=0, j;
    cout<<"Prime Numbers Between 1 to 100 are:\n";
    for(i=1; i<=100; i++)
    {
        for(j=2; j<i; j++)
        {
           if(i%j==0)
           {
               check++;
               break;
           }
        }
        if(check==0 && i!=1)
            cout<<i<<endl;
        check = 0;
    }
    cout<<endl;
    return 0;
}