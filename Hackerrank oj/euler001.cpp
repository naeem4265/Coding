#include <bits/stdc++.h>
#define ll long long int
using namespace std;


int main()
{
    ll tc,t;
    cin >> tc;
    while(tc--)
    {
        ll sum = 0;
        ll n;
        cin >> n;
        n--;
        
        sum = (n/3LL)*(3LL+(n/3LL)*3LL)/2LL;  //cout <<sum<<endl;
        sum += (n/5LL)*(5LL+(n/5LL)*5LL)/2LL;  //cout <<sum<<endl;
        sum -= (n/15LL)*(15LL+(n/15LL)*15LL)/2LL;
        cout << sum <<endl;
    }
    return 0;
}
