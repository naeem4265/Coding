#include<bits/stdc++.h>
#define ll long long int
#define Mod 1000000007
#define Mod2 998244353
#define limit 1000008
using namespace std;



void cumforwardhashing(string s,ll base,ll mod,ll A[])
{
    ll i,n=s.size();
    A[0] = s[0]-'a'+1;
    for(i=1; i<n; i++)
    {
        A[i] = ((A[i-1]*base)+s[i]-'a'+1)%mod;
    }
}

void cumbackwordhashing(string s,ll base,ll mod,ll A[])
{
    ll i,n=s.size();
    A[n-1] = s[n-1]-'a'+1;
    for(i=n-2; i>=0; i--)
    {
        A[i] = ((A[i+1]*base)+s[i]-'a'+1)%mod;
    }
}



int  main()
{
    int i;
    string s;
    cin >> s;
    ll A[s.size()+5],B[s.size()+5];
    cumforwardhashing(s,29,Mod,A);
    cumbackwordhashing(s,29,Mod,B);

    for(i=0; i<s.size(); i++)
        cout <<A[i]<<" ";
    cout <<endl;
    for(i=0; i<s.size(); i++)
        cout <<B[i]<<" ";
    cout <<endl;

    return 0;
}

