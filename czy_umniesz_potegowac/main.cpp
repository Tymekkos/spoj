#include <iostream>
#include <math.h>

using namespace std;

int a, b, n;

int main()
{
    cin >> n;

    for (int i=0;i<n;i++)
    {
        cin >> a >> b;

        a = a%10;

        b = b%4;
        if (b==0) b=4;

        a = pow(a,b);
        a = a%10;

        cout << a << endl;
    }

    return 0;
}
