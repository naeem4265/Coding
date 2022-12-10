#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define pi acos(-1.0)
const ll limit = 1e5;
const ll Mod = 1e9+7;
using namespace std;

void Please_AC(ll tt)
{
    ll i,j,n,m,k,p=99991;
    cin >> n;
    if(n<=100000)
    {
        cout <<1<<endl<<n<<endl;
        return;
    }
    ll d[limit+5];
    for(i=1; ; i++)
    {
        m = n-i*p;
        if(m>=(i+1+i+2))
        {
            d[i] = p;
            n = m;
            continue;
        }
        m = n-(i-1);
        if(m<p)
        {
            d[i] = m;
            break;
        }
        else
        {
            d[i] = 1;
            n -= i;
        }
    }
    cout <<i<<endl;
    for(j=1; j<=i; j++)   cout << d[j] <<" ";   cout <<endl;
    return ;
}


int  main()
{
    Fast
    ll t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
    {
        //printf("Case :%lld ",t);
        cout <<"YES\n";
        Please_AC(t);
    }
    return 0;
}

