///Special Pythagorean triplet

//A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,
//a2 + b2 = c2
//For example, 32 + 42 = 9 + 16 = 25 = 52.
//There exists exactly one Pythagorean triplet for which a + b + c = 1000.
//Find the product abc.


#include<iostream>
using namespace std;

int main()
{
    unsigned long long int i,j,k,target=1000,product,sum;

    for(i=1;i<=target;i++)
    {
            for(j=1;j<=target;j++)
            {
                    for(k=1;k<=target;k++)
                    {
                        if( i<j && j<k)
                        {



                        if( i + j + k == target && i*i + j*j == k*k)
                        {
                            product = i*j*k;
                        }

                    }}
            }
    }
            cout<<"The product is:"<<product<<endl;
            return 0;
}
