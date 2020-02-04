#include <iostream>
#include <string>
using namespace std;

static int previousNumber = 1;
static int currentNumber = 1;

void fibNumbers(int);

int main()
{
    int numCount;

    cout << "How many fibonacci numbers you want to calculate: ";
    cin >> numCount;

    fibNumbers(numCount);

    return 0;
}

void fibNumbers(int numCount)
{
    int nextNumber;

    if(numCount > 0)
    {
        if(currentNumber == 1)
            {
                cout << previousNumber << " ";
            }

        cout << currentNumber << " ";

        nextNumber = currentNumber + previousNumber;
        previousNumber = currentNumber;
        currentNumber = nextNumber;

        fibNumbers(numCount-1);
    }
}




