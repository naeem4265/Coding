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
    string s,t;
    cin >> s;

    ll cnt[30];
    ll ans = 1e9,ct;

    for(i=1; (i*i)<=n; i++)
    {
        if(n%i)   continue;
        m = n/i;
        if( i<=26 )
        {
            ct = 0;
            bool vis[30];
            memset(vis, 0, sizeof(vis));
            memset(cnt, 0, sizeof(cnt));
            for(j=0; j<n; j++)
            {
                cnt[s[j]-'a']++;
                if(cnt[s[j]-'a']>m)  ct++;
            }
            vector<pair<ll,ll> > v;
            for(j=0; j<26; j++)
            {
                v.pb({cnt[j], j});
            }
            sort(v.begin(), v.end());
            reverse(v.begin(), v.end());
            for(j=i; j<v.size(); j++)
            {
                ct += v[j].first;
                vis[v[j].second] = 1;
            }

            if(ct<ans)
            {
                t = s;
                for(j=0,k=i-1; j<n; j++)
                {
                    while(k>0 && cnt[v[k].second]>=m ) k--;

                    if( cnt[s[j]-'a']>m || vis[s[j]-'a'])
                    {
                        t[j] = v[k].second + 'a';
                        cnt[v[k].second]++;
                        cnt[s[j]-'a']--;
                    }
                }       //cout <<i<<" here "<<ct<<" "<<ans<<" "<<t<<endl;
                ans = ct;
            }
        }



        if(m<=26)
        {
            ct = 0;
            bool vis[30];
            memset(vis, 0, sizeof(vis));
            memset(cnt, 0, sizeof(cnt));
            for(j=0; j<n; j++)
            {
                cnt[s[j]-'a']++;
                if(cnt[s[j]-'a']>i)  ct++;
            }
            vector<pair<ll,ll> > v;
            for(j=0; j<26; j++)
            {
                v.pb({cnt[j], j});
            }
            sort(v.begin(), v.end());
            reverse(v.begin(), v.end());
            for(j=m; j<v.size(); j++)
            {
                ct += v[j].first;
                vis[v[j].second] = 1;
            }

            if(ct<ans)
            {
                t = s;
                for(j=0,k=m-1; j<n; j++)
                {
                    while(k>=0 && cnt[v[k].second]>=i ) k--;

                    if( cnt[s[j]-'a']>i || vis[s[j]-'a'])
                    {
                        t[j] = v[k].second + 'a';
                        cnt[v[k].second]++;
                        cnt[s[j]-'a']--;
                    }
                }       //cout <<i<<" here "<<ct<<" "<<ans<<" "<<t<<endl;
                ans = ct;
            }
        }
    }
    cout << ans <<endl;
    cout << t <<endl;
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

