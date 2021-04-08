#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,i,j,k;
    cout <<"Enter no of process\n";
    cin >> n;
    cout <<"Enter no of resource\n";
    cin >> m;
    int alloc[n+5][m+5];

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
        {
            cout <<"Enter "<<i<<"th process "<<j<<"th resource allocation\n";
            cin >> alloc[i][j];
        }
    }
    int mx[n+5][m+5];

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
        {
            cout <<"Enter "<<i<<"th process "<<j<<"th resource max\n";
            cin >> mx[i][j];
        }
    }
    int avail[m+5];

    for(i=1; i<=m; i++)
    {
        cout <<"Enter "<<i<<"th resource available\n";
        cin >> avail[i];
    }
    bool done[n+5];

    for(i=1; i<=n; i++)
    {
        done[i] = 0;
    }
    int need[n+5][m+5];

    for (i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
        {
            need[i][j] = mx[i][j] - alloc[i][j];
        }
    }
    vector<int> ans;

    for(k=1; k<=n; k++)
    {
        for(i=1; i<=n; i++)
        {
            if(done[i]) continue;
            for(j=1; j<=m; j++)
            {
                if(need[i][j]>avail[j])
                    break;
            }
            if(j>m)
            {
                done[i] = 1;
                ans.push_back(i);  //cout <<"paici "<<i<<endl;
                for(j=1; j<=m; j++)
                {
                    avail[j] += alloc[i][j];
                }
            }
        }
    }
    if(ans.size()==n)
    {
        cout <<"\n\nFollowing sequence is safe\n\n";
        for(i=0; i<n; i++)
        {
            cout <<"P"<< ans[i] <<" ";
        }
    }
    else
        cout <<"There is no safe sequence\n";

    return 0;
}

/*
5
3
0 1 0
2 0 0
3 0 2
2 1 1
0 0 2

7 5 3
3 2 2
9 0 2
2 2 2
4 3 3

3 3 2
*/
