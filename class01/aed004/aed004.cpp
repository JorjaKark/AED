#include <iostream>
#include <math.h>

using namespace std;

int main(void)
{
    int i;
    cin >> i;
    int n;
    n = i;
    i = 0;
    int i2;
    int prime = 2;

    int i2_original;
    while (i < n)
    {
        prime = 2;
        cin >> i2;
        i2_original = i2;

        if (i2 == 1)
        {
            cout << "1=1" << endl;
        }
        else
            cout << i2 << "=";

        while (i2 != 1)
        {

            if (i2 % prime == 0)
            {
                cout << prime;

                i2 = i2 / prime;
                if (i2 != 1)
                {
                    cout << "*";
                }
            }
            else
            {
                prime++;
                if (prime * prime > i2)
                {
                    if (i2 > 1)
                        cout << i2;
                    break;
                }
            }
        }

        cout << endl;
        i++;
    }

    return 0;
}