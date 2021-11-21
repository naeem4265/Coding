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

bool vis[limit];
vector<int>prime;
void seive()
{
    vis[0]=vis[1]=1;
    for(int i=4; i<limit; i+=2) vis[i] = 1;
    for(int i=3; i*i<limit; i+=2)
    {
        if(vis[i]) continue;
        for(int j=i*i; j<limit; j+=2*i)
        {
            vis[j] = 1;
        }
    }
    prime.pb(2);
    for(int j=3; j<10000; j+=2)
        if(vis[j]==0)
            cout <<j<<" ";
}

void solve(ll t)
{
    ll i,j,n,m,k;
    string s;
    cin >> k;
    cin >> s;
    for(i=0; i<k; i++)
    {
        if(s[i]=='1' || s[i]=='4' || s[i]=='6' || s[i]=='8' || s[i]=='9')
        {
            cout <<1<<endl<<s[i]<<endl;
            return ;
        }
    }
    cout <<2<<endl;
    for(i=k-1; i>0; i--)
    {
        if((s[i]=='2' || s[i]=='5'))
        {
            cout <<s[i-1]<<s[i]<<endl;
            return ;
        }
    }
    for(i=0; i<k-1; i++)
    {
        if(s[i]=='2' && s[i+1]!='3')
        {
            cout <<s[i]<<s[i+1]<<endl;
            return ;
        }
        if(s[i]=='3' && s[i+1]!='7')
        {
            cout <<s[i]<<s[i+1]<<endl;
            return ;
        }
        if(s[i]=='5' && s[i+1]!='3')
        {
            cout <<s[i]<<s[i+1]<<endl;
            return ;
        }
        if(s[i]=='7' && s[i+1]!='3')
        {
            cout <<s[i]<<s[i+1]<<endl;
            return ;
        }
    }
    cout <<s[0]<<s[2]<<endl;


    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    //seive();
    ll t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
