///Summation of primes
//The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.
//Find the sum of all the primes below two million.



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

int main() {
	long long total{ 2 };

	for (int x = 3; x < 2000000; x+=2) {
		if (is_prime(x)) {
			total += x;
		}
	}
    cout << "Total: " << total;

}



