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
    string s;
    cin >> s;
    if(n&1)
    {
        cout <<-1<<endl;
        return;
    }
    ll cnt[30];
    memset(cnt, 0, sizeof(cnt));
    ll ct = 0;
    for(i=0,j=n-1; i<j; i++,j--)
    {
        if(s[i]==s[j])  { cnt[s[i]-'a']++; ct++;}
    }
    ll mx = 0;
    for(i=0; i<26; i++)
    {
        mx = max(mx, cnt[i]);
    }
    ll rem = mx-(ct-mx);
    ll ans = max((ct+1)/2, rem+(ct-mx));
    for(i=0; i<26; i++)
    {
        if(mx==cnt[i])
        {
            for(j=0,k=n-1; j<k; j++,k--)
            {
                if(s[j]!=s[k] && (s[j]-'a')!= i && (s[k]-'a')!=i)   rem--;
            }
        }
    }
    if(rem>0LL)   cout <<-1<<endl;
    else   cout << ans <<endl;

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

