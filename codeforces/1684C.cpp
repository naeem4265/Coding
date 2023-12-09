#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll int
#define pb push_back
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007
#define limit 1000008
using namespace std;

bool check(vector<vector<ll>> &v, ll n, ll m)
{
    for(ll i=0; i<n; i++)
    {
        for(ll j=1; j<m; j++)
        {
            if(v[i][j-1]>v[i][j])
                return false;
        }
    }
    return true;
}

void solve(ll tt)
{
    ll i,j,k,n,m;
    cin >> n >> m;

    vector<vector<ll>> v(n, vector<ll> (m,0));

    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            cin >> v[i][j];
        }
    }
    if(check(v, n, m))
    {
        cout <<"1 1\n";
        return ;
    }

    for(i=0; i<n; i++)
    {
        ll lidx,ridx;
        for(j=1; j<m; j++)
        {
            if(v[i][j-1]>v[i][j])
            {
                lidx = j-1;
                while(lidx && v[i][lidx-1]==v[i][lidx])
                    lidx--;
                ridx = j;
                while(ridx<m-1 && v[i][ridx]==v[i][ridx+1])
                    ridx++;
                for(k=0; k<n; k++)
                {
                    swap(v[k][lidx],v[k][ridx]);
                }
                if(check(v, n, m))
                {
                    cout <<lidx+1<<" "<<ridx+1<<endl;
                    return ;
                }
                for(k=0; k<n; k++)
                {
                    swap(v[k][lidx],v[k][ridx]);
                }

                while(ridx<m-1 && v[i][ridx]>=v[i][ridx+1])
                    ridx++;
                for(k=0; k<n; k++)
                {
                    swap(v[k][lidx],v[k][ridx]);
                }
                if(check(v, n, m))
                {
                    cout <<lidx+1<<" "<<ridx+1<<endl;
                    return ;
                }
                cout <<-1<<endl;
                return ;
            }
        }
    }
    cout <<"1 1"<<endl; // hudai check is there any error here
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
        solve(t);
    return 0;
}
