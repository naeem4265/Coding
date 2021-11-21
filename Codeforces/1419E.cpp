#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 100000000
using namespace std;
bool vis[limit];
vector<int> prime;
void seive()
{
    int i,j;
    for(i=4; i<limit; i+=2) vis[i]=1;
    for(i=3; i*i<=limit; i+=2)
    {
        if(!vis[i])
            for(j=i*i; j<limit; j+=2*i)
                vis[j]=1;
    }
    prime.pb(2);
    for(i=3; i<limit; i+=2)
        if(vis[i]==0)
            prime.pb(i);
}
bool check(int n)
{
    for(int i=0; prime[i]*prime[i]<=n; i++)
    {
        if(n%prime[i]==0)
            return 0;
    }
    return 1;
}
void solve(int t)
{
    int i,j,n,m,x,y,temp,k;
    cin >> n;
    vector<int>np,p;
    np.pb(n);
    for(i=2; i*i<=n; i++)
    {
        if(n%i==0)
        {
            if(vis[i])
                np.pb(i);
            else
                p.pb(i);
            if(i==n/i) continue;
            if(n/i<limit)
            {
                if(vis[n/i])
                    np.pb(n/i);
                else
                    p.pb(n/i);
            }
            else
            {
                if(check(n/i))
                    np.pb(n/i);
                else
                    p.pb(n/i);
            }
        }
    }
    sort(p.begin(),p.end());
    sort(np.begin(),np.end());

    if(p.size()<=np.size())
    {
        int k=np.size()-1;
        cout <<np[k]<<" ";
        np.pop_back();
        k--;
        temp = 0;
        for(i=p.size()-1; i>=0; i--)
        {
            x = p[i];
            if(k<0 && temp==0)
            {
                cout <<x<<" ";
                continue;
            }
            if(temp)
            {
                y = temp;
                temp = 0;
            }
            else
            {
                y = np[k];
                np.pop_back();
                k--;
            }
            if(__gcd(x,y)==1)
            {
                temp = y;
                y = np[k];
                np.pop_back();
                k--;
            }
            cout <<x<<" "<<y<<" ";
        }
        for(; k>=0; k--)
            cout <<np[k]<<" ";
        cout <<endl <<0<<endl;
    }
    else
    {
        k = p.size()-1;
        cout <<p[k]<<" ";
        k--;
        p.pop_back();
        temp = 0;
        for(i=np.size()-1; i>=0; i--)
        {
            x = np[i];
            if(k<0 && temp==0)
            {
                cout <<x<<" ";
                continue;
            }
            if(temp)
            {
                y = temp;
                temp = 0;
            }
            else
            {
                y = p[k];
                p.pop_back();
                k--;
            }
            if(__gcd(x,y)==1)
            {
                temp = y;
                y = p[k];
                p.pop_back();
                k--;
            }
            cout <<x<<" "<<y<<" ";
        }
        for(; k>=0; k--)
            cout <<p[k]<<" ";
        cout<<endl <<1<<endl;
    }
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    seive();  //cout <<prime.size()<<endl;
    int t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}

