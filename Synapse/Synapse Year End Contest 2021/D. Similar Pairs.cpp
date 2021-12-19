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

void solve(ll tt)
{
    ll i,j,n,m,k,q;
    cin >> n;
    string s[n+5];
    for(i=0; i<n; i++)
        cin >> s[i];
    sort(s, s+n);

    ll mn = 1e18;
    string s1,s2;
    for(i=0; i<n; i++)
    {
        ll ct[33],mx;
        for(j=i+1; j<n; j++)
        {
            for(k=0; k<30; k++)
                ct[k]=0;
            for(k=0; k<s[i].size(); k++)
                ct[s[i][k]-'A']++;
            for(k=0; k<s[j].size(); k++)
                ct[s[j][k]-'A']--;
            mx = 0;
            for(k=0; k<30; k++)
            {
                if(ct[k]!=0)  mx++;
            }
            if(mn>mx)
            {
                mn = mx;
                s1 = s[i];
                s2 = s[j];
            }
        }
    }
    cout <<s1<<" "<<s2<<endl;
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
        solve(t);
    return 0;
}
