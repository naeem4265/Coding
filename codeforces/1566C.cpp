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

void solve(ll t)
{
    ll i,j,n,m,k;
    string s[3];
    cin >> n;
    cin >> s[0] >> s[1];

    ll ct=0;
    for(i=0; i<n; i++)
    {
        if( s[0][i]!=s[1][i] )    ct+=2;
        else if(s[0][i]=='1')
        {
            for(j=i+1; j<n; j++)
            {
                if( s[0][j]!=s[1][j] )
                {
                    ct+=2;
                    i = j;
                    break;
                }
                if(s[0][j]=='0')
                {
                    ct+= 2;
                    i = j;
                    break;
                }
            }
            if(j==n)
                i = j;
        }
        else
        {
            for(j=i+1; j<n; j++)
            {
                if( s[0][j]!=s[1][j] )
                {
                    ct+=3;
                    i = j;
                    break;
                }
                if(s[0][j]=='1')
                {
                    ct+= 2;
                    i = j;
                    break;
                }
                else
                    ct++;
            }
            if(j==n){
                ct++;
                i=j;
            }
        }         //cout <<i<<" "<<ct<<endl;
    }

    cout <<ct<<endl;


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
