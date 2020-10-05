#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 1000008
using namespace std;

void solve(int t)
{
    int i,j,n,m,k,a;
    cin >> n >> k;
    set<int> st;
    for(i=0; i<n; i++)
    {
        cin >> a;
        st.insert(a);
    }
    int sz=st.size();
    if(k==1)
    {
        if(sz>1)
            cout <<-1<<endl;
        else
            cout <<1<<endl;
        return ;
    }
    n = sz-k;
    k--;
    m = (n/k);
    if(m*k!=n)
        m++;
    cout <<m+1<<endl;
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

