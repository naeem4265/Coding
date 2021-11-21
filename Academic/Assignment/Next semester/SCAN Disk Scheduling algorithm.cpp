#include <bits/stdc++.h>
using namespace std;

int main()
{
    /// right to left then left to right
    int n,m,i,j,k;
    cout <<"Enter no of Request\n";
    cin >> n;

    int req[n+5];
    req[0] = 0;
    for(i=1; i<=n; i++)
    {
        cin >> req[i];
    }

    int head;
    cout <<"Enter head pointer\n";
    cin >> head;

    sort(req,req+n+1);
    for(i=1; i<=n; i++)
    {
        if(req[i]>head)
            break;
    }

    vector<int>out;
    int sum=0;
    for(j=i-1; j>=0; j--)
    {
        out.push_back(req[j]);
        sum += head-req[j];
        head = req[j];
    }
    for(j=i; j<=n; j++)
    {
        out.push_back(req[j]);
        sum += req[j]-head;
        head = req[j];
    }
    cout <<"\n\nSeek sequence\n";
    for(i=0; i<out.size(); i++)
        cout <<out[i]<<" ";
    cout <<"\n\nTotal number of seek operation "<<sum<<endl;
    return 0;
}

/*
8
98 183 37 122 14 124 65 67
53
*/
