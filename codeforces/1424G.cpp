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
    int i,j,n,m,k;
    cin >> n ;
    ll B[n+5],D[n+5];
    for(i=0; i<n; i++)
    {
        cin >> B[i] >> D[i];
        D[i]--;
    }
    sort(B,B+n);
    sort(D,D+n);
    ll mx=0,ind=0,cnt=0;
    for(i=0,j=0; i<n; i++)
    {
        cnt++;
        while(B[i]>D[j])
        {
            cnt--;
            j++;
        }
        if(cnt>mx)
        {
            mx = cnt;
            ind = B[i];
        }
    }
    cout <<ind<<" "<<mx<<endl;
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    int t,tt=1;
   // cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}

