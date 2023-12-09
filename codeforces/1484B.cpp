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
    ll i,j,n,m=0,k;
    string s;
    cin >> n ;
    ll b[n+5],d[n+5];
    for(i=0; i<n; i++)
    {
        cin >> d[i];
        b[i] = d[i];
    }
    sort(b,b+n);

    if(b[0]==b[n-1] || n==1)
    {
        cout <<0<<endl;
        return ;
    }

    for(i=1; i<n; i++)
    {
        if(d[i]==d[i-1])
        {
            cout <<-1<<endl;
            return ;
        }
    }

    ll mx = -1,c=0,ind;

    for(i=0; i<n; i++)
    {
        if(d[i]>mx)
        {
            ind = i;
            mx = d[i];
        }
    }

    if(ind==n-1)
    {
        c = d[n-1] - d[n-2];
        for(i=1; i<n; i++)
        {
            if(d[i]<d[i-1])
            {
                m = d[i-1]+c-d[i];
                break;
            }
        }
        if(i==n)
        {
            cout <<0<<endl;
            return ;
        }
        for(i=1; i<n; i++)
        {
            k = (d[i-1]+c)%m;
            if(d[i]!=k)
            {
                cout <<-1<<endl;
                return ;
            }
        }
    }

    if(ind!=0)
    {
        c = d[ind]-d[ind-1];
        m = d[ind]+c-d[ind+1];
        for(i=1; i<n; i++)
        {
            k = (d[i-1]+c)%m;
            if(d[i]!=k)
            {
                cout <<-1<<endl;
                return ;
            }
        }
    }
    else
    {
        c = 0;
        for(i=1; i<n; i++)
        {
            if(d[i]>d[i-1])
            {
                c = d[i]-d[i-1];
                break;
            }
        }
        if(i==n)
        {
            cout <<-1<<endl;
            return ;
        }
        m = d[0]+c-d[1];

        for(i=1; i<n; i++)
        {
            k = (d[i-1]+c)%m;
            if(d[i]!=k)
            {
                cout <<-1<<endl;
                return ;
            }
        }
    }

    for(i=1; i<n; i++)
    {
        k = (d[i-1]+c)%m;
        if(d[i]!=k)
        {
            cout <<-1<<endl;
            return ;
        }
    }

    if(m<=c || m<=mx)
    {
        cout <<-1<<endl;
        return;
    }

    cout << m << " " <<c<<endl;
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
