#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 1000008
using namespace std;
ll pos;
ll H[limit];

void heapify(ll ind)
{
    if(ind<2) return ;
                           //cout <<pos<<" naeem "<<H[pos/2]<<" "<<H[pos]<<endl;
    if(H[ind/2]<H[ind])
    {
        swap(H[ind/2],H[ind]);
        heapify(ind/2);
    }
}

void heapsort(ll ind)
{
    if(2*ind>pos) return ;
    if(2*ind==pos)
    {
        if(H[ind]<H[2*ind])
        {
            swap(H[ind],H[2*ind]);
            heapsort(2*ind);
        }
    }
    else
    {
        if(H[2*ind]>=H[2*ind+1])
        {
            if(H[ind]<H[2*ind])
            {
                swap(H[ind],H[2*ind]);
                heapsort(2*ind);
            }
        }
        else
        {
            if(H[ind]<H[2*ind+1])
            {
                swap(H[ind],H[2*ind+1]);
                heapsort(2*ind+1);
            }
        }
    }
}

void heap(ll key)
{
    H[pos] = key;
    heapify(pos);
    pos++;
}

void solve(int t)
{
    ll i,j,n,m,k;
    string s;
    cin >> n ;
    ll A[n+5];

    for(i=0; i<n; i++)
        cin >> A[i];
    pos = 1;
    for(i=0; i<n; i++)
    {
        heap(A[i]);
    }

    // heap
    for(i=1; i<=n; i++)
    {
        cout <<H[i]<<endl;
    }

    // heap sort
    for(i=1; i<=n; i++)
    {
        A[i] = H[1];
        H[1] = H[pos];
        pos--;
        heapsort(1);
    }

    for(i=1; i<=n; i++)
    {
        cout <<A[i]<<" ";
    }
    cout <<endl;
    return ;
}
int  main()
{
//    Fast
    Freed
//    Fout
    ll t,tt=1;
    //cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
