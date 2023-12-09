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
#define limit 1000008
using namespace std;

void solve(ll tt)
{
    ll i,j,n,m,k,q;

    cin >> n;
    ll d[n+5], ct=0;
    memset(d, 0, sizeof(d));
    for(i=1; i<=n; i++)
    {
        cin >> d[i];
        if(d[i]==0)  ct++;
    }
    if(ct==n)
    {
        cout <<n<<" 0\n";
        return ;
    }

    ll ans=0;
    ll la = n;
    ll ra = 0;

    ll r,l = 0,l1=0,r1=0,l2=0,r2=0,ans1=0,ans2=0,minu=0;
    for(r=1; r<=(n+1); r++)
    {
        if(d[r]==0 || r>n)
        {           //cout <<l<<" here "<<r<<endl;
            minu=0;
            for(i=l+1; i<r; i++)
                if(d[i]<0)  minu++;

            l1 = l;
            r1 = n-r+1;
            ans1 = 0;

            i = l;
            if(minu&1)
            {
                for(i=l+1; i<r; i++)
                    if(d[i]<0) break;
            }
            l1 = i;
            r1 = n-r+1;
            for(i=i+1; i<r; i++)
            {
                if(d[i]>1 || d[i]<-1)
                    ans1++;
            }      //cout <<ans1<<" "<<l1<<" "<<r1<<endl;

            minu=0;
            for(i=l+1; i<r; i++)
                if(d[i]<0)  minu++;
            l2 = l;
            r2 = n-r+1;
            ans2 = 0;

            i = r;
            if(minu&1)
            {
                for(i=r-1; i>l; i--)
                    if(d[i]<0) break;
            }

            l2 = l;
            r2 = n-i+1;
            for(i=i-1; i>l; i--)
            {
                if(d[i]>1 || d[i]<-1)
                    ans2++;
            }          //cout <<ans2<<" "<<l2<<" "<<r2<<endl;

            if(ans<ans1)
            {
                ans = ans1;   //cout <<"here "<<l1<<" "<<r1<<endl;
                la = l1;
                ra = r1;
            }
            if(ans<ans2)
            {
                ans = ans2;
                la = l2;
                ra = r2;
            }
            l = r;
        }
    }

    cout <<la<<" "<<ra<<endl;
}
int  main()
{
 //   Fast
//    Freed
//    Fout
    ll t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
