#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int najwieksza;
    int x,y; // podzielne przez x i niepodzielne przez y
    for(int i=0; i<n; i++)
    {
        cin >> najwieksza >> x >> y;
        for(int i=0; i<najwieksza; i++)
        {
            if(i%x == 0 && i%y != 0 )
            {
                cout << i << " ";
            }
        }
        cout << endl;
    }
}
