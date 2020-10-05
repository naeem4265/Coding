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
    int a,k,i,j,n,mx=0,ct=0,sum=0;
    cin >> n;
    int L[n+5];
    for(i=0; i<n; i++)
        cin >> L[i];
    sort(L,L+n);
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(L[i]==L[j]) continue;
            for(k=j+1; k<n; k++)
            {
                if(L[j]==L[k]) continue;
                if((L[i]+L[j])>L[k])
                    ct++;
            }
        }
    }
    cout <<ct<<endl;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    int t,tt=1;
  //  cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
  return 0;
}

