#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("consistency_chapter_1_input.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007
#define limit 1000008
using namespace std;

bool Vowel(char ch)
{
    if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
        return true;
    return false;
}

void solve(ll t)
{
    ll i,j,n,m,k;
    string s;
    cin >> s;
    n = s.size();
    ll ct[30];

    ll vow=0,con=0,vowmx=0,conmx=0;
    memset(ct,0,sizeof(ct));

    for(i=0; i<n; i++)
    {
        if(Vowel(s[i]))
            vow++;
        else
            con++;
        ct[s[i]-'A']++;
    }

    for(i=0; i<n; i++)
    {
        if(Vowel(s[i]))
        {
            vowmx = max(vowmx, ct[s[i]-'A']);
        }
        else
            conmx = max(conmx, ct[s[i]-'A']);
    }
    ll ans = min((vow-vowmx)*2LL+con, (con-conmx)*2LL+vow);

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

