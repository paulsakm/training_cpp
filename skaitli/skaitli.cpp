#include <iostream>
#include <fstream>
#include <math.h>

using namespace std;

void initialValues(int &a, int &b, int &a2b, int &ab2)
{
    if ((a != 0) && (b == 0))
    {
        if (a2b != 0)
        {
            b = a2b / (a * a);
        }
        if (ab2 != 0)
        {
            b = sqrt(ab2 / a);
        }
    }

    if ((b != 0) && (a == 0))
    {
        if ((a2b != 0) && (ab2 == 0))
        {
            a = sqrt(a2b / b);
        }
        else if ((ab2 != 0) && (a2b == 0))
        {
            a = ab2 / (b * b);
        }
    }
    if ((a != 0) && (b != 0))
    {
        a2b = (a * a) * b;
        ab2 = a * (b * b);
    }
    if ((a == 0) && (b == 0))
    {
        if ((a2b != 0) && (ab2 == 0))
        {
            a = sqrt(a2b);
            b = a2b / (a * a);
            ab2 = a * (b * b);
        }
        if ((a2b == 0) && (ab2 != 0))
        {
            b = sqrt(ab2);
            a = ab2 / (b * b);
            a2b = (a * a) * b;
        }
    }
}


int main()
{
    ifstream skaitliin;
    ofstream skaitliout;
    int a, b, a2b, ab2;

    skaitliin.open("skaitli.in");
    skaitliout.open("skaitli.out");

    skaitliin >> a >> b >> a2b >> ab2;

    initialValues(a, b, a2b, ab2);

    skaitliout << a << " " << b << " " << a2b << " " << ab2;

    skaitliin.close();
    skaitliout.close();

    return 0;
}
