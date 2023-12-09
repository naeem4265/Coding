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
    ll d;
    ll ct[12];
    memset(ct, 0, sizeof(ct));
    for(i=0; i<n; i++)
    {
        cin >> d;
        d = d%10;
        ct[d]++;
    }
    for(i=0; i<10; i++)
    {
        for(j=0; j<10; j++)
        {
            for(k=0; k<10; k++)
            {
                ll sum = (i+j+k)%10;
                if(sum!=3)   continue;
                ct[i]--;
                ct[j]--;
                ct[k]--;
                if(ct[i]>=0 && ct[j]>=0 && ct[k]>=0)
                {
                    cout <<"YES\n";
                    return ;
                }
                ct[i]++;
                ct[j]++;
                ct[k]++;
            }
        }
    }
    cout <<"NO\n";
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
