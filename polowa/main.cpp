#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    string wyraz;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> wyraz;
        for(int j=0; j<wyraz.length()/2; j++)
        {
            cout << wyraz[j];
        }
        cout << endl;
    }
}
