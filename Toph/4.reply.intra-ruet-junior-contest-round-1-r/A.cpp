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
    int a,k,i,j,n,mx=0,ct1=0,ct2=0,sum=0;
    cin >> n;
    string s1,s2;
    cin >> s1 >> s2;
    for(i=0; i<n; i++)
    {
        if(s1[i]=='A'||s1[i]=='E'||s1[i]=='I'||s1[i]=='O'||s1[i]=='U'||s1[i]=='a'||s1[i]=='e'||s1[i]=='i'||s1[i]=='o'||s1[i]=='u')
        ct1++;
    }
    for(i=0; i<n; i++)
    {
        if(s2[i]=='A'||s2[i]=='E'||s2[i]=='I'||s2[i]=='O'||s2[i]=='U'||s2[i]=='a'||s2[i]=='e'||s2[i]=='i'||s2[i]=='o'||s2[i]=='u')
        ct2++;
    }  //cout <<ct1<<" "<<ct2<<endl;
    if(ct2>ct1)
        cout <<"Second String\n";
    else if(ct1>ct2)
        cout <<"First String\n";
    else
        cout<<"Equal\n";
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
///Accepted

