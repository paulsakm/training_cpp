#include <iostream>
#include <fstream>
#include <stack>
using namespace std;

int findNumber(int n, int c)
{
    int neededNumber;
    stack<int> digitStack;
        for(int i = n+1; i < n+11; i++)
        {
                int j = i;
                neededNumber = i;
                while (j > 0)
                {
                    int digit = j%10;
                    j /= 10;
                    digitStack.push(digit);
                }

                while (!digitStack.empty())
                {
                    int digit = digitStack.top();
                    if (digit == c)
                    {
                        neededNumber = i;
                        return neededNumber;
                    }
                    digitStack.pop();
                }
            }
}

int main()
{
    ifstream skaitl2in;
    ofstream skaitl2out;
    int n, c;

    skaitl2in.open("skaitl2.in");
    skaitl2out.open("skaitl2.out");

    skaitl2in >> n >> c;

    int result = findNumber(n, c);

    skaitl2out << result;

    skaitl2in.close();
    skaitl2out.close();

    return 0;
}
