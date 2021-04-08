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

bool ok[limit];
ll ct[300];
string s;

void rec(ll l,ll r)
{
    if(l>r) return ;
    if(l==r)
    {
        if(ct[s[l]-'a'])
        {
            ok[l] = 1;
            ct[s[l]-'a'] = 0;
        }
        return ;
    }

            for(ll j=l; j<=r; j++)
            {
                if(ct[s[j]-'a']==1)
                {
                    ct[s[j]-'a'] = 0;
                    ok[j] = 1;
                    rec(l,j-1);
                    rec(j+1,r);
                    return ;
                }
            }
    ll i,j;
    if(r == s.size()-1) i = 0;
    else i = s[r];
    for(; i>='a'; i--)
    {            //cout <<i<<" "<<ct[i] <<" "<<l<<" "<<r<<endl;
        if(ct[i-'a'])
        {
            for(j=l; j<=r; j++)
            {
                if(i==s[j])
                {
                    ct[i-'a'] = 0;
                    ok[j] = 1;
                    rec(l,j-1);
                    rec(j+1,r);
                    return ;
                }
            }
        }
    }

    for(ll i='z'; i>='a'; i--)
    {            //cout <<i<<" "<<ct[i] <<" "<<l<<" "<<r<<endl;
        if(ct[i-'a'])
        {
            for(ll j=l; j<=r; j++)
            {
                if(i==s[j])
                {
                    ct[i-'a'] = 0;
                    ok[j] = 1;
                    rec(l,j-1);
                    rec(j+1,r);
                    return ;
                }
            }
        }
    }
}

void solve(ll t)
{
    ll i,j,n,m,k;
    cin >> s ;
    n = s.size();
    memset(ct,0,sizeof(ct));
    for(i=0; i<n+5; i++)
    {
        ok[i] = 0;
    }

    for(i=0; i<n; i++)
    {
        ct[s[i]-'a']++;  //cout <<i<<" "<<s[i]-'a'<<" "<<ct[s[i]-'a']<<endl;
    }

    rec(0,n-1);
    for(i=0; i<n; i++)
    {
        if(ok[i]) cout <<s[i];
    }
    cout <<endl;
    return ;


    for(i=0; i<n; i++)
    {
        if(ct[s[i]-'a']==1)
        {
            ok[i] = 1;
            ct[s[i]-'a'] = 0;
        }
    }

    for(i='z'; i>='a'; i--)
    {
        for(j=0; j<n; j++)
        {
            if(s[j]==i)
            {
               ok[j] = 1;
               i = 0;
               ct[s[j]-'a']=0;
               break;
            }
        }
    }
    for(i=0,j=0; i<n; i++)
    {
        if(ok[i])
        {
            for(; j<i; j++)
            {
                if(ok[j]) break;  //cout <<i<<" "<<j<<" "<< ct[s[j]-'a']<<" "<<s[j]<<" "<<s[i]<<endl;
                if(ct[s[j]-'a'] && s[j]>s[i])
                {
                    ok[j] = 1;
                    ct[s[j]-'a'] = 0;
                }
            }
        }
    }
    for(i=n-1; i>=0; i--)
    {
        if(ct[s[i]-'a'])
        {
            ok[i] = 1;
            ct[s[i]-'a'] = 0;
        }
    }

    for(i='z'; i>='a'; i--)
    {
        for(j=0; j<n; j++)
        {
            if(s[j]==i && ct[s[j]-'a'])
            {
               ok[j] = 1;
               ct[s[j]-'a']=0;
               break;
            }
        }
    }

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
