#include <iostream>
#include <fstream>
using namespace std;

int main()
{

    string virkne;
    ifstream virkne3in;
    ofstream virkne3out;

    virkne3in.open("virkne3.in");
    virkne3out.open("virkne3.out");
    virkne3in >> virkne;


    for (int i = 0; i < virkne.size(); i++)
    {
        if(virkne[i] != virkne[i+1])
        {
            virkne3out << virkne[i];
        }
    }

    virkne3in.close();
    virkne3out.close();

    return 0;
}
