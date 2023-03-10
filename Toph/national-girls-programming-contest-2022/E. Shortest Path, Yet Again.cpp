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
    cin >> n >> m >> k;
    string s[n+5];
    for(i=0; i<n; i++)
    {
        s[i] = "";
        for(j=0; j<m; j++)
        {
            s[i] += '#';
        }
    }
    s[0][0] = 's';
    k--;
    for(i=0; k && i<n; i++)
    {
        if(i&1)
        {
            if((i/2)&1)
            {
                if(k==1)
                {
                    s[i][0] = 'e';
                    k--;   break;
                }
                else
                {
                    s[i][0] = '.';  k--;
                }
            }
            else
            {
                if(k==1)
                {
                    s[i][m-1] = 'e';
                    k--;   break;
                }
                else
                {
                    s[i][m-1] = '.';  k--;
                }
            }
        }
        else
        {
            if((i/2)&1)
            {
                for(j=m-1; k && j>=0; j--)
                {
                    if(i==0 && j==0)  continue;
                    if(k==1)
                    {
                        s[i][j] = 'e';
                        k--; break;
                    }
                    else
                    {
                        s[i][j] = '.';
                        k--;
                    }
                }

            }
            else
            {
                for(j=0; k && j<m; j++)
                {
                    if(i==0 && j==0)  continue;
                    if(k==1)
                    {
                        s[i][j] = 'e';
                        k--; break;
                    }
                    else
                    {
                        s[i][j] = '.';
                        k--;
                    }
                }
            }
        }
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
            cout <<s[i][j];  cout <<endl;
    }
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

