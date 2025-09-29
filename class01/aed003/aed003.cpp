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
    int last = -1;
    while (i < n)
    {
        cin >> i2;
        if (i2%2 != 0)
        {
            count++;
            last = i2;

        }
        i++;
    }

    cout << count << " ";
    if (count == 0)
    {
        cout <<  "-1" << endl;
    }
    else
    {
        cout << last << endl;
    }

    return 0;
}