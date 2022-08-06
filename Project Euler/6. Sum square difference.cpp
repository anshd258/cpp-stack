/// Sum square difference

//The sum of the squares of the first ten natural numbers is,
//  1² + 2² .... 10² = 385
//The square of the sum of the first ten natural numbers is,
// (1 + 2 + 3 ... 10)² = 55² =3025
//Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is .
//3025 - 385 =2640
//Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.

#include<iostream>
using namespace std;

int main()
{
    unsigned long long int sum_of_the_square=0, square_of_the_sum, sots=0, i, limit, difference, total;


    cout<<"Enter the limit:";
    cin>>limit;

    for( i = 1 ; i <= limit ; ++i )
    {

        sum_of_the_square += i*i;


        sots += i;

        if(i == limit )
        {
                square_of_the_sum = sots*sots ;

        }


    }



    difference = square_of_the_sum - sum_of_the_square;


    cout<<"The difference is:"<<difference;




return 0;
}
