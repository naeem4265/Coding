#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007
#define limit 1000008
using namespace std;

void solve(ll t)
{
    ll i,j,n,m,a;
    string s;
    cin >> n;
    ll one=0,three=0,two=0,four=0,six=0;
    for(i=0; i<n; i++)
    {
        cin >> a;
        if(a==1) one++;
        else if(a==2) two++;
        else if(a==3) three++;
        else if(a==4) four++;
        else if(a==6) six++;
    }
    m = n/3;
    if(one==m && (two+three)==m && ((four+six)==m && three<=six))
    {
        for(i=0; i<m; i++)
        {
            cout <<"1 ";
            if(three)
            {
                three--;
                cout <<"3 6\n";
                six--;
            }
            else
            {
                cout <<"2 ";
                if(six)
                {
                    cout <<"6\n";
                    six--;
                }
                else
                    cout <<"4\n";
            }
        }
    }
    else
    {
        cout <<-1<<endl;
    }
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    ll t,tt=1;
    //cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
