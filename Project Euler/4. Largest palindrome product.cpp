/// Largest palindrome product

//A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
//Find the largest palindrome made from the product of two 3-digit numbers.


#include<iostream>
using namespace std;

bool check_palindrome(int product)
{
    int n = product;
    int last_digit;
    int reversed_num = 0;
    while (n > 0)
    {
        last_digit = n % 10;
        n = n/10;
        reversed_num = (reversed_num*10) + last_digit;
    }

    if (product == reversed_num)
    {


        return true;
    }

    else
    {
        return false;
    }
}


int main(){

unsigned long long int i,j,product,temp,greatest = 1,palendrome;


for( i= 1000    ; i >100 ; i--)
{

    for(j=1000; j>100;j--){
        product = i * j;

        if( check_palindrome(product))
        {
            if(product > greatest)
            {
                greatest = product;
            }
        }

    }


}


cout<<"The greatest palindrome in:"<<greatest;
return 0;

}
