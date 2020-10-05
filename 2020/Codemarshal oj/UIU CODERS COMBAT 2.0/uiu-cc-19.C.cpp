#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);

#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 1000008
using namespace std;

void solve(int t)
{
    int i,j,k,n,m,mn=Mod,mx=0;
    cin >> n;
    int L[n+5];
    for(i=0; i<n; i++)
        cin >> L[i];
    sort(L,L+n);
    for(i=0; i<min(n,100); i++)
    {
        for(j=i+1; j<min(n,100); j++)
        {
            for(k=j+1; k<min(n,100); k++)
            {
                if((L[i]+L[j])>L[k])
                {
                    mn = min(mn,L[i]+L[j]+L[k]);
                }
                else
                    break;
            }
        }
    }
    for(i=n-3; i>=0; i--)
    {
        if((L[i]+L[i+1])>L[i+2])
        {
            mx = max(mx,L[i+2]+L[i+1]+L[i]);
        }
    }
    if(mx)
        cout <<"Case "<<t<<": "<<mn<<" "<<mx<<endl;
    else
        cout <<"Case "<<t<<": -1\n";
    return ;
}
int  main()
{
    Fast
//    Freed
//    Fout
    int t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}


