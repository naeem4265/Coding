#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007
#define limit 1000008
using namespace std;


void Please_AC(ll tt)
{
    ll i,j,n;

    while(1)
    {
        double l,w;
        scanf("%lf %lf", &l, &w);
        if((l+w)<1.00)  return ;
        double b=0.0,e=l/2.0,m, ans = l+w,otivuj,lomvo,vumi;
        ll cnt=100;
        while(cnt--)
        {
            m = (b+e)/2.00;
            lomvo = m;
            otivuj = l-lomvo;
            vumi = sqrt(otivuj*otivuj-lomvo*lomvo);
            double temp = w-vumi+otivuj+l-lomvo;
            if(temp>ans)
            {
                e = m;
            }
            else
            {
                ans = min(ans, w-vumi+otivuj+l-lomvo);
                b = m;
            } //cout <<otivuj<<" "<<lomvo<<" "<<w-lomvo<<" "<<l-lomvo<<" "<<w-lomvo+otivuj+l-lomvo<<endl;
        }
        //ans = otivuj+otivuj+y-vumi;
        printf("%.4lf\n", ans);
    }
    return ;
}


int  main()
{
   // Fast
//    Freed
//    Fout
    ll t,tt=1;
    //cin >> tt;
    for(t=1; t<=tt; t++)
        Please_AC(t);
    return 0;
}
