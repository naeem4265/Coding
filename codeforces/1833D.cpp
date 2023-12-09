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
    for(i=1; i<=n; i++)  cin >> d[i];
    if(n==1)
    {
        cout <<1<<endl;
        return;
    }
    if(d[1]==n)
    {
        for(i=2; i<=n; i++)
        {
            if(d[i]==n-1)
            {
                for(j=i; j<=n; j++)  cout <<d[j]<<" ";
                cout <<d[i-1]<<" ";
                for(j=1; j<(i-1); j++)  cout <<d[j]<<" ";
                cout <<endl;
                return;
            }
        }
    }
    if(d[n]==n)
    {
        cout <<n<<" ";
        for(j=n-1; j>0; j--)
        {
            if(d[1]>d[j])
            {
                for(i=1; i<=j; i++)    cout <<d[i]<<" ";
                cout <<endl;
                return;
            }
            cout <<d[j]<<" ";
        }
    }
    for(i=2; i<=n; i++)
    {
        if(d[i]==n)
        {
            for(j=i; j<=n; j++)  cout <<d[j]<<" ";
            cout <<d[i-1]<<" ";
            for(j=i-2; j>0; j--)
            {
                if(d[j]<d[1])
                {
                    for(k=1; k<=j; k++)   cout <<d[k]<<" ";
                    cout <<endl;
                    return;
                }
                cout <<d[j]<<" ";
            }
        }
    }
    cout <<endl;

    return ;
}


int  main()
{
    Fast
    //Freed
    //Fout
    ll t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
    {
        //printf("Case :%lld ",t);
        Please_AC(t);
    }
    return 0;
}

