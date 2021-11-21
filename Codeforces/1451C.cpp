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

void solve(int t)
{
    int i,j,n,m,k;
    cin >> n >> k;
    string a,b;
    cin >> a >> b;
    int cta[30],ctb[30];
    for(i=0; i<30; i++)
    {
        cta[i] = ctb[i] = 0;
    }
    for(i=0; i<n; i++)
    {
        cta[a[i]-'a']++;
    }
    for(i=0; i<n; i++)
    {
        ctb[b[i]-'a']++;
    }
    int ok=1;
    if(cta[0]<ctb[0] || cta['z'-'a']>ctb['z'-'a'])
    {
        cout <<"No\n";
        return ;
    }
    int ck=0;
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    for(i=0; i<25; i++)
    {
        if(cta[i]<ctb[i])
        {
            cout <<"No\n";
            return ;
        }
        else if(cta[i]>ctb[i])
        {
            cta[i] -= ctb[i];
            if(cta[i]%k)
            {
                cout <<"No\n";
                return ;
            }
            cta[i+1] += cta[i];
            cta[i] = 0;
        }
    }
    cout <<"Yes\n";

    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    int t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}

