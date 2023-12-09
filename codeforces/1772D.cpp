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


void Best_of_LUCK_MESSI(ll tt)
{
    ll i,j,n,m,k,q;
    cin >> n;
    ll d[n+5],a[n+5];

    for(i=1; i<=n; i++)
    {
        cin >> d[i];
        a[i] = d[i];
    }

    for(i=2; i<=n; i++)
    {
        if(d[i]>d[i-1])     break;
    }
    if(i>n)
    {
        cout << d[1] + 2 <<endl;      //cout <<"akhane1\n";
        return;
    }

    for(i=2; i<=n; i++)
    {
        if(d[i]<d[i-1])     break;
    }
    if(i>n)
    {
        cout << 0 <<endl;      //cout <<"akahen2\n";
        return;
    }

    d[0] = -1e12;
    for(i=2; i<=n; i++)
    {
        if(d[i]<d[i-1])
        {
            ll l=0, h = 1e9;
            while(l<=h)
            {
                m = (l+h)/2;
                for(j=1; j<=n; j++)   d[j] = a[j];
                for(j=1; j<=n; j++)
                {
                    d[j] = abs(d[j]-m);
                    if(d[j]<d[j-1])
                    {
                        if(j>i)
                            h = m-1;
                        else
                            l = m+1;
                        break;
                    }
                }
                if(j>n)
                {
                    cout << m <<endl;      //cout <<"akhane4\n";
                    return;
                }
            }
        }
    }      //cout <<"akhane5\n";
    cout  << -1 <<endl;
}


int  main()
{
   // Fast
    //Freed
    //Fout
    ll t,tt=1;
    cin >> tt;

    for(t=1; t<=tt; t++)
        Best_of_LUCK_MESSI(t);

    return 0;
}

