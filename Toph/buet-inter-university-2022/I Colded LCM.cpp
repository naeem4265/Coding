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
    ll i,j,l,r,m,low=1,high=Mod,ans=1,x;
    cin >> l >> r;
    while(low<=high)
    {
        m = (low+high)/2;
        for(i=m,j=0; j<2000; j++,i++)
        {
            x = (l-1)/i;
            x++;
            if((x+1)*i<=r)
            {
                break;
            }
        }
            x = (l-1)/i;
            x++;
            if((x+1)*i<=r)
            {
                ans = x*(x+1)*i;
                low = m+1;
            }
            else
            {
                high = m-1;
            }
         // cout <<m<<endl;
    }
    cout << ans <<endl;


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
        Please_AC(t);
    return 0;
}
