#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 1000008
using namespace std;

void solve(ll tc)
{
    ll i,j,n,m,k;
    cin >> n ;
    string s;
    cin >> s;
    ll ct=0;
    for(i=0; i<n; i++)
    {
        if((s[i]-'0')!=(i%2)) ct++;
    }
    ll q;
    cin >> q;
    for(i=0; i<q; i++)
    {
        cin >> m;
        m--;
        if(s[m]=='0')
        {
            if(m%2==0)
            {
                ct++;
            }
            else
            {
                ct--;
            }
            s[m]='1';
        }
        else
        {
            if(m%2==0)
            {
                ct--;
            }
            else
            {
                ct++;
            }
            s[m]='0';
        }
        cout <<min(ct,(n-ct))<<endl;
    }
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    ll tc,tt=1;
    //cin >> tt;
    for(tc=1; tc<=tt; tc++)
        solve(tc);
    return 0;
}

