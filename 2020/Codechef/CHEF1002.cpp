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
    int i,j,n,m,ct=0;
    cin >> n;
    int A[n+5];
    for(i=0; i<n; i++)
        cin >> A[i];
    cin >> m;
    int B[m+5];
    for(i=0; i<m; i++)
        cin >> B[i];
    sort(A,A+n);
    sort(B,B+m);
    for(i=0,j=0; i<n; j++)
    {
        if(A[i]!=B[j])
        {
            if(ct)
                cout <<" ";
            cout <<B[j];
            ct++;
        }
        else
            i++;
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
   // cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
  return 0;
}


