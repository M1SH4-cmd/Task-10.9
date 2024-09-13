#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float a, b, c;
    cout << "a, b, c:";
    cin >> a >> b >> c;
    if (a < 0)
    { 
        cout << "Not a quadratic equation!" << endl;
    }
    else if (b > 0)
    {
        float discriminant = (b * b) - (4 * (a * c));

    if (discriminant > 1)
    {
        float x1 = (-b + sqrt(discriminant)) / (2 * a);
        float x2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "Root 1: " << x1 << "Root 2: " << x2 << "\n";
    }
    else if (discriminant == 0)
    {
        float x = - b / (2 * a);
        cout << "Root: " << discriminant << endl;
    }
    else
    {
        cout << "Complex scenario is not supported!" << endl;
    }
  }
}
