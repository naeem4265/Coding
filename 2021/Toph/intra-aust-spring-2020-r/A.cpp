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
    prime.pb(2);
    for(ll j=3; j<limit; j+=2)
        if(vis[j]==0)
            prime.pb(j);
}

void solve(ll t)
{
    ll i,j,n,m,k;
    string s;
    cin >> n ;
    getchar();
    getline(cin,s);  //cout <<endl<<s<<endl<<endl;
    m = s.size();
    ll n1=0,n2=0,x=0;
    for(i=0; i<m; i++)
    {
        if(s[i]=='[')
        {
            x++;
            n1 += x;
        }
        if(s[i]==']')
        {
            x--;
            n2 -= x;
        }
    }
    getline(cin,s);     //cout <<endl<<s<<endl<<endl;
                      // cout <<n1<<" "<<n2<<endl;
    cout <<"The Argonaut Shines Upon thy Who is for thy Worthy!!!!: ";
    if(n1==n2 && n1==0)
    {
        cout <<"Go find Kami Hestia Fast!!\n";
        return;
    }
    if(n2==0)
    {
        cout <<"Never Realm Empire\n";
        return ;
    }
    if(n1==0)
    {
        cout <<"Thorn Villain Duckducula\n";
        return ;
    }
    k = s.size();
    m = 0;
    for(i=0; i<prime.size(); i++)
    {
        if(prime[i]<=k)
            m = prime[i];
        else
            break;
    }
    n1 = m/n1;
    n2 = m/n2;
    if(n1>n2)
    {
        cout <<"Never Realm Empire\n";
    }
    else if(n1<n2)
    {
        cout <<"Thorn Villain Duckducula\n";
    }
    else
    {
        cout <<"Go find Kami Hestia Fast!!\n";
    }
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    seive();
    ll t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
