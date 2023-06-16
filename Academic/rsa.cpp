
#include<bits/stdc++.h>
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define pi acos(-1.0)
const ll limit = 1e6+5;
const ll Mod = 1e9+7;
using namespace std;

bool vis[limit];
vector<ll>prime;
void seive()
{
    vis[0]=vis[1]=1;
    for(ll i=4; i<limit; i+=2) vis[i] = 1;
    for(ll i=3; i*i<limit; i+=2)
    {
        if(vis[i]) continue;
        for(ll j=i*i; j<limit; j+=2*i)
        {
            vis[j] = 1;
        }
    }
}
ll bigmod(ll b,ll p,ll M)
{
    ll ans=1;    //cout <<b<<" "<<p<<" "<<M<<" ";
    b=(b+M)%M;
    while(p)
    {
        if(p&1)
            ans = (ans*b)%M;
        b = (b*b)%M;
        p = p/2;
    }        //cout <<ans<<endl;
    return ans;
}

void Please_AC(ll tt)
{
    ll p,q, m;
    int s;
    cout <<"Enter the message\n";
    cin >> s;

    while(1)
    {
        cout <<"Enter first prime number\n";
        cin >> p;
        if(vis[p]==0)   break;
    }
    while(1)
    {
        cout <<"Enter second prime number\n";
        cin >> q;
        if(vis[q]==0)   break;
    }
    ll n = p*q,e,d;
    ll phyn = (p-1)*(q-1);
    for(e=sqrt(n)+1; e<n; e++)
    {
        if(__gcd(e, phyn)==1)   break;
    }
    ll x;
    if(p>=q)
    {
        for(x = n-p+1; x<n; x++)
        {
            if(__gcd(x, n)==1)  break;
        }
    }
    else
    {
        for(x = n-q+1; x<n; x++)
        {
            if(__gcd(x, n)==1)  break;
        }
    }
    for(d=1; d<limit; d++)
    {
        if((x*d+1)%e==0)
        {
            d = (x*d+1)/e;
            break;
        }
    }
   // ll sz = s.size();
    //encription
    vector<ll> v;      //cout <<p<<" "<<q<<" "<<n<<' '<<phyn<<" "<<e<<" "<<x<<" "<<d<<endl;
    for(ll i=0; i<1; i++)
    {
        ll temp = s;                    //cout <<i<<" "<<s[i]<<" "<<temp<<" "<<e<<" "<<x<<" "<<bigmod(temp, e, x) <<endl;
        v.push_back(bigmod(temp, e, x));  //cout <<i<<" "<<d<<" "<<s[i]<<" "<<v[i]<<endl;
    }
    //dicription
    int t=0;
    for(ll i=0; i<v.size(); i++)
    {
        ll temp = bigmod(v[i], d, x);
        temp = sqrt(temp);   // cout <<i<<" "<<v[i]<<" "<<temp<<endl;
        char ch = temp;
        t += temp;
    }
    cout << t <<endl;

    return ;
}


int  main()
{
//    Freed
//    Fout
    seive();
    ll t,tt=1;
    for(t=1; t<=tt; t++)
    {
        //printf("Case :%lld ",t);
        Please_AC(t);
    }
    return 0;
}
