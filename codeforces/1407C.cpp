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
    int i,j,n,m,temp,x,y;
    cin >> n;
    if(n==1)
    {
        cout <<"! 1\n";
        return ;
    }
    int out[n+5];
    for(i=0; i<n+5; i++) out[i]=0;
    for(temp=1,i=2; i<=n ;i++)
    {
        cout <<"? "<<i<<" "<<temp<<endl;
        cin >> x;
        cout <<"? "<<temp<<" "<<i<<endl;
        cin >> y;
        if(x>y)
        {
            out[i]=x;

        }
        else
        {
            out[temp]=y;
            temp=i;
        }
    }
    cout <<"! ";
    for(i=1; i<=n;  i++)
    {
        if(out[i]==0)
            cout <<n<<' ';
        else
            cout <<out[i]<<' ';
    }
    cout <<endl;
    cout.flush();
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

