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
    ll i,j,n,m,k,q;
    cin >> n;
    string  s;
    cin  >> s;
    ll cnt[30],ct=0;
    memset(cnt,  0, sizeof(cnt));
    for(i=0;  i<n; i++)   cnt[s[i]-'a']++;
    for(i=0; i<27;  i++)
    {
        if(cnt[i]&1)   ct++;
    }
    sort(s.begin(),  s.end());
    if(ct>=2)   cout  <<0<<endl;
    else if(ct==0|| s[0]!=s[n-1])  cout  <<1<<endl;
    else    cout   <<2<<endl;

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

