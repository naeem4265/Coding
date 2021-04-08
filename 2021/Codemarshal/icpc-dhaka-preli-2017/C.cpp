#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 1000008
using namespace std;

void solve(int t)
{
    ll i,j,n,m,k;
    string s;
    cin >> n ;
    ll d[n+5][n+5];
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            cin >> d[i][j];
        }
    }
    ll ct = 0;
    set<ll>st;

    for(i=0; i<n; i++)
    {
        if(n<10) break;
        st.clear();
        for(j=0; j<n; j++)
        {
            st.insert(d[i][j]);
        }
        if(st.size()==10) ct++;
    }

    for(i=0; i<n; i++)
    {
        if(n<10) break;
        st.clear();
        for(j=0; j<n; j++)
        {
            st.insert(d[j][i]);
        }
        if(st.size()==10) ct++;
    }

    for(i=1; i<n; i++)
    {
        for(j=0; j<=n-5; j++)
        {
            st.clear();
            for(k=j; k<(j+5); k++)
            {
                st.insert(d[i-1][k]);
            }
            for(k=j; k<(j+5); k++)
            {
                st.insert(d[i][k]);
            }
            if(st.size()==10) ct++;            //cout <<st.size()<<" nnn "<<ct<<endl;
        }
    }

    for(i=1; i<n; i++)
    {
        for(j=0; j<=n-5; j++)
        {
            st.clear();
            for(k=j; k<(j+5); k++)
            {
                st.insert(d[k][i-1]);
            }
            for(k=j; k<(j+5); k++)
            {
                st.insert(d[k][i]);
            }
            if(st.size()==10) ct++;
        }
    }

    cout <<"Case "<<t<<": "<< ct <<endl;
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

