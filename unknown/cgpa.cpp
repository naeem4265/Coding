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

struct st
{
    int id;
    string name;
    float cgpa;
};
bool operator<(st a,st b)
{
    if(a.cgpa != b.cgpa) return a.cgpa>b.cgpa;
    if(a.name != b.name) return a.name<b.name;
    return a.id<b.id;
}

void solve(ll t)
{
    ll i,j,n,m,k;
    string s;
    cin >> n;
    st sdt[n+2];
    for(i=0; i<n; i++)
    {
        cin >> sdt[i].id >> sdt[i].name >> sdt[i].cgpa;
    }
    sort(sdt,sdt+n);
    for(i=0; i<n; i++)
    {
        cout << sdt[i].name<<endl;
    }

    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    ll t,tt=1;
    //cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
