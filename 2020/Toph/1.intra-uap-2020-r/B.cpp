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
    int k=0,i,j,n,m,mx=0,ct=1,sum=0;
    cin >> n >> m;
    string s;
    cin >> s;
    int sz=s.size();
    char ch[n+5][m+5];
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            if(k<sz)
                ch[i][j]=s[k];
            else
                ch[i][j]=' ';
            k++;  //cout <<ch[i][j];
        }//cout <<endl;
    }
    char c;
    int D[m+5];
    for(i=0; i<m; i++)
    {
        cin >> c >> D[i];
        D[i] = D[i]%n;
        if(c=='D')
            D[i] = n-D[i];
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            k = (i+D[j])%n;  //cout <<k<<" "<<ch[k][j]<<endl;
            cout <<ch[k][j];
        }
    }
    cout <<endl;
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



