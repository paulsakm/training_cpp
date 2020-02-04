#include <iostream>
using namespace std;


static int digitCount = 0;

int digitNumber(int);

int main()
{
    int number;
    cout << "Enter the number you want to count digit: ";
    cin >> number;

    cout << endl;

    cout << "Digit count: " << digitNumber(number);

    return 0;
}

int digitNumber(int number)
{
    if(number > 0)
    {
        digitCount++;
        digitNumber(number/10);
    }
    return digitCount;
}
