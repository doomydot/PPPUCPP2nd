//c04t05
#include <iostream>

using namespace std;

double square(double val, int times)
{
    double sum = 0;
    while (times > 0)
    {
        sum += val;
        --times;
    }
    return sum;
}

int main()
{
    cout << square(5, 5);
}

