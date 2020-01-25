#include <iostream>
#include <fstream>
using namespace std;

int area(int n, int m)
{
    return n * m;
}

int squareCount(int area, int n)
{
    int countSquares = 0;

        while(n > 0)
        {
            if(area >= n * n)
            {
                area = area - (n*n);
                countSquares++;
            }
            else
            {
                n = n - 1;
            }
        }
    return countSquares;
}


int main()
{

    int n;
    int m;
    int smaller;
    int sqrCount;

    ifstream taisnstin;
    ofstream taisnstout;
    taisnstin.open("taisnst.in");
    taisnstout.open("taisnst.out");

    taisnstin >> n >> m;
    smaller = n;
    if(n > m) {
        smaller = m;
    }

    int rectArea = area(n, m);


    if(n==m)
    {
       sqrCount = 1;
    }
    else
    {
        sqrCount = squareCount(rectArea, smaller);
    }

    taisnstout << sqrCount;

    taisnstin.close();
    taisnstout.close();

    return 0;
}
