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
    ll i,j,n,m,k,q, h;
    string s;
    cin >> n >> m >> h;
    ll t[m+5], ans = 1, point, panalty;
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            cin >> t[j];
        }
        sort(t, t+m);
        ll temp = 0, sum = 0;
        for(j=0; j<m; j++)
        {
            if((temp+t[j])>h)  break;
            sum += (temp+t[j]);
            temp += t[j];
        }
        if(i==0)
        {
            point = j;
            panalty = sum;
        }
        else if(j>point || j==point && sum<panalty)   ans++;     //cout <<i<<' '<<point<<" "<<panalty<<" "<<j<<" "<<sum<<" "<<ans<<endl;
    }
    cout << ans <<endl;

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
    {
        //printf("Case :%lld ",t);
        Please_AC(t);
    }
    return 0;
}
