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
    int i,j,n,m,k,l=0;
    cin >> n >> k;
    string s;
    cin >> s;
    sort(s.begin(),s.end());
    if(s[0]!=s[k-1])
    {
        cout <<s[k-1]<<endl;
        return ;
    }
    cout <<s[0];
    if(s[k]==s[n-1])
    {
        m = (n-1)/k;
        i=k;
        while(m--)
            cout <<s[i];
        cout <<endl;
        return ;
    }
    else
    {
        for(i=k; i<n; i++)
            cout <<s[i];
        cout <<endl;
        return ;
    }

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

