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
    cin >> n;
    if(n==0)
    {
        cout <<10<<endl;
        return ;
    }
    if(n==1)
    {
        cout <<1<<endl;
        return ;
    }
    vector<int> out;
    for(i=9; i>1; i--)
    {
        while(n%i==0)
        {
            n /= i;
            out.pb(i);
        }
    }
    if(n>1)
        out.pb(n);
    if(n>9)
    {
        cout <<-1<<endl;
        return ;
    }
    sort(out.begin(),out.end());
    for(i=0; i<out.size(); i++)
    {
        cout <<out[i];
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

//Accepted
