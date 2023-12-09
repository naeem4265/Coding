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
    ll cumbit[n+5][35];
    for(i=0; i<34; i++)   cumbit[0][i] = 0;
    for(i=1; i<=n; i++)
    {
        cin >> m;
        k = (1LL<<34LL);
        for(j=33; j>=0; j--)
        {
            k /= 2LL;    //cout <<j<<" "<<k<<endl;
            cumbit[i][j] = cumbit[i-1][j];
            if(m&k)  cumbit[i][j]++;
        }
    }
//    for(i=1; i<=n; i++)
//    {
//        for(j=4; j>=0; j--)  cout <<cumbit[i][j]<<" ";  cout <<endl;
//    }
    cin >> q;
    while(q--)
    {
        ll idx;
        cin >> idx >> k;
        ll l=idx, h = n, ans=-1;
        while(l<=h)
        {
            m = (l+h)/2LL;
            ll d = m-idx+1, x, sum=0;   x = (1LL<<34LL);
            for(j=33; j>=0; j--)
            {
                x /= 2LL;  // cout <<m<<" "<<j<<" "<<x<<" "<<cnt<<" "<<sum<<endl;
                ll cnt = cumbit[m][j] - cumbit[idx-1][j];
                if(cnt==d)
                    sum += x;
            }
            if(sum>=k)
            {
                ans = m;
                l = m+1;
            }
            else
                h = m-1;
        }
        cout << ans <<" ";
    }
    cout <<endl;



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
