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
    string s;
    cin >> s;
    ll cnt[30];
    memset(cnt, 0, sizeof(cnt));
    n = s.size();
    for(i=0; i<n; i++)
    {
        cnt[s[i]-'a']++;
    }
    vector<ll> v;
    while(cnt['z'-'a'] && cnt['e'-'a'] && cnt['r'-'a'] && cnt['o'-'a'])
    {
        v.pb(0);
        cnt['z'-'a']--;   cnt['e'-'a']--;   cnt['r'-'a']--;    cnt['o'-'a']--;
    }
    while(cnt['t'-'a'] && cnt['w'-'a'] && cnt['o'-'a'])
    {
        v.pb(2);
        cnt['t'-'a']--;   cnt['w'-'a']--;   cnt['o'-'a']--;
    }
    while(cnt['f'-'a'] && cnt['o'-'a'] && cnt['u'-'a'] && cnt['r'-'a'])
    {
        v.pb(4);
        cnt['f'-'a']--;   cnt['o'-'a']--;   cnt['u'-'a']--;   cnt['r'-'a']--;
    }
    while(cnt['s'-'a'] && cnt['i'-'a'] && cnt['x'-'a'] )
    {
        v.pb(6);
        cnt['s'-'a']--;   cnt['i'-'a']--;   cnt['x'-'a']--;
    }
    while(cnt['e'-'a'] && cnt['i'-'a'] && cnt['g'-'a'] && cnt['h'-'a'] && cnt['t'-'a'])
    {
        v.pb(8);
        cnt['e'-'a']--;   cnt['i'-'a']--;   cnt['g'-'a']--;    cnt['h'-'a']--;   cnt['t'-'a']--;
    }
    while(cnt['f'-'a'] && cnt['i'-'a'] && cnt['v'-'a'] && cnt['e'-'a'] )
    {
        v.pb(5);
        cnt['f'-'a']--;   cnt['i'-'a']--;   cnt['v'-'a']--;    cnt['e'-'a']--;
    }
    while(cnt['s'-'a'] && cnt['e'-'a'] && cnt['v'-'a'] && cnt['e'-'a'] && cnt['n'-'a'])
    {
        v.pb(7);
        cnt['s'-'a']--;   cnt['e'-'a']--;   cnt['v'-'a']--;    cnt['e'-'a']--;   cnt['n'-'a']--;
    }
    while(cnt['o'-'a'] && cnt['n'-'a'] && cnt['e'-'a'])
    {
        v.pb(1);
        cnt['o'-'a']--;   cnt['n'-'a']--;   cnt['e'-'a']--;
    }
    while(cnt['t'-'a'] && cnt['h'-'a'] && cnt['r'-'a'] && cnt['e'-'a'] && cnt['e'-'a'])
    {
        v.pb(3);
        cnt['t'-'a']--;   cnt['h'-'a']--;   cnt['r'-'a']--;    cnt['e'-'a']--;   cnt['e'-'a']--;
    }
    while(cnt['n'-'a'] && cnt['i'-'a'] && cnt['n'-'a'] && cnt['e'-'a'] )
    {
        v.pb(9);
        cnt['n'-'a']--;   cnt['i'-'a']--;   cnt['n'-'a']--;    cnt['e'-'a']--;
    }
    sort(v.begin(), v.end());
    n = v.size();
    for(i=0; i<n; i++)
    {
        if(v[i])
        {
            cout <<v[i];
            for(j=0; j<i; j++)  cout <<v[j];
            for(j=i+1; j<n; j++)   cout <<v[j];
            cout <<endl;
            return;
        }
    }
    cout <<0<<endl;


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

