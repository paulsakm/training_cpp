#include <iostream>
using namespace std;

static int i;


bool isPrime(int);

int main()
{
    int number;
    cout << "Enter the number, you want to check if it is prime: ";
    cin >> number;
    cout << endl;

    i = number / 2;

    if(number < 2)
    {
        cout << "Number: " << number << " is not prime";
    }
    else
    {
        if(isPrime(number))
        {
            cout << "Number: " << number << " is prime";
        }
        else
        {
            cout << "Number: " << number << " is not prime";
        }
    }

    cout << endl;

    return 0;
}

bool isPrime(int number)
{
    if(i == 1)
    {
        return true;
    }
    else if(number % i == 0)
    {
        return false;
    }
    else
    {
        i--;
        isPrime(number);
    }
}
