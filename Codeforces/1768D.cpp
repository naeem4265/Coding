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
    cin >> n;
    ll A[n+5], idx[n+5];
    for(i=1; i<=n; i++)
    {
        cin >> A[i];
        idx[A[i]] = i;
    }
    m = n+4;
    for(i=1; i<n; i++)
    {
        if(A[i]==(i+1))   m = i;
        if(A[i]==(i+1) && A[i+1]==i)
        {
            m = i;
            break;
        }
    }
    ll ans=0,temp;
    if(m>n)
    {
        m = 1;
        ans++;
        temp = idx[2];
        swap(A[1], A[temp]);
        idx[A[1]] = 1;
        idx[A[temp]] = temp;
    }
    if(A[m+1]!=m)
    {
            ans++;
            temp = idx[m];
            swap(A[m+1], A[temp]);
            idx[A[m+1]] = m+1;
            idx[A[temp]] = temp;
    }
    for(i=1; i<=n; i++)
    {
        if(i==m || A[i]==i || i-1==m)  continue;

        ans++;
        temp = idx[i];
        swap(A[i], A[temp]);
        idx[A[i]] = i;
        idx[A[temp]] = temp;
    }
    cout << ans <<endl;

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

