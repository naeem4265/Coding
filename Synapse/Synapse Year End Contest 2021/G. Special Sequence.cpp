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
#define limit 100008
using namespace std;
ll d[limit];
bool b[limit];

void solve(ll tt)
{
    ll i,j,n,m,k,q;

    cin >> n;
    for(i=0; i<n; i++)
        cin >> d[i];
    for(i=0; i<n; i++)
        cin >> b[i];

        //cout <<"input \n";
    vector<pair<ll,bool> > v;
    ll ok=1;
    for(i=0; i<n; i++)
    {
        if(b[i]==0)
        {
            v.pb(mp(d[i],0));
            continue;
        }
        for(j=i+1,ok=-1; j<=n; j++,ok*=-1)
        {
            if(j==n || b[j]==0)
            {
                v.pb(mp(d[i],1));
                i = j-1;
                break;
            }
            d[i] += ok*d[j];
        }
    }

    vector<ll> ans;
    n = v.size();   //cout <<n<<" "<<v[0].first<<endl;
    for(i=0,ok=1; i<n; i++)
    {    //cout <<i<<" "<<v[i].first<<" "<<v[i].second<<endl;
        if(v[i].second==1)
        {
            ans.pb(v[i].first);
            ok *= -1;
            continue;
        }
        for(j=i+1; j<n; j++)
        {
            if(j==n-1)
            {
                if(ok==1)
                {
                    ans.pb(v[j].first);
                    j++;
                    break;
                }
            }
            if(ok*v[j-1].first>v[j].first*ok)
            {
                ok *= -1;
                ans.pb(v[j-1].first);
                break;
            }
            if(v[j].second==1)
            {
                ok *= -1;
                ans.pb(v[j].first);
                j++;
                break;
            }
        }
        i = j-1;
    }
    n = ans.size();
    ll sum = 0;
    for(i=0,ok=1; i<n; i++,ok*=-1)
    {   //cout <<i<<" "<<ans[i]<<" "<<sum<<" "<<ok<<endl;
        sum += ans[i]*ok;
    }
    cout << sum <<endl;
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
