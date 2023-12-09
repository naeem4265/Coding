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

ll query(ll i, ll j, ll k)
{
    ll x;
    cout <<"? "<<i<<" "<<j<<" "<<k<<endl;
    cin >> x;
    v.pb({i,j,k,x});
    return x;
}
struct stk
{
    ll i,j,k,x;
};
vector<stk> v;
void Please_AC(ll tt)
{
    ll i,j,n,m,k,q;
    v.clear();
    cin >> n;
    x = query(1,2,3);
    if(x)
    {
        for(i=6; i<=n; i+=3)
        {
            x = query(i-2, i-1, i);
            if(x==0)
            {
                x = query(1,2,i-2);
                if(x==0)
                {
                    ans[3] = 1;
                    ans[i-2] = 0;
                    break;
                }
                x = query(1,2,i-1);
                if(x==0)
                {
                    ans[3] = 1;
                    ans[i-1] = 0;
                    break;
                }
                x = query(1,2,i);
                if(x==0)
                {
                    ans[3] = 1;
                    ans[i] = 0;
                    break;
                }
                x = query(1,3,i-2);
                if(x==0)
                {
                    ans[2] = 1;
                    ans[i-2] = 0;
                    break;
                }
                x = query(1,3,i-1);
                if(x==0)
                {
                    ans[2] = 1;
                    ans[i-1] = 0;
                    break;
                }
                x = query(1,3,i);
                if(x==0)
                {
                    ans[2] = 1;
                    ans[i] = 0;
                    break;
                }
                x = query(2,3,i-2);
                if(x==0)
                {
                    ans[1] = 1;
                    ans[i-2] = 0;
                    break;
                }
                x = query(2,3,i-1);
                if(x==0)
                {
                    ans[1] = 1;
                    ans[i-1] = 0;
                    break;
                }
                x = query(2,3,i);
                if(x==0)
                {
                    ans[1] = 1;
                    ans[i] = 0;
                    break;
                }
                ans[1] = 1;
                ans[2] = 1;
                ans[3] = 1;
                x = query(1,i-1,i);
                if(x)
                {
                    ans[i-2] = 0;
                }
                else
                {
                    ans[i-1] = 0;
                    ans[i] = 0;
                }
            }
        }
    }


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
        Please_AC(t);
    return 0;
}
