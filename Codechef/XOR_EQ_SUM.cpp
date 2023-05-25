#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll unsigned long long int
#define pb push_back
#define pi acos(-1.0)
const ll limit = 5e18+5;
const ll Mod = 1e9+7;
using namespace std;

ll ncr[100][100];
ll nCr(ll n, ll r)
{
    if(r>n)  return 0;
    if(n==r) return 1;
    if(r==1) return n;
    if(ncr[n][r]) return ncr[n][r];
    return ncr[n][r] = (nCr(n-1,r-1)+nCr(n-1,r));
}

void Please_AC(ll tt)
{
    ll i,j,n,m,k,q,l,r;
    cin >> l >> r;

    if(tt <= 10LL && r<=105LL)
    {
        set<ll> st;
        for(i=l; i<=r; i++)
        {
            for(j=i; j<=r; j++)
            {
                if((i+j)==(i^j))
                {
                    st.insert(i+j);
                }
            }
        }
        cout <<st.size()<<endl;
        return;
    }
    if(tt<=10LL && r<=100005LL)
    {
        ll  ans=0;
        if(l==0)  ans++;
        for(i=1; i<=262144LL; i++)
        {
            m = i;

            ll ct=0, a=0,b, temp=1;
            while(m)
            {
                if(m&1)
                {
                    b = temp;
                    a += temp;
                    ct++;
                }
                m /= 2LL;
                temp = temp*2LL;
            }       //cout <<i<<' '<<ct<<" "<<a<<" "<<b<<endl;
            if(ct>=2LL && (a-b)>=l && b<=r)    ans++;
        }
        cout << ans <<endl;
        return ;
    }

    ll ans = 0;
    if(l==0) ans++;

    for(i=1,k=0; ; i = i*2LL,k++)
    {
        if(i>r)   break;
        for(j=0; j<=k; j++)
        {
            ans += nCr(k, j);
        }
    }
    cout << ans <<endl;

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

