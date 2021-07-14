#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    for(int i=0; i<n; i++)
    {
        int ile_liczb;
        cin >> ile_liczb;
        int liczby[ile_liczb];
        for(int j=0; j<ile_liczb; j++)
        {
            cin >> liczby[j];
        }
        for(int j=1; j<ile_liczb; j=j+2)
        {
            cout << liczby[j] << " ";
        }
        for(int k=0; k<ile_liczb; k=k+2)
        {
            cout << liczby[k] << " ";
        }
        cout << endl;
    }
    return 0;
}
