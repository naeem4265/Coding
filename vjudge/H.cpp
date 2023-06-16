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
    cin >> n;
    ll a[n+5], b[n+5];
    for(i=0; i<n; i++)
    {
        cin >> a[i];
    }
    for(i=0; i<n; i++)
    {
        cin >> b[i];
    }
    i = 1LL<<31LL;
    ll mx=1LL<<32LL, ct=0;
    mx--;
    bool take[n+5];
    memset(take, 1, sizeof(take));
    bool ok = 0;
    for(; i>0; i = i>>1LL)
    {      //cout <<i<<" "<<mx<<" "<<(mx&i)<<endl;
        if((mx&i)==0)   continue;
        for(j=0; j<n; j++){
            if(take[j]==0 && (b[j]&i))  continue;
            if(take[j] && ((a[j]&i) || (b[j]&i)))  continue;
            break;
        }
        if(j==n)
        {
            for(j=0; j<n; j++){
                if(take[j]==0)
                {
                    mx = (mx&b[j]);
                }
                else if((a[j]&i) && (b[j]&i))
                {
                    continue;
                }
                else if(a[j]&i)
                {
                    mx = (mx&a[j]);
                }
                else
                {
                    ct++;
                    mx = (mx&b[j]);
                    take[j] = 0;
                }
            }
            ok = 1;
        }
    }
    for(i=0; i<n; i++)
    {    //cout <<i<<" "<<mx<<" "<<take[i]<<endl;
        if(take[i])   mx = (mx&a[i]);
        else   mx = (mx&b[i]);
    }
    if(ok==0)
    {
        mx = 0;
        ct = 0;
    }
    cout << mx <<" "<<ct<<endl;



    return ;
}


int  main()
{
    Fast
//    Freed
//    Fout
    ll t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
    {
        //printf("Case :%lld ",t);
        Please_AC(t);
    }
    return 0;
}
