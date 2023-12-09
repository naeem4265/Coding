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
vector<int> v;
int D[limit];
void Mergesort(int l,int r)
{
    if(l==r) return ;
    int i,j,mid=(l+r)/2;
    Mergesort(l,mid);
    Mergesort(1+mid,r);
    v.clear();
    for(i=l,j=mid+1; ; )
    {
        if(i>mid && j>r) break;
        if(i>mid)
        {
            v.pb(D[j]);
            j++;
        }
        else if(j>r)
        {
            v.pb(D[i]);
            i++;
        }
        else if(D[i]<=D[j])
        {
            v.pb(D[i]);
            i++;
        }
        else
        {
            v.pb(D[j]);
            j++;
        }
    }
    for(i=l,j=0; i<=r; i++,j++)
    {
        D[i] = v[j];
    }
}

void solve(int t)
{
    int i,j,n,m,k;
    cin >> n ;
    for(i=0; i<n; i++)
        cin >> D[i];
    Mergesort(0,n-1);
    for(i=0; i<n; i++)
    {
        cout <<D[i]<<" ";
    }
    cout <<endl;
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    int t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}

