#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 10008
using namespace std;
vector<bool>out;
void solve(int t)
{
    int i,j,n,m,k,one=0,zero=0,ans=0;
    cin >> n;
    bool D[n+5];
    for(i=0; i<n; i++)
    {
        cin >> D[i];
        if(D[i])
            one++;
        else
            zero++;
    }
    if(zero>=one)
    {
        cout <<zero<<endl;
        for(i=0; i<n; i++)
        {
            if(D[i]==0)
                cout <<"0 ";
        }
        cout <<endl;
        return ;
    }
    if(one&1) one--;
    j=0;
    cout <<one<<endl;
    for(i=0; j<one; i++)
    {
        if(D[i])
        {
            cout <<"1 ";
            j++;
        }
    }
    cout <<endl;
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

