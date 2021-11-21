#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007
#define limit 1000008
using namespace std;

void solve(ll t)
{
    ll i,j,n,m,k;
    string s;
    cin >> n;
    ll d[n+5];
    d[0] = 0;
    for(i=1; i<=n; i++)
    {
        cin >> d[i];
    }
    ll sum = 0,ans=0;
    bool ok[n+5];
    memset(ok,0,sizeof(ok));

    for(i=2; i<=n; i+=2)
    {
        sum += d[i-1];
        if( sum < d[i] )
        {
            ans += sum;
            sum = 0;
            ok[i] = 0;
        }
        else
        {
            ans += d[i];
            sum -= d[i];
            ok[i] = 1;
        }
        ll ct=0,temp=0;  cout <<i<<" "<<min(d[i]+sum,d[i])<<" "<<ans<<endl;
        for(j=i-1; j>0; j--)
        {
            if( (ct+d[i])>=0 && j%2==0)
            {
                ans += ok[j];
            }
            if(j&1)
                ct -= d[j];
            else
                ct += d[j];

            if( (ct+d[i]<0))
            {
                break;
            }

        }
        cout << i<<" "<<ans <<endl;
    }

    cout << ans <<endl;
    return ;

    ll ext[n+5];
    memset(ext,0,sizeof(ext));
    ext[0] = 0;

    ll l=0;
    for(i=1; i<=n; i++)
    {
        if(i&1)
        {
            sum += d[i];
            continue;
        }
        ans += min(sum,d[i]);    //cout <<i<<" "<<sum<<" "<<ans<<endl;
        sum -= d[i];

        ll ct=d[i];
        for(j=i-1; j>l; j--)
        {
            if(j&1)
            {
                ct-= d[j];
                continue;
            }

            if( ct>= 0)
                ans ++;  //cout <<j<<" "<<ct<<" "<<ext[i]<<endl;
            ct += d[j];
        }

        //cout <<i<<" "<<ext[i]<<" "<<sum<<" "<<ans<<endl;
        if(sum < 0 )
        {
            ext[i] = 0;
            d[i] = 0;
            l = i;
            sum = 0;
        }
    }

    cout << ans << endl;
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    ll t,tt=1;
   // cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}

