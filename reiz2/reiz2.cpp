#include <iostream>
#include <fstream>
using namespace std;

int reiz2(int n)
{
    int reiz2 = 2;

    return reiz2 * n;
}


int main()
{

    int number;

    ifstream reizin;
    ofstream reizout;

    reizin.open("reiz.in");
    reizout.open("reiz.out");

    reizin >> number;

    int result = reiz2(number);
    reizout << result;

    reizin.close();
    reizout.close();

    return 0;
}
