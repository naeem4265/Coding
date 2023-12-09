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

void solve(ll tt)
{
    ll i,j,n,m,k,q;
    string s;
    cin >> n >> k;
    q = k;
    ll ct[n+5];
    memset(ct, 0 ,sizeof(ct));
    cin >> s;
    m = 0;
    for(i=0; i<n; i++)
    {
        if(k==0)   break;
        if( k==1 )
        {
            if(m&1)
            {
                if(s[i]=='0')
                {
                    ct[i]++;
                    m++;
                    k--;
                }
            }
            else
            {
                if(s[i]=='1')
                {
                    ct[i]++;
                    m++;
                    k--;
                }
            }
            continue;
        }
        if( m%2==0 && k%2==0 && s[i]=='1')  continue;
        if( m%2==0 && k%2 && s[i]=='0')  continue;
        if( m%2 && k%2==0 && s[i]=='0')  continue;
        if( m%2 && k%2 && s[i]=='1')  continue;
        ct[i]++;
        m++;
        k--;
    }
    ct[n-1] += k;
    for(i=0; i<n; i++)
    {
        if((q-ct[i])&1)
        {
            if(s[i]=='0')
                s[i] = '1';
            else
                s[i] = '0';
                //cout <<i<<" here "<<s[i]<<endl;
        }
    }
    cout << s<<endl;
    for(i=0; i<n; i++)
        cout <<ct[i]<<" ";
    cout <<endl;
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    ll t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
