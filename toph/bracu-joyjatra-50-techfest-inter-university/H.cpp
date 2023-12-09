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
    ll i,j,n,m,k,temp,x;
    string s;
    cin >> n ;

    ll ans = 0;
    n--;
    for(i=1; i<n; i++)
    {
        for(j=20; j>=0; j--)
        {
            m = 1<<j;
            temp = 0;
            if((n&m) && (i&m)==0)
            {
                ll y = 0;
                for(j++; j<=20; j++)
                {
                    x = 1<<j;
                    if(n&x)
                        y += x;
                }
                x = m-1;
                k = n - m + (m-1);   // cout <<x <<" "<<y<<endl;
                if((y+x)==i)
                {
                    temp = min(n-m,i);
                }
                else
                    temp = min(n,i);
                ans += temp;            // cout <<i<<" "<<temp <<" "<< ans <<endl;
                break;
            }
        }
    }
    cout << ans <<endl;

//    bool vis[n+5];
//    for(i=0; i<n+5; i++)
//    {
//        vis[i] = 0;
//    }
//    ll ans = 0,x;
//    x = log2(n);
//    x = pow(2LL,x);
//    x--;
//    ans = (x*(x-1))/2;
//
//    n--;
//
//        i = x;
//        m = n-x;
//        ll temp = 0;
//        for(j = 1; j<m; j++)
//        {
//            temp = max(temp, i&j);
//        }
//
//        ans += temp;         //cout <<ans<<endl;
//
//    for(i=x+1; i<n; i++)
//    {
//        m = n-x-1;    //cout <<m<<" "<<x<<" naeem "<<n<<endl;
//        ll temp = 0;
//        for(j = 1; j<m-1; j++)
//        {
//            temp = max(temp, i&j);
//        }
//        if(i&(x+1)) temp += x+1;
//        ans += temp;          //cout <<i<<" "<<temp<<" "<<ans<<endl;
//    }
//    cout << ans <<endl;
//    return ;
//
////    for(i=n-1; i>=1; i--)
////    {
////        m = i;
////        ll sum = 0,pos = 0,ct = 1,d,temp = 0;
////        while(m)
////        {
////            d = m%2;
////            m = m/2;
////            if(d)
////            {
////                sum += ct;
////                if(vis[sum]) temp = max(temp,sum);
////                if(vis[ct]) temp = max(temp,ct);
////                vis[sum] = 1;
////                vis[ct] = 1;
////            }
////            vis[sum] = 1;
////            ct *= 2;
////        }
////        ans += temp;         cout <<i<<" "<<temp <<" "<< ans <<endl;
////    }
////    cout << ans <<endl;
////    return ;
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

