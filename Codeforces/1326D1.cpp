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

void solve(int t)
{
    int i,j,n,m,k,l,r;
    string s;
    cin >> s ;
    n = s.size();
    vector<char>pre,suf,tpre,tsuf,tpre2,tsuf2;
    for(l=0,r=n-1; l<r; l++,r--)
    {
        if(s[l]!=s[r])
            break;
        pre.pb(s[l]);
        suf.pb(s[r]);
    }
    for(k=r; k>=l; k--)
    {
        tpre.clear();
        tsuf.clear();
        for(i=l,j=k; i<j; i++,j--)
        {
            if(s[i]!=s[j])
                break;
            tpre.pb(s[i]);
            tsuf.pb(s[j]);
        }
        if(i>=j)
        {
            if(i==j)
                tpre.pb(s[i]);
            break;
        }
    }
    for(k=l; k<=r; k++)
    {
        tpre2.clear();
        tsuf2.clear();
        for(i=k,j=r; i<j; i++,j--)
        {
            if(s[i]!=s[j])
                break;
            tpre2.pb(s[i]);
            tsuf2.pb(s[j]);
        }
        if(i>=j)
        {
            if(i==j)
                tpre2.pb(s[i]);
            break;
        }
    }
    for(i=0; i<pre.size(); i++)
        cout <<pre[i];
    if((tpre.size()+tsuf.size())>=(tpre2.size()+tsuf2.size()))
    {
        for(i=0; i<tpre.size(); i++)
            cout <<tpre[i];
        for(i=tsuf.size()-1; i>=0; i--)
            cout <<tsuf[i];
    }
    else
    {
        for(i=0; i<tpre2.size(); i++)
            cout <<tpre2[i];
        for(i=tsuf2.size()-1; i>=0; i--)
            cout <<tsuf2[i];
    }
    for(i=suf.size()-1; i>=0; i--)
        cout <<suf[i];
    cout <<endl;
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    int t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}

