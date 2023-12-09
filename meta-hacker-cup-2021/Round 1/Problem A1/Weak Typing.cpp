#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("weak_typing_chapter_1_input.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007
#define limit 1000008
using namespace std;

void solve(ll t)
{
    ll i,j,n,m,k;
    string s;
    cin >> n;
    cin >> s;
    ll ans = 0;
    ll l=0;

    while(l<n && s[l]=='F') l++;
    for(i=l+1; i<n; i++)
    {
        if(s[i]=='F' || s[i]==s[l]) continue;
        ans++;
        l = i;
    }
    cout <<"Case #"<<t<<": ";
    cout << ans << endl;

    return ;
}
int  main()
{
//    Fast
    Freed
    Fout
    ll t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}

