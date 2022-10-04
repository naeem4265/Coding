#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll int
#define pb push_back
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007
#define limit 1000008
using namespace std;

///kmp pi table build O(|p|)
ll pi_tab[limit];
void build(string p)
{
    ll now = -1;
    pi_tab[0] = -1;
    ll szp = p.size();
    for(ll i=1; i<szp; i++)
    {
        while( now!=-1 && p[now+1]!=p[i])
        {
            now = pi_tab[now];
        }
        if(p[now+1]==p[i])
            now++;;
        pi_tab[i] = now;
    }
}

ll cnt[limit];
///kmp O(|s|)
ll kmp(string s,string p)
{
    ll ans=0,now = -1, sz = s.size(),szp=p.size()-1;
    for(ll i=0; i<sz; i++)
    {
        while( now!=-1 && p[now+1]!=s[i])
        {
            now = pi_tab[now];
        }
        if(p[now+1]==s[i])
            now++;
        if(now>=0)   cnt[now]++;
    }
    return ans;
}


void Please_AC(ll tt)
{
    ll i,j,k,n,m;
    string s;
    cin >> s;
    n = s.size();
    for(i=0; i<=n+5; i++)   cnt[i]=1;

    build(s);
    //kmp(s,s);

    ll ans = n;
    for(i=n-1; i>=0; i--)
    {
        if((i+1)*cnt[i]==n)   ans = i+1;
        if(pi_tab[i]>=0)
            cnt[pi_tab[i]] += cnt[i];
    }
    /// wrong ans s=abaabaababaa
    cout << ans <<endl;
    return ;

    for(i=1; i<=n; i++)
    {
        for(j=0,k=0; j<n; j++,k=(k+1)%i)
        {
            if(s[j]!=s[k])  break;
        }
        if(j==n && k==0)
        {
            if(tt)  cout <<endl;
            cout <<i<<endl;
            return ;
        }
    }
}

///lightoj.com/problem/substring-frequency
int  main()
{
    Fast
//    Freed
//    Fout
    ll t,tt=1;
    cin >> tt;
    for(t=0; t<tt; t++)
        Please_AC(t);
    return 0;
}
