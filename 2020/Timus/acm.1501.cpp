#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 1008
using namespace std;
bool A[limit],B[limit];
int path[limit],n;
bool dp(int st,int key,int a,int b)
{
    bool t1,t2;   //cout <<st<<" "<<path[st-1]<<" "<<key<<" "<<a<<" "<<b<<endl;
    if(a==n && b==n) return 1;
    if(a==n)
    {
        path[st]=2;
        if(key==-1)
        {
            return dp(st+1,B[b]^1,a,b+1);
        }
        if(key==B[b])
        {
            return dp(st+1,-1,a,b+1);
        }
        else return 0;
    }
    if(b==n)
    {
        path[st]=1;
        if(key==-1)
        {
            return dp(st+1,A[a]^1,a+1,b);
        }
        if(key==A[a])
            return dp(st+1,-1,a+1,b);
        else return 0;
    }
    if(key==-1)
    {
        t1 = dp(st+1,A[a]^1,a+1,b);
        if(t1==1)
        {
            path[st] = 1;
            return t1;
        }
        t2 = dp(st+1,B[b]^1,a,b+1);
        path[st]=2;
        return t2;
    }
    if(key==A[a] && key==B[b])
    {
        t1 = dp(st+1,-1,a+1,b);
        if(t1==1)
        {
            path[st] = 1;
            return t1;
        }
        t2 = dp(st+1,-1,a,b+1);
        path[st]=2;
        return t2;
    }
    if(key==A[a])
    {
        path[st] = 1;
        return dp(st+1,-1,a+1,b);
    }
    path[st]=2;
    if(key==B[b])
        return dp(st+1,-1,a,b+1);
    return 0;
}
void solve(int t)
{
    int i,j,m;
    cin >> n;
    string s1,s2;
    cin >> s1 >> s2;
    for(i=0; i<n; i++)
        A[i] = s1[i]-'0';
    for(i=0; i<n; i++)
        B[i] = s2[i]-'0';
    if(dp(1,-1,0,0)==0)
    {
        cout <<"Impossible\n";
        return ;
    }
    for(i=1; i<=2*n; i++)
        cout <<path[i];
    cout <<endl;
    return ;
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

