#include <iostream>
using namespace std;

bool is_prime(int x)
{
    if(x == 1) return false;

    for(int i = 2; i < x; i++)
    {
        if(!(x%i)) return false;
    }

    return true;
}

int main()
{

    int prime_count = 0;
    int last_prime = 0;

    for(int i = 1; prime_count < 10001; i++)
    {
        if(is_prime(i))
        {
            prime_count+= 1;
            last_prime = i;
        }
    }


    cout<<"The last prime is:"<<last_prime;

    return 0;
}
