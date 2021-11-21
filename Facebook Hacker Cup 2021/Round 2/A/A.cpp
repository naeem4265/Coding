#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("runway_input.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007
#define limit 1000008
using namespace std;

struct st
{
    ll d,c;
};
bool operator <(st a, st b)
{
    if(a.d!=b.d) return a.d < b.d;
    return a.c < b.c;
}

st pre[limit],cur[limit];

void solve(ll t)
{
    ll i,j,n,m,k;

    scanf("%d %d", &n, &m);
    //cin >> n >> m;

    for(i=0; i<m; i++)
    {
        scanf("%d", &pre[i].d);
        //cin >> pre[i].d;
        pre[i].c = 1;
    }

    ll ans = 0,ct=m;
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            scanf("%d", &cur[i].d);
            //cin >> cur[j].d;
            cur[j].c = 1;
        }
        sort(pre, pre+m);
        sort(cur, cur+m);


        ll temp = max(ct,0);
        for(j=0,k=0; j<m && k<m; j++)
        {
            if( cur[j].d == pre[k].d)
            {
                if(pre[k].c == 1)
                    temp--;
                k++;
            }
            else if( cur[j].d < pre[k].d )
            {
                continue;
            }
            else if(k<m)
            {
                j--;
                k++;
            }
        }

//        for(j=0; j<m; j++)
//        {
//            cout <<pre[j].d <<" "<<pre[j].c<<endl;
//            cout <<cur[j].d <<" "<<cur[j].c<<endl;
//        }
//
//        cout << temp <<endl;

        for(j=0,k=0; j<m; j++)
        {
            if( k<m && cur[j].d == pre[k].d)
            {
                cur[j].c = pre[k].c;
                k++;
            }
            else if( cur[j].d < pre[k].d )
            {
                cur[j].c = 0;
                if(temp)
                {
                    temp--;
                    ct--;
                }
                else
                    ans++;
            }
            else if( k>=m )
            {
                cur[j].c = 0;
                if(temp)
                {
                    temp--;
                    ct--;
                }
                else
                    ans++;
            }
            else
            {
                j--;
                k++;
            }   //cout <<i<<" "<<j<<" "<<ct<<" "<<ans<<endl;
        }
        for(j=0; j<m; j++)
        {
            pre[j].d = cur[j].d;
            pre[j].c = cur[j].c;
            //cout <<pre[j].d <<" "<<cur[j].c<<endl;
        }
    }

    printf("Case #%d: %d\n",t,ans);
    //cout <<"Case #"<<t<<": "<<ans<<"\n";

    return ;
}
int  main()
{
//    Fast
    Freed
    Fout
    ll t,tt=1;
    scanf("%d", &tt);
    //cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
