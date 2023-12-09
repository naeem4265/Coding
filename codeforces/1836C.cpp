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

ll bigmod(ll b,ll p)
{
    ll ans=1;
    while(p)
    {
        if(p&1)
            ans = (ans*b);
        b = (b*b);
        p = p/2;
    }
    return ans;
}

void Please_AC(ll tt)
{
    ll i,j,n,m,q;
    ll A,B,C;
    long long int k;
    cin >> A >> B >> C >> k;
    //scanf("%lld %lld %lld %lld", &A, &B, &C, &k);
    ll as = bigmod(10LL, A-1);
    ll ae = bigmod(10LL, A)-1;
    ll bs = bigmod(10LL, B-1);
    ll be = bigmod(10LL, B)-1;
    ll cs = bigmod(10LL, C-1);
    ll ce = bigmod(10LL, C)-1;
    for(i=as; i<=ae; i++)
    {
        ll l = cs, h = ce, m, s = Mod, e = -1;
        while(l<=h)
        {
            m = (l+h)/2;    //cout <<m<<" "<<i<<" "<<m-i<<" "<<bs<<" "<<be<<endl;
            if((m-i)>=bs && (m-i)<=be)
            {
                s = m-i;
                h = m-1;
            }
            else if((m-i)<bs)
                l = m+1;
            else
                h = m-1;
        }
        l = cs;  h = ce;
        while(l<=h)
        {
            m = (l+h)/2;
            if((m-i)>=bs && (m-i)<=be)
            {
                e = m-i;
                l = m+1;
            }
            else if((m-i)>be)
                h = m-1;
            else
                l = m+1;
        }
        long long int ct = e-s+1;     // cout <<i<<" "<<e<<" "<<s<<" "<<ct<<" "<<k<<endl;
        if(ct<0LL)   ct = 0;
        if(k<=ct)
        {
            cout << i<<" + "<<s+k-1<<" = "<<i+s+k-1 <<endl;
            //printf("%lld + %lld = %lld\n", i, s+k-1, i+s+k-1);
            return;
        }
        k -= ct;
    }
    //printf("-1\n");
    cout << -1 <<endl;


    return ;
}


int  main()
{
    Fast
//    Freed
//    Fout
    ll t,tt=1;
    cin >> tt;
    //scanf("%lld", &tt);
    for(t=1; t<=tt; t++)
    {
        //printf("Case :%lld ",t);
        Please_AC(t);
    }
    return 0;
}
