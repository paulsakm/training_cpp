#include <iostream>
#include <fstream>
#include <bits/stdc++.h>
using namespace std;

bool isBigger(int a, int b)
{
    if(a > b){
        return true;
    }
    else
    {
        return false;
    }
}

int arrayCountA(int a)
{
    int digitCountA = a;
    int arrayCountA = 0;

    while(digitCountA > 0)
    {
        arrayCountA++;
        digitCountA = digitCountA / 10;
    }

    return arrayCountA;
}

int arrayCountB(int b)
{
    int digitCountB = b;
    int arrayCountB = 0;

    while(digitCountB > 0)
    {
        arrayCountB++;
        digitCountB = digitCountB / 10;
    }

    return arrayCountB;
}

bool numberComparisonA(int a, int b)
{
    int i;
    int digitCountA;
    int digitCountB;
    int arrCountA = arrayCountA(a);
    int arrCountB = arrayCountB(b);
    int arrA[arrCountA];
    int arrB[arrCountB];

    i = 0;
    digitCountA = a;
    while(digitCountA > 0)
    {
        int digit= digitCountA % 10;
        arrA[i] = digit;
        i++;
        digitCountA = digitCountA / 10;
    }
    sort(arrA, arrA+arrCountA, greater<int>());


    i = 0;
    digitCountB = b;
    while(digitCountB > 0)
    {
        int digit = digitCountB % 10;
        arrB[i] = digit;
        i++;
        digitCountB = digitCountB / 10;
    }


    bool equalTillLast = false;
    i = 0;
    int j = arrCountB-1;
    while((i < arrCountA-1)&&(j>0))
    {
        if(arrA[i] > arrB[j])
        {
            return true;
            break;
        }
        else if(arrA[i] == arrB[j])
        {
            equalTillLast = true;
        }
        else
        {
            equalTillLast = false;
        }
        i++;
        j--;

    }

    i = 0;
    if(equalTillLast == true)
    {
        if(arrA[arrCountA] > arrB[i])
        {
            return true;
        }
    }
    return false;
}


void numberComparisonB(int a, int b)
{
    int i;
    int digitCountA;
    int digitCountB;
    int arrCountA = arrayCountA(a);
    int arrCountB = arrayCountB(b);
    int arrA[arrCountA];
    int arrB[arrCountB];

    i = 0;
    int zeroCount = 0;
    digitCountB = b;
    while(digitCountB > 0)
    {
        int digit = digitCountB % 10;
        if (digit == 0)
        {
            zeroCount++;
        }
        digitCountB = digitCountB / 10;
    }

    i = 0;
    digitCountB = b;
    while(digitCountB > 0)
    {
        int digit = digitCountB % 10;
        arrB[i] = digit;
        i++;
        digitCountB = digitCountB / 10;
    }
    sort(arrB, arrB+arrCountB);

    for (int i = 0; i < arrCountB; i++)
    {
        cout << arrB[i] << endl;
    }


    i = 0;
    digitCountA = a;
    while(digitCountA > 0)
    {
        int digit = digitCountA % 10;
        arrA[i] = digit;
        i++;
        digitCountA = digitCountA / 10;
    }

    /**
    bool equalTillLast = false;
    i = 0;
    j = arrCountB-1;
    while((i < arrCountA-1)&&(j>0))
    {
        if(arrA[i] < arrB[j])
        {
            return true;
            break;
        }
        else if(arrA[i] == arrB[j])
        {
            equalTillLast = true;
        }
        else
        {
            equalTillLast = false;
        }
        i++;
        j--;

    }

    i = 0;
    if(equalTillLast == true)
    {
        if(arrB[arrCountB] < arrA[i])
        {
            return true;
        }
    }
    return false;
    **/
}


int main()
{
    ifstream parkartoin;
    ofstream parkartoout;
    int a, b;

    parkartoin.open("parkarto.in");
    parkartoout.open("parkarto.out");

    parkartoin >> a;
    parkartoin >> b;
    /**
    if(isBigger(a, b))
    {
        parkartoout << "IR" << endl;
    }
    else
    {
        parkartoout << "NAV" << endl;
        if(numberComparisonA(a, b))
        {
            parkartoout << "IR" << endl;
        }
        else
        {
            parkartoout << "NAV" << endl;
        }
        if(numberComparisonB(a, b))
        {
            parkartoout << "IR" << endl;
        }
        else
        {
            parkartoout << "NAV" << endl;
        }
    }
    **/
    numberComparisonB(a, b);

    return 0;
}
