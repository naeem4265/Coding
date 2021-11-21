#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,i,j,k;
    cout <<"Enter no of process\n";
    cin >> n;
    int arri[n+5],burst[n+5];

    for(i=1; i<=n; i++)
    {
        cout <<"Enter "<<i<<"th process arrival time\n";
        cin >> arri[i];
    }
    int sum = 0;
    for(i=1; i<=n; i++)
    {
        cout <<"Enter "<<i<<"th process Burst time\n";
        cin >> burst[i];
        sum += burst[i];
    }
    int quan;
    cout <<"Enter quantum\n";
    cin >> quan;
    queue<int>q;
    j = 2;
    q.push(1);
    int t = arri[1],twt=0;
    while(!q.empty() || j<=n)
    {
        if(q.empty())
        {
            t = arri[j];
            q.push(j);
            j++;
        }
        int x = q.front();
        q.pop();
        int temp = min(quan,burst[x]);
        burst[x] -= temp;
        t += temp;
        while(arri[j]<=t && j<=n)
        {
            q.push(j);
            j++;
        }
        if(burst[x])
            q.push(x);

        twt += t-arri[x]-temp;
        arri[x] = t;              //cout <<x<<" "<<t<<" "<<twt<<endl;
    }

    cout <<"\n\nTotal waiting time "<< twt <<endl;
    cout <<"Average waiting time "<< (double)twt/n*1.00 <<endl;
    cout <<"Total Turn arround time "<< twt+sum <<endl;

    return 0;
}

/*
6
0 1 2 3 4 6

4 5 2 1 6 3

2
*/
