#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 1000000011
using namespace std;

void cum_for_hash(string s,ll b,ll m,ll A[])
{
    A[0]=s[0]-'0'+1;
    for(ll i=1; i<s.size(); i++)
        A[i] = (A[i-1]*b+s[i]-'0'+1)%m;
}
ll Bigmod(ll b,ll p,ll m)
{
    ll ret=1;
    while(p)
    {
        if(p&1) ret = (b*ret)%m;
        b = (b*b)%m;
        p = p/2;
    }
    return ret;
}

void solve(int z)
{
    ll i,j,n,m=0,k,x,y;
    string s,t;
    cin >> s >> t;
    ll A[t.size()+5],B[t.size()+5];
    cum_for_hash(t,3,Mod,A);
    cum_for_hash(t,5,limit,B);
    ll one=0,one2=0,zero=0,zero2=0;
    for(i=s.size()-1; i>=0; i--)
        if(s[i]=='1') one++;
        else   zero++;
    n=t.size()-1;
    for(i=n-1,j=0; i>=0; i--,j++)
    {
        x = (A[n]+Mod-(A[j]*Bigmod(3,n-j,Mod))%Mod)%Mod;
        y = (B[n]+limit-(B[j]*Bigmod(5,n-j,limit))%limit)%limit;
       // cout <<i<<" "<<j<<" "<<A[i]<<" "<<x<<" "<<B[i]<<" "<<y<<endl;
        if(A[i]== x&& B[i]==y)
            break;
    }
    for(j=0; j<=n; j++)
    {
        if(t[j]=='1') one--;
        else  zero--;
        if(zero<0 || one<0)
        {
            cout <<s<<endl;
            return ;
        }
    }
    cout <<t;
    i++;
    j = i;
    while(1)
    {
        if(t[j]=='1') one--;
        else  zero--;
        if(zero<0 || one<0)
            break;
        cout <<t[j];
        j++;
        if(j>n) j=i;
    }
    for(i=0; i<one; i++)
        cout <<1;
    for(i=0; i<zero; i++)
        cout <<0;
    cout <<endl;
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    int t,tt=1;
    //cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}

