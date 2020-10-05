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
    ll i,j,n,m,k=1;
    cin >> n;
    ll D[n+5],ct[n+5];
    for(i=0; i<n+5; i++)
    {
        ct[i]=0;
    }
    map<ll,ll> mymap;
    for(i=0; i<n; i++)
    {
        cin >> D[i];
        if(mymap[D[i]]==0)
            mymap[D[i]]=k++;
        ct[mymap[D[i]]]++;
    }
    vector<ll> out;
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(ct[mymap[D[j]]])
            {
                if((D[j]%3 || ct[mymap[D[j]/3]]==0) && (ct[mymap[D[j]*2]]==0))
                {
                    out.pb(D[j]);    //cout <<D[j]<<" "<<j<<endl;
                    ct[mymap[D[j]]]--;
                    break;
                }
            }
        }
    }
    for(i=out.size()-1; i>=0; i--)
        cout <<out[i]<<" ";
    cout <<endl;
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    int t,tt=1;
   // cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}


