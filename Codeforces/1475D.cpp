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

void solve(ll tc)
{
    ll i,j,n,m,k,a;
    cin >> n >> m;
    ll A[n+5];
    vector<ll> one,two;
    one.pb(0);
    two.pb(0);
    for(i=0; i<n; i++)
    {
        cin >> A[i];
    }
    for(i=0; i<n; i++)
    {
        cin >> a;
        if(a==1)
            one.pb(2*A[i]);
        else
            two.pb(A[i]);
    }
    sort(one.begin(),one.end());
    sort(two.begin(),two.end());
    i = one.size()-1;
    j = two.size()-1;
    ll ans = 0;
    while(1)
    {
        if(m<=0) break;
        if(i<=0 && j<=0) break;
        if(i<=0)
        {
            ans += 2;
            m -= two[j];
            j--;
        }
        else if(j<=0)
        {
            ans++;
            m -= (one[i]/2);
            i--;
        }
        else
        {
            if(m<=(one[i]/2))
            {
                m -= (one[i]/2);
                ans++;
                i--;
            }
            else if(one[i]<=two[j])
            {
                m -= two[j];
                ans+=2;
                j--;
            }
            else
            {
                ans++;
                m -= (one[i]/2);
                i--;
            }
        }
    }
    i++; //cout <<ans<<" "<<m<<" "<<one[i]<<" "<<i<<" "<<j<<endl;
    if(m<0 && i<one.size() && (one[i]/2)<=abs(m) ) ans--;
    if(m<=0)
        cout <<ans<<endl;
    else
        cout <<-1<<endl;
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    ll tc,tt=1;
    cin >> tt;
    for(tc=1; tc<=tt; tc++)
        solve(tc);
    return 0;
}

