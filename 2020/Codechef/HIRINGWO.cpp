#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 100
using namespace std;
vector<int>divi;
int k,sz,mn,group[limit];

void rec(int pos)
{
    if(pos==sz)
    {
        int total = 0;
        for(int i=1; i<=k; i++)
        {
            int sum=1;
            for(int j=0; j<sz; j++)
            {
                if(group[j]==i)
                    sum *= divi[j];
            }
            total = sum+total;   //cout <<i<<" "<<sz<<" "<<sum<<" total "<<total<<" "<<mn<<endl;
        }
        mn = min(mn,total);
        return ;
    }
    for(int i=1; i<=k; i++)
    {
        group[pos] = i;
        rec(pos+1);
    }
}

void solve(int t)
{
    int i,j,n,m;
    divi.clear();
    cin >>k >> n ;
    for(i=2; i*i<=n; i++)
    {
        int ct=1;
        while(n%i==0)
        {
            ct *= i;
            n/=i;
        }
        if(ct>1)
            divi.pb(ct);
    }
    if(n>1)
        divi.pb(n);
    sz=divi.size();
    int sum=0;
    for(i=0; i<sz; i++)
        sum += divi[i];
    if(sz<=k)
    {
        cout <<sum+k-sz<<endl;
        return ;
    }
    mn = Mod;
    rec(0);
    cout <<mn<<endl;
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    int t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}

