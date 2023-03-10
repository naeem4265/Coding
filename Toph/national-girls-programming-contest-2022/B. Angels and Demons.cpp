#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define pi acos(-1.0)
const ll limit = 1e6+5;
const ll Mod = 1e9+7;
using namespace std;

struct str
{
    ll s, e, d;
};
bool operator<(str x, str y)
{
    if(x.s != y.s)    return x.s<y.s;
    return x.d > y.d;
}

void Please_AC(ll tt)
{
    ll i,j,n,m,k,q;
    cin >> n >> q;
    str A[q+5];
    for(i=0; i<q; i++)
    {
        cin >> tt;
        cin >> A[i].s >> A[i].e >> A[i].d ;
        if(tt==2)  A[i].d = -A[i].d;
    }
    sort(A, A+q);
    A[q].d = 0;
    A[q].s = Mod;
    A[q].e = Mod;

    priority_queue <pair<ll,ll> , vector<pair<ll,ll> >, greater<pair<ll,ll> > > pq;
    ll sum = 0, cur = 0, lst = 0;
    ll mn = 1e18;
    for(i=0; i<=q; i++)
    {
        while(!pq.empty() && pq.top().first < A[i].s)
        {
            pair<ll,ll> z = pq.top();
            pq.pop();

            sum += cur*(z.first-lst);
            mn = min(mn, sum);
            cur -= z.second;
            lst = z.first;   //cout <<i<<" up "<<pq.size()<<" "<<cur<<" "<<sum<<" "<<mn<<endl;
        }
        if(i==q)    break;
        pq.push({A[i].e, A[i].d});

        sum += (A[i].s-lst)*cur;
        cur += A[i].d;
        sum += A[i].d;
        lst = A[i].s;
        mn = min(mn, sum);     //cout <<i<<' '<<pq.size()<<" "<<cur<<" "<<sum<<" "<<mn<<endl;
    }

    cout << max(1LL, -mn+1) <<endl;

    return ;
}

//wrong answer
int  main()
{
    Fast
    //Freed
    //Fout
    ll t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
    {
        //printf("Case :%lld ",t);
        Please_AC(t);
    }
    return 0;
}

