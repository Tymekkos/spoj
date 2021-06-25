#include <iostream>

using namespace std;

char znak;
int a,b;
int odp[10];

int main()
{
    for(int i=0; i<10; i++)
    {
	    cin >> znak >> a >> b;
	    if(znak=='z') odp[a]=b;
	    else if(znak=='+') cout << odp[a]+odp[b];
	    else if(znak=='-') cout << odp[a]-odp[b];
	    else if(znak=='*') cout << odp[a]*odp[b];
	    else if(znak=='/') cout << odp[a]/odp[b];
	    else if(znak=='%') cout << odp[a]%odp[b];
	    cout<<endl;
    }
    return 0;
}
