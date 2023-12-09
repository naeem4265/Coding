#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define pi acos(-1.0)
const ll limit = 1e6+5;
const ll Mod = 1e9+7;
using namespace std;


void Please_AC(ll tt)
{
    ll i,j,n,m=0,c,d;
    cin >> n >> c >> d;
    ll a[n+5];
    for(i=0; i<n; i++)  cin >> a[i];
    sort(a, a+n);

    ll temp = 0, ans = 1e18;
    for(i=0; i<n; i++)
    {
        if(i)
            ans = min(ans, (n-i)*c+temp);
        else
            ans = min(ans, (n-i)*c+temp+d);

        if(a[i]<=m)     temp += c;
        if(a[i]>m)
        {
            temp += (a[i]-m-1)*d;
            m = a[i];
        }       //cout <<i<<" "<<temp<<" "<<ans<<endl;
    }
    ans = min(ans, temp);
    cout << ans <<endl;

    return ;
}


int  main()
{
    Fast
    //Freed
    //Fout
    ll t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
    {
        //printf("Case :%lld ",t);
        Please_AC(t);
    }
    return 0;
}

