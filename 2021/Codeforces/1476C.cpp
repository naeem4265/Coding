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

void solve(ll tc)
{
    ll i,j,n,m,k;
    cin >> n ;
    ll A[n+5],B[n+5],C[n+5];
    for(i=1; i<=n; i++) cin >> C[i];
    for(i=1; i<=n; i++) cin >> A[i];
    for(i=1; i<=n; i++) cin >> B[i];
    for(i=1; i<=n; i++)
    {
        if(A[i]>B[i]) swap(A[i],B[i]);
    }
    ll pre = 0,ans = 0,a;
    A[n+1] = B[n+1] = 1;
    for(i=n; i>1; i--)
    {
        ll close = pre+B[i+1]-A[i+1];
        ll cur = C[i]-1+2;
        if(A[i+1]!=B[i+1])
            a = A[i+1]-1 + C[i]-B[i+1] + 2 + pre;
        else
            a = 0;
        ans = max(ans,close);
        ans = max(ans,cur);
        ans = max(ans,a);      //cout <<ans<<" "<<pre<<" "<<cur<<" "<<a<<endl;
        if(A[i]==B[i])
        {
            pre = 0;
        }
        else
        {
            pre = max(a,cur);
        }
    }
    ans = max(ans,pre+B[2]-A[2]);

    cout <<ans<<endl;
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    ll tc,tt=1;
    cin >> tt;
    for(tc=1; tc<=tt; tc++)
        solve(tc);
    return 0;
}

