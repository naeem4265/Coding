#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define Mod2 998244353
#define limit 1000008
using namespace std;

ll bigmod(ll b,ll p,ll mod)
{
    ll ans=1;
    while(p)
    {
        if(p&1)
            ans = (ans*b)%mod;
        b = (b*b)%mod;
        p = p/2;
    }
    return ans%mod;
}

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

void solve(int t)
{
    ll i,j,n,l,r,L,R;
    string s,s2;
    cin >> s ;
    s2=s;
    n = s.size();
    for(l=0,r=n-1; l<r; l++,r--)
    {
        if(s[l]!=s[r])
            break;
    }
    if(l>=r)
    {
        cout<<s<<endl;
        return ;
    }
    ll A[n+10],B[n+10],C[n+10],D[n+10];
    for(i=n; i<n+10; i++)
        A[i] = B[i] = C[i] = D[i] = 0;

    cumforwardhashing(s,29,Mod,A);
    cumbackwordhashing(s,29,Mod,B);
    cumforwardhashing(s,31,Mod2,C);
    cumbackwordhashing(s,31,Mod2,D);

    r--;
    ll mx=0,x=0,y=0,len;
    if(l)
    {
        x = A[l-1];
        y = C[l-1];
    }
    for(i=l+(r-l)/2; i>=l; i--)
    {
        len = i-l+1;
        j = i+1;
        R = j + len;
        ll lft = ((A[i]-(x*bigmod(29,len,Mod))%Mod)+Mod)%Mod;
        ll rht = ((B[j]-(B[R]*bigmod(29,len,Mod))%Mod)+Mod)%Mod;
        ll lft2 = ((C[i]-(y*bigmod(31,len,Mod2))%Mod2)+Mod2)%Mod2;
        ll rht2 = ((D[j]-(D[R]*bigmod(31,len,Mod2))%Mod2)+Mod2)%Mod2;
        if(lft==rht && lft2==rht2)
        {
            mx = R-l;   ;
            break;
        }
        j--;
        R--;
        rht = ((B[j]-(B[R]*bigmod(29,len,Mod))%Mod)+Mod)%Mod;
        rht2 = ((D[j]-(D[R]*bigmod(31,len,Mod2))%Mod2)+Mod2)%Mod2;
        if(lft==rht && lft2==rht2)
        {
            mx = R-l;   ;
            break;
        }
    }
    reverse(s.begin(),s.end());
    for(l=0,r=n-1; l<r; l++,r--)
    {
        if(s[l]!=s[r])
            break;
    }
    for(i=n; i<n+10; i++)
        A[i] = B[i] = C[i] = D[i] = 0;

    cumforwardhashing(s,29,Mod,A);
    cumbackwordhashing(s,29,Mod,B);
    cumforwardhashing(s,31,Mod2,C);
    cumbackwordhashing(s,31,Mod2,D);

    r--;
    ll mx2=0; x=0,y=0,len;
    if(l)
    {
        x = A[l-1];
        y = C[l-1];
    }
    for(i=l+(r-l)/2; i>=l; i--)
    {
        len = i-l+1;
        j = i+1;
        R = j + len;
        ll lft = ((A[i]-(x*bigmod(29,len,Mod))%Mod)+Mod)%Mod;
        ll rht = ((B[j]-(B[R]*bigmod(29,len,Mod))%Mod)+Mod)%Mod;
        ll lft2 = ((C[i]-(y*bigmod(31,len,Mod2))%Mod2)+Mod2)%Mod2;
        ll rht2 = ((D[j]-(D[R]*bigmod(31,len,Mod2))%Mod2)+Mod2)%Mod2;
        if(lft==rht && lft2==rht2)
        {
            mx2 = R-l;   ;
            break;
        }
        j--;
        R--;
        rht = ((B[j]-(B[R]*bigmod(29,len,Mod))%Mod)+Mod)%Mod;
        rht2 = ((D[j]-(D[R]*bigmod(31,len,Mod2))%Mod2)+Mod2)%Mod2;
        if(lft==rht && lft2==rht2)
        {
            mx2 = R-l;   ;
            break;
        }
        //cout <<l<<" "<<i<<" "<<j<<" "<<R<<" "<<lft<<' '<<rht<<" "<<rht2<<endl;
    }
    reverse(s.begin(),s.end());
    for(i=0; i<l; i++)
        cout <<s[i];
    if(mx<mx2)
    {
        i = n-l-mx2;   //cout <<i<<" here "<<mx<<" "<<mx2<<endl;
    }
    for(j=0; j<max(mx,mx2); j++,i++)
        cout <<s[i];
    for(i=l-1; i>=0; i--)
        cout <<s[i];
    cout <<endl;
    return ;
}
int  main()
{
    Fast
//    Freed
//    Fout
    int t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}

