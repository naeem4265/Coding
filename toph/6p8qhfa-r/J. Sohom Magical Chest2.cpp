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
ll take[30],cnt[30],k;
string s, ans, rev;

void Set()
{
    ll ct=0,i;
    for(i=0; i<=26; i++)
    {
        if(cnt[i]&1) ct++;
        if(ct>1 || (k%2==0 && ct))
        {
            return ;
        }
    }

//    for(i=0; i<26; i++)
//        cout <<i<<" "<<take[i]<<" "<<cnt[i]<<endl;

    for(i=0; i<26; i++)
    {
        if((take[i]/2)<(cnt[i]/2))
        {
            memset(take, 0, sizeof(take));    //cout <<"chenged\n";
            for(i=0; i<=26; i++)
                take[i] = cnt[i];
            return ;
        }
        if((take[i]/2)>(cnt[i]/2))
            return ;
    }

    for(i=0; i<26; i++)
    {
        if(take[i]<cnt[i])
        {
            memset(take, 0, sizeof(take));    //cout <<"chenged\n";
            for(i=0; i<=26; i++)
                take[i] = cnt[i];
            return ;
        }
        if(take[i]>cnt[i])
            return ;
    }

}

void solve(ll tt)
{
    ll i,j,n,m,q;

    cin >> n >> k;
    cin >> s;

    memset(cnt, 0, sizeof(cnt));
    memset(take, 0, sizeof(take));

    for(i=0; i<k; i++)
    {
        cnt[s[i]-'a']++;
    }

    Set();
    for(i=k,j=0; i<n; i++,j++)
    {
        cnt[s[j]-'a']--;
        cnt[s[i]-'a']++;
        Set();
    }
    bool ok=0;
    ans = "";
    for(i=0; i<=26; i++)
    {
        for(j=0; j<take[i]/2; j++)
        {
            char ch = 'a'+i;
            ans += ch;
            ok = 1;
        }
    }
    rev = ans;
    if(ans.size())
        reverse(rev.begin(), rev.end());

    for(i=0; i<=26; i++)
    {
        if(take[i]&1)
        {
            char ch = 'a'+i;
            ans += ch;
            ok = 1;
        }
    }
    if(ok)
    {
        cout << ans << rev<<endl;
    }
    else
    {
        cout <<"No Passcode Found\n";
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
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
