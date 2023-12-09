#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007
#define limit 1000008
using namespace std;


void Please_AC(ll tt)
{
    ll i,j,n,m,k,q;
    string s;
    cin >> n;
    char ch;
    cin >> ch;
    cin >> s;
    if(ch=='g')
    {
        cout <<0<<endl;
        return ;
    }
    ll mx = 0;
    for(i=0; i<n; i++)
    {
        if(s[i]==ch)
        {
            ll ct = 1;
            j = (i+1)%n;
            while(j!=i && s[j]!='g')
            {
                j = (j+1)%n;
                ct++;
            }
            mx = max(mx, ct);
            if(i>j)  break;
            i = j;
        }
    }
    cout <<mx<<endl;


    return ;
}


int  main()
{
    Fast
//    Freed
//    Fout
    ll t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
        Please_AC(t);
    return 0;
}
