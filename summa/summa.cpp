#include <iostream>
#include <fstream>
using namespace std;


int superSum(int number)
{
    while(number > 10)
    {
    int numberSum = 0;
        while(number > 0)
        {
            int digit = number % 10;
            numberSum += digit;
            number = number / 10;
        }
        number = numberSum;
    }
    return number;
}

int main()
{
    ifstream summain;
    ofstream summaout;
    int n, m;

    summain.open("super.in");
    summaout.open("super.out");

    summain >> n;
    summain >> m;
    int number = n*m;


    summaout << superSum(number);


    summain.close();
    summaout.close();

    return 0;
}
