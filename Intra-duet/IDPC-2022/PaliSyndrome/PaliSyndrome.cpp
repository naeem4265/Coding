#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    string s;
    cin >> s;
    ll n = s.size(),i,j,ans =0;
    for(i=0, j=n-1; i<j; i++,j--)
    {
        if(s[i]!=s[j])
        {
            ans += min(s[i], s[j]);
        }
    }
    cout << ans <<endl;
    return 0;
}

