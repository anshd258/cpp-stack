///Highly divisible triangular number
//The sequence of triangle numbers is generated by adding the natural numbers. So the 7th triangle number would be 1 + 2 + 3 + 4 + 5 + 6 + 7 = 28. The first ten terms would be:

//1, 3, 6, 10, 15, 21, 28, 36, 45, 55, ...

//Let us list the factors of the first seven triangle numbers:

 //1: 1
 //3: 1,3
 //6: 1,2,3,6
//10: 1,2,5,10
//15: 1,3,5,15
//21: 1,3,7,21
//28: 1,2,4,7,14,28
//We can see that 28 is the first triangle number to have over five divisors.

//What is the value of the first triangle number to have over five hundred divisors?


#include<iostream>
using namespace std;


bool is_divisible(int sum){

int divisers = 0;

for( int i=1 ; i<=sum ; i++)
{

    if( sum % i == 0)
    {
        divisers ++;
    }

}

    if( divisers < 5)
    {
        return false;
    }
    else
    {
        cout<<divisers<<endl;
        return true;
    }



}

int main()
{
    unsigned long long int target=20,i,j,sum=0,divisers;


        for( i=1 ; i<=target ; i++)
        {
            sum+=i;

        if(is_divisible(sum))
        {
            cout<<sum;
            return 0;
        }
        }

}
