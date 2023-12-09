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
struct st
{
    ll point,i;
    char ch;
};
bool operator<(st a,st b)
{
    return a.point<b.point;
}

void solve(ll t)
{
    ll i,j,n,m,k;
    string s;
    cin >> n >> m;

    char ch;
    ll point;
    st d[n+5],x,y;

    for(i=0; i<n; i++)
    {
        cin >> point;
        d[i].point = point;
        d[i].i = i;
    }
    for(i=0; i<n; i++)
    {
        cin >> ch;
        d[i].ch = ch;
    }
    sort(d,d+n);

    deque <st> odd,even;
    ll dis,ans[n+5];
    memset(ans,0,sizeof(ans));

    for(i=0; i<n; i++)
    {
        x = d[i];
        if(x.ch=='L')
        {
            if(x.point&1)
            {
                if(odd.size())
                {
                    y = odd.front();
                    odd.pop_front();
                    dis = (x.point-y.point)/2;     // cout <<x.i<<" odd "<<x.point<<" "<<y.i<<" "<<y.point<<" "<<dis<<endl;
                    ans[x.i] = dis;
                    ans[y.i] = dis;
                }
                else
                {
                    x.point = -x.point;
                    odd.push_back(x);
                }
            }
            else
            {
                if(even.size())
                {
                    y = even.front();
                    even.pop_front();
                    dis = (x.point-y.point)/2;   //cout <<x.i<<" even "<<x.point<<" "<<y.i<<" "<<y.point<<" "<<dis<<endl;
                    ans[x.i] = dis;
                    ans[y.i] = dis;
                }
                else
                {
                    x.point = -x.point;
                    even.push_back(x);
                }
            }
        }
        else
        {
            if(x.point&1)
            {
                odd.push_front(x);
            }
            else
            {
                even.push_front(x);
            }
        }
    }
    while(odd.size()>=2)
    {
        x = odd.front();
        odd.pop_front();
        y = odd.front();
        odd.pop_front();          //cout << x.point<<" "<<x.i<<" "<< y.point<<" "<<y.i << endl;
        x.point = m-x.point+m;
        dis = (x.point-y.point)/2;
        ans[x.i] = dis;
        ans[y.i] = dis;
    }
    while(even.size()>=2)
    {
        x = even.front();
        even.pop_front();
        y = even.front();
        even.pop_front();      //cout << x.point<<" "<<x.i<<" "<< y.point<<" "<<y.i << endl;
        x.point = m-x.point+m;
        dis = (x.point-y.point)/2;
        ans[x.i] = dis;
        ans[y.i] = dis;
    }
    if(odd.size())
    {
        x = odd.front();
        ans[x.i] = -1;
    }
    if(even.size())
    {
        x = even.front();
        ans[x.i] = -1;
    }
    for(i=0; i<n; i++)
    {
        cout << ans[i] <<" ";
    }
    cout << endl;
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
