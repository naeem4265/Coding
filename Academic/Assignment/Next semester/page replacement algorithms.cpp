#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,i,j,k;
    cout <<"Enter no of page reference string\n";
    cin >> n;
    cout <<"Enger no of frames\n";
    cin >> m;

    int step[n+5];
    for(i=1; i<=n; i++)
    {
        cout <<"Enter "<<i<<"th sequence\n";
        cin >> step[i];
    }

    int stock[m+5],frequ[m+5];
    for(i=1; i<=m; i++)
    {
        stock[i] = -1;
        frequ[i] = 0;
    }

    int fault=0,ct=0;
    for(i=1; i<=n; i++)
    {
        int mx = -1,ind;
        for(j=1; j<=m; j++)
        {      //cout <<i<<" "<<j<<" "<<stock[j]<<" "<<step[i]<<endl;
            if(stock[j]==step[i])
            {
                frequ[j]++;
                break;
            }
            if(frequ[j]>mx)
            {
                mx = frequ[j];
                ind = j;
            }
        }
        if(j<=m) continue;
        if(ct<m) ind = ct+1;
        ct++;
        frequ[ind] = 0;
        stock[ind] = step[i];
        fault++;
        for(j=1; j<=m; j++)
            frequ[j]++;
    }
    cout <<"\n\nTotal Page faults "<<fault<<endl<<endl;
    return 0;
}

/*
20
3
7 0 1 2 0 3 0 4 2 3 0 3 2 1 2 0 1 7 0 1
*/
