#include <iostream>
#include <cmath>

using namespace std;

int main() 
{
    setlocale(LC_ALL, "Russian");
    float x, xPrev;
    double lambda = -0.05;
    x = 2; 
    xPrev = 0; 
    double eps = 0.000001;
    while (abs(x - xPrev) > eps) 
    {
        xPrev = x;
        x = lambda * (pow(xPrev, 3) - xPrev - 1) + xPrev;
    }
    cout << "Корень: " << x << endl;
    return 0;
}