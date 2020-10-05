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
    ll a,k,i,j,n,mn=0,ct=1,ct2=1,sum=0,temp=0;
    cin >> n ;
    ll A[n+5];
    A[0]=0;
    for(i=1; i<=n; i++)
    {
        cin >> A[i];
        A[i] += A[i-1];
    }
    if(A[n]%3 || n<3)
    {
        cout <<0<<endl;
        return ;
    }
    sum = A[n]/3;
    for(i=1; i<n; i++)
        if(A[i]==sum)
        {
            temp=i;
            break;
        }
    if(i==n)
    {
        cout <<0<<endl;
        return ;
    }
    for(i=i+1; i<n; i++)
    {
        if(A[i]==sum)
        {
            ct++;
            temp=i;
        }
    }
    if(temp==n-1)
    {
        cout <<(ct*(ct-1))/2<<endl;
        return;
    }
    for(i=temp+1; i<n; i++)
        if(A[i]==sum*2)
            break;
    if(i==n)
    {
        cout <<0<<endl;
        return ;
    }
    for(i=i+1; i<n; i++)
    {
        if(A[i]==2*sum)
        {
            ct2++;
            temp = i;
        }
    } //cout <<ct<<" "<<ct2<<endl;
    cout <<ct*ct2<<endl;
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    int t,tt=1;
 //   cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
  return 0;
}


