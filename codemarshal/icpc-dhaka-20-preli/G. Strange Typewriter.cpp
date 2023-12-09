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
#define Mod2 998244353
#define base1 27
#define base2 31
#define limit 100008
using namespace std;

vector<ll> v,v2;

void hashing(string s, ll base, ll mod, vector<ll> &v)
{
    ll i,n=s.size();
    ll temp = s[0]-'a'+1;
    for(i=1; i<n; i++)
    {
        temp = ((temp*base)+s[i]-'a'+1)%Mod;
    }
    v.pb(temp);
}

bool BS(ll key,vector<ll> &v)
{
    ll l=0,h=v.size()-1,m;
    while(l<=h)
    {
        m = (l+h)/2;    //cout <<key<<" "<<m<<" "<<v[m]<<endl;
        if(v[m]==key) return 1;
        if(v[m]>key)
            h = m-1;
        else
            l = m+1;
    }
    return 0;
}

string s;
ll n;
ll dp[limit][100];

ll rec(ll pos,ll sum,ll sum2,ll ct)
{
    if(pos==n && sum==0)
        return 0;
    if(pos==n)
        return Mod;

    if(dp[pos][ct]!=-1) return dp[pos][ct];

    sum = (sum*base1+s[pos]-'a'+1)%Mod;
    sum2 = (sum2*base2+s[pos]-'a'+1)%Mod2;

    ll x = rec(pos+1,sum,sum2,ct),y=Mod;        //cout <<pos<<" "<<sum<<endl;
    if(BS(sum,v) && BS(sum2,v2))
        y = rec(pos+1,0,0,ct+1)+1;
    return dp[pos][ct] = min(x,y);
}

void solve(ll t)
{
    ll i,j;
    v.clear();
    v2.clear();
    memset(dp,-1,sizeof(dp));

    char ch;
    //cin >> n;
    scanf("%lld", &n);
    scanf("%c", &ch);
    for(i=0; i<n; i++)
    {
        //cin >> s;
        getline(cin,s);         //cout << s<< endl;
        hashing(s,base1,Mod,v);
        hashing(s,base2,Mod2,v2);
    }
    sort(v.begin(),v.end());   for(i=0; i<v.size(); i++) cout <<v[i]<<" ";cout << endl;
    sort(v2.begin(),v2.end());

    //cin >> s;
    getline(cin,s);

    n = s.size();
    ll ans = rec(0,0,0,0);
    //cout <<"Case "<<t<<": ";
    printf("Case %lld: ",t);
    if(ans > s.size())
    {
        //cout <<"impossible\n";
        printf("impossible\n");
    }
    else
    {
        //cout << ans << endl;
        printf("%lld\n",ans);
    }

    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    ll t,tt=1;
    //cin >> tt;
    scanf("%lld", &tt);
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}

/*
2
6
code
forces
cod
efor
ces
efo
codeforces
*/
