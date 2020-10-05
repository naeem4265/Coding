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
    int i,j,n,m;
    cin >> n;
    char ch;
    ll day[n+5],month[n+5],year[n+5];
    for(i=0;i<n; i++)
        cin >> day[i] >> ch >> month[i] >> ch >> year[i];
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(year[i]>year[j])
            {
                swap(day[i],day[j]);
                swap(month[i],month[j]);
                swap(year[i],year[j]);
            }
            if(year[i]==year[j])
            {
                if(month[i]>month[j])
                {
                    swap(day[i],day[j]);
                    swap(month[i],month[j]);
                }
                if(month[i]==month[j])
                {
                    if(day[i]>day[j])
                        swap(day[i],day[j]);
                }
            }
        }
    }
    for(i=0; i<n; i++)
        cout <<day[i] << ch <<month[i]<< ch <<year[i]<<endl;
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

