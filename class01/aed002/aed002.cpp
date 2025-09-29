#include <iostream>

using namespace std;

int main(void)
{
    int i;
    int m;
    cin >> i;
    cin >> m;
    int n;
    n = i;
    i = 0;
    int i2;
    int count = 0;
    int arr[n];
    int arr_indx = 0;
    while (i < n)
    {
        cin >> i2;
 
        if (i2 != m)
        {
            count++;
            arr[arr_indx] = i2;
            arr_indx++;
        }
       
        i++;
    }

    cout << count << endl;
    i = 0;
    arr_indx = 0;
    while (i < count)
    {
        if (i != 0)
        {
            cout << " ";
        }
        cout << arr[arr_indx];
        arr_indx++;
        i++;
    }

    cout << endl;

    return 0;
}