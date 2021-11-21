#include<bits/stdc++.h>
#define limit 308
using namespace std;

void solve(int t)
{
    int i,j,k,n;
    cin >> n ;
    string s[n+5];

    for(i=0; i<n; i++)
        cin >> s[i];
    int ct[4];
    memset(ct,0,sizeof(ct));
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(s[i][j]=='X')
            {
                ct[(i+j)%3]++;
            }
        }
    }
    if(ct[0]<=ct[1] && ct[0]<=ct[2])
    {
        ct[1]=ct[2]=0;
        ct[0]=1;
    }
    else if(ct[1]<=ct[0] && ct[1]<=ct[2])
    {
        ct[0]=ct[2]=0;
        ct[1]=1;
    }
    else
    {
        ct[0]=ct[1]=0;
        ct[2]=1;
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(s[i][j]=='X' && ct[(i+j)%3])
            {
                s[i][j]='O';
            }
        }
    }
    for(i=0; i<n; i++)
        cout <<s[i]<<endl;
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


