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

struct stc
{
    ll mn,mx,v;
};

void solve(ll tc)
{
    ll i,j,n,q;
    cin >> n >> q;
    stc d[n+5];
    d[1].mn = 0;
    d[1].mx = 0;
    d[1].v = 0;
    string s;
    cin >> s;
    ll cur=1;
    if(s[0]=='-') cur = -1;
    for(i=1; i<n; i++)
    {
        d[i+1].v = cur;
        d[i+1].mn = min(d[i].mn,cur);
        d[i+1].mx = max(d[i].mx,cur);
        if(s[i]=='+') cur++;
        else    cur--;
    }
    d[n+1].v = cur;
    d[n+1].mn = min(d[n].mn,cur);
    d[n+1].mx = max(d[n].mx,cur);

    for(i=1; i<=n+1; i++)   cout<<d[i].v<<" "<<d[i].mn<<" "<<d[i].mx<<endl;


    for(i=0; i<q; i++)
    {
        ll l,r;
        cin >> l >> r;
        ll dif = d[l].v-d[r+1].v;
        ll mmx=d[l].mx,mmn=d[l].mn;
        mmx = max(mmx,d[n+1].mx+dif);
        mmn = min(mmn,d[n+1].mn+dif);
        cout <<mmx-mmn+1<<endl;
    }
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    ll tc,tt=1;
    cin >> tt;
    for(tc=1; tc<=tt; tc++)
        solve(tc);
    return 0;
}

