#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 100008
using namespace std;
int ct[limit],half,sq;
void solve(int t)
{
    int a,k,i,j,n,mx=0,sum=0,q;
    cin >> n;
    for(i=0; i<n; i++)
    {
        cin >> a;
        ct[a]++;
    }
    for(i=0; i<limit; i++)
    {
        if(ct[i]>7)
        {
            sq +=2;
        }
        else if(ct[i]>5)
        {
            half++;
            sq++;
        }
        else if(ct[i]>3)
            sq++;
        else if(ct[i]>1)
            half++;
    }  //cout <<sq<<" "<<half<<endl;
    cin >> q;
    for(i=0; i<q; i++)
    {
        char ch;
        cin >> ch;
        cin >>a;
        if(ch=='-')
        {
            ct[a]--;
            if(ct[a]==7)
            {
                sq--;
                half++;
            }
            if(ct[a]==5)
                half--;
            if(ct[a]==3)
            {
                sq--;
                half++;
            }
            if(ct[a]==1)
                half--;
        }
        else
        {
            ct[a]++;
            if(ct[a]==8)
            {
                sq++;
                half--;
            }
            if(ct[a]==6)
                half++;
            if(ct[a]==4)
            {
                sq++;
                half--;
            }
            if(ct[a]==2)
                half++;
        }
        if((sq && half>=2) || sq>=2)
            cout <<"YES\n";
        else
            cout <<"NO\n";
    }
}
int  main()
{
//    Fast
//    Freed
//    Fout
    int t,tt=1;
   // cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
  return 0;
}

