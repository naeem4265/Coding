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
ll Pow(ll b,ll p)
{
    if(p==0) return 1;
    ll z=Pow(b,p/2);
    z = z*z;
    if(p&1) z*=b;
    return z;
}
void solve(int t)
{
    ll i,j,n,m,s,k=0,sum=0;
    cin >> n >>s;
    m = n;
    vector<ll>vec;
    while(n)
    {
        ll dig=n%10;
        vec.pb(dig);
        n/=10;
        k++;
        sum += dig;
    }
    if(sum<=s)
    {
        cout <<0<<endl;
        return ;
    }
    if(s <= vec[k-1])
    {
        cout <<Pow(10,k)-m<<endl;
        return ;
    }
    reverse(vec.begin(),vec.end());
    sum = 0;
    for(i=0; i<vec.size()-1; i++)
    {
        if((sum+vec[i])>=s)
        {
            break;
        }
        sum += vec[i];
        k--;
    }
    ll z = 1;
    n = m;
    ll dig,ans=0;
    for(j=0; j<=k; j++)
    {
        dig = m%10;
        ans += z*dig;
        m /= 10;
        z *= 10;
    }
    //dig = m%10;
    z = z/10;
    //cout <<ans<<" "<<dig<<" "<<(dig+1)*z<<" "<<z<<endl;
    cout <<(dig+1)*z-ans<<endl;
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

