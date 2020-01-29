#include <iostream>
#include <fstream>
using namespace std;

int printPrimes(int a, int b)
{
    int primeCount = 0;
    for(int i = a; i <= b; i++)
    {
        bool isPrime = true;
        for(int j = 2; j <= i / 2; ++j)
        {
            if(i % j == 0)
            {
                isPrime = false;
                break;
            }
        }
        if(isPrime)
        {
            primeCount++;
        }
    }
    return primeCount;
}



int main()
{
    ifstream primesin;
    ofstream primesout;
    int a, b;

    primesin.open("primes.in");
    primesout.open("primes.out");

    primesin >> a >> b;

    primesout << printPrimes(a, b);

    return 0;
}
