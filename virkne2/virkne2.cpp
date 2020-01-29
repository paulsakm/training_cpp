#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <bits/stdc++.h>
using namespace std;

int numberString(int n, int m)
{
    string numberString;
    int number;
    for(int i = n; i <= m; i++)
    {
       numberString += std::to_string(i);
    }
    std::istringstream stringToNumber(numberString);
    stringToNumber >> number;

    return number;
}

int digitCount(int number)
{
    int digCount = 0;
    while(number > 0)
    {
        digCount++;
        number /= 10;
    }
    return digCount;
}

int findNumber(int number, int arraySize, int k)
{
    int arr[arraySize];
    int i = 0;
    while(number > 0)
    {
        int digit = number % 10;
        arr[i] = digit;
        number /= 10;
        i++;
    }
    sort(arr, arr+arraySize, greater<int>());

    for(i = 0; i < arraySize; i++)
    {
        if(i == k-1)
        {
            return arr[i];
        }
    }
}

int main()
{
    ifstream virkne2in;
    ofstream virkne2out;
    int n, m, k;

    virkne2in.open("virkne2.in");
    virkne2out.open("virkne2.out");

    virkne2in >> n >> m >> k;

    int fileNumber = numberString(n, m);
    int arraySize = digitCount(fileNumber);

    if (arraySize < k)
    {
        virkne2out << "NAV";
    }
    else
    {
        virkne2out << findNumber(fileNumber, arraySize, k);
    }

    return 0;
}
