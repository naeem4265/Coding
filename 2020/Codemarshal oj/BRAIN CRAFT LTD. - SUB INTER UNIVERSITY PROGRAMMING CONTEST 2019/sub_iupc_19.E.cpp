#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 100008
using namespace std;
vector<ll>type[limit];
ll D[limit],T;

ll BS(ll x)
{
    ll m,last_ind=-1,l=0,r=T-1;
    while(l<=r)
    {
        m = (l+r)/2;    //cout<<l<<" LRRR "<<r<<' '<<m<<' '<<x<<' '<<D[m]<<' '<<last_date<<endl;
        if(D[m]>=x)
        {
            last_ind=m;
            r = m-1;
        }
        else
            l = m+1;
    }
    return last_ind;
}
void solve(ll t)
{
    ll i,j,n,m,p,k=1,ans=0;
    //scanf("%lld %lld %lld",&p,&n,&T);
    cin >> p >> n >> T;
    map<ll,ll>mymap;
    mymap.clear();
    for(i=0; i<n; i++)
    {
        ll t,d;
        //scanf("%lld %lld",&t,&d);
        cin >> t >> d;
        if(mymap[t]==0)
        {
            mymap[t] = k;
            type[k].clear();
            k++;
        }
        type[mymap[t]].pb(d);
    }
    for(i=0; i<T; i++)
    {
        //scanf("%lld",&D[i]);
        cin >> D[i];
    }
    sort(D,D+T);
    for(i=1; i<k; i++)
    {
        sort(type[i].begin(),type[i].end());
        ll sz = type[i].size();
        ll temp=0;
        for(j=0; j<sz; )
        {
            if(temp==T||sz>T || type[i][sz-1]>D[T-1])
            {
                printf("Case %lld: -1\n",t);
                return ;
            }
            ll x = type[i][j];
            temp = BS(max(x,D[temp]));      //cout <<i<<" "<<j<<' '<<x<<' '<<temp<<' '<<ans<<endl;
            if(temp==-1)
            {
                printf("Case %lld: -1\n",t);
                return ;
            }
            ans = max(ans,D[temp]-x);
            for(k=temp+1,j++; j<sz && k<T; k++,j++)
            {
                if(D[k-1]!=D[k] || type[i][j]>D[k])
                    break;
                ans = max(ans,D[k]-type[i][j]);
            }
            temp = k;
        }
    }
    printf("Case %lld: %lld\n",t,ans);
}
int  main()
{
  //  Fast
//    Freed
//    Fout
    ll t,tt=1;
    scanf("%lld",&tt);
    for(t=1; t<=tt; t++)
        solve(t);
  return 0;
}

/*
2
5 9 6
1 1
1 3
1 3
1 1
1 1
2 2
2 3
2 1
1 1
3 1 3 1 1 1
*/

