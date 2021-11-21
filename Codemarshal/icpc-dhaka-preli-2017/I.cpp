#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 50008
using namespace std;
void solve(ll t)
{

    char b[limit],p[limit];
    ll i,j,n,m,k;
    scanf("%s", &b);
    scanf("%s", &p);
    n = strlen(b);
    m = strlen(p);
    printf("Case %lld: ",t);
    if(m==1 && p[0]=='0')        /// if power is zero then ans always 1
    {
        printf("1\n");
        return;
    }
                                /// sum of all digit
    ll sum = 0;
    for(i=0; i<n; i++)
    {
        sum += (b[i]-'0');
    }
                                /// make it in 0-9, there is nice observation. some always in 1-9
    while(sum>=10)
    {
        ll temp = 0;

        while(sum)
        {
            temp += sum%10;
            sum /= 10;
        }
        sum = temp;
    }

    /*
        if sum = 1, ans alwase 1
        sum = 2, ans 2,4,8,7,5,1,2,4, so on
        sum = 3, ans 3,9,9,9 so on
        sum = 4, ans 4,7,1,4,7 so on
        sum = 5, ans 5,7,8,4,2,1,5,7,8 so on
        sum = 6, ans 6,9,9,9 so on
        sum = 7, ans 7,4,1,7,4,1 so on
        sum = 8, ans 8,1,8,1 so on
        sum = 9, ans always 9
    */

    ll x = 1e18;
    if(m==1 && p[0]=='1')
    {
        printf("%lld\n",sum);
        return ;
    }
    if(sum == 3 || sum == 6)
    {
        printf("9\n");
        return ;
    }
    vector<ll>v;
    v.pb(sum);
    ll temp = sum;
    ll sz = 1;
    while(1)
    {
        sum = temp*sum;
        while(sum>9LL)
            sum = sum%10+sum/10;

        ///find repeating
        for(i=0; i<sz; i++)
        {
            if(v[i]==sum)
            {
                break;
            }
        }
        if(i<sz) break;

        sz++;
        v.pb(sum);
    }
    x = 0;
    for(i=0; i<m; i++)
    {
        x = x*10LL+p[i]-'0';
        x = x%sz;
    }          //cout << x << " " <<rem<< " "<<k<<endl;
    x = (x-1+sz)%sz;
    printf("%lld\n",v[x]);
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    ll t,tt=1;
    scanf("%d",&tt);
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
