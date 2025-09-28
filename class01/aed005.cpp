#include <iostream>
#include <cmath>
using namespace std;

struct t_coordinates {
    long long x;
    long long y;
};

int  main (void) 
{
    long long N;
    cin >> N;

    t_coordinates coord;

    if (N == 1) {
        coord.x = 0;
        coord.y = 0;
        cout << "(" << coord.x << "," << coord.y << ")" << endl;
        return 0;
    }

    long long k = (long long)ceil((sqrt(N) - 1) / 2);
    long long side = 2 * k + 1;
    long long maxVal = side * side;
    long long steps = side - 1;

    coord.x = k;
    coord.y = k;

    if (N > maxVal - steps) 
    {
       // Top edge
        coord.x = k - (maxVal - N);
        coord.y = k;

    } 
    else if (N > maxVal - 2 * steps) 
    {
        // Right edge
        coord.x = -k;
        coord.y = k - (maxVal - steps - N);

    } 
    else if (N > maxVal - 3 * steps) 
    {
        // Bottom edge
        coord.x = -k + (maxVal - 2 * steps - N);
        coord.y = -k;

    } else 
    {
       // Left edge
        coord.x = k;
        coord.y = -k + (maxVal - 3 * steps - N);

    }

    cout << "(" << coord.x << "," << coord.y << ")" << endl;

    return 0;

}
