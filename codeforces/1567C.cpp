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

ll dp[15][15][15];
string s;

ll rec(ll pos,ll car0, ll car1)
{
    if(pos==0)
    {      //cout <<car[pos]<<" "<<n<<" "<<x<<endl;
        if(car0 || car1)
            return 0;
        return 1;
    }

    if(dp[pos][car0][car1]!=-1) return dp[pos][car0][car1];


    ll temp = 0,car2=0;
    for(ll i=0; i<10; i++)
    {
        if( (i+car0) > (s[pos]-'0') && pos==1 ) break;

        if( (i+car0) > (s[pos]-'0') )
            car2=1;
        temp += rec(pos-1, car1, car2);     //cout <<i<<" "<<pos<<" "<<temp<<endl;
    }
    return dp[pos][car0][car1] = temp;
}

void solve(ll t)
{
    ll i,j,n,k;
    memset(dp,-1,sizeof(dp));


    cin >> s;
    s = '0'+s;
    n = s.size();


    cout << rec(n-1,0,0)-2 << endl;

    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    ll t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
