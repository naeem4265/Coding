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

void solve(ll tt)
{
    ll i,j,n,m,k,q,x;
    string s;
    cin >> n >> x;
    ll d[n+5];
    for(i=0; i<n; i++)
    {
        cin >> d[i];
    }
    d[n] = 0;
    ll ans = 0;
    ll next[n+5];
    next[n] = 0;
    for(i=0; i<n; i++)
    {
        ll temp = 0;
        ll sum = 0;
        for(j=i+1; j<n; j++)
        {
            sum += d[j];  //cout <<j<<" "<<sum<<endl;
            if(temp<sum)
                temp = sum;
        }
        next[i] = temp;  //cout <<i<<" "<<sum<<" "<<next[i]<<endl;
    }
    for(k=0; k<=n; k++)
    {
        ll sum = k*x;
        for(i=0; i<k-1; i++)
            sum += d[i];       //cout <<"here "<<sum<<endl;
        for(j=0; i<n; i++,j++)
        {
            sum += d[i];
            sum += next[i];
            if(ans<sum)
                ans = sum;
            sum -= next[i];
            sum -= d[j];
        }
        cout << ans <<" ";
    }
    cout <<endl;


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
        solve(t);
    return 0;
}
