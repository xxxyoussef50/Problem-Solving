#include <iostream>
using namespace std;
#define ll long long int
int main()
{
    ll n = 0;
    cin >> n;
    if(n%2==0)
    {
        cout<<n/2;
    }
    else
    {
        cout<<-(n+1)/2;
    }
}