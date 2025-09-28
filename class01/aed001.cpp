#include <iostream>

using namespace std;

int main(void)
{
    int i;
    cin >> i;
    int n;
    n = i;
    i = 0;
    int i2;
    int count = 0;
    while (i < n)
    {
        cin >> i2;
        if (i2 == 42)
        {
            count++;
        }
        i++;
    }

    cout << count << endl;

    return 0;
}