#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define pi acos(-1.0)
const ll limit = 1e6+5;
const ll Mod = 1e9+7;
using namespace std;


void Please_AC(ll tt)
{
    ll i,j,n,m,k,q;
    cin >> n;
    ll d[n+5];

    ll ans1 = 0 ,ans3=0;
    long double ans2=0.00;
    for(int i=0;i<n;i++){
        cin >> d[i];
        ans1+=abs(d[i]);
        ans3 = max(ans3,abs(d[i]));

        long double x = abs(d[i]);

        ans2 += pow(d[i],2.0);

    }
    ans2 =  sqrt(ans2);

    cout<< ans1 <<endl;
    cout<<fixed<<setprecision(15)<<ans2<<endl;
    cout<<ans3<<endl;




    return ;
}


int  main()
{
    Fast
    ll t,tt=1;
    //cin >> tt;
    for(t=1; t<=tt; t++)
    {
        //printf("Case :%lld ",t);
        Please_AC(t);
    }
    return 0;
}

