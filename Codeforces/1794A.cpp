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
    m = n-1;
    string s1, s2,s,s3,s4,s5,s6;
    for(i=0; i<(2*n-2); i++)
    {
        cin >> s;
        if(s.size()==m)
        {
            s2 = s1;
            s1 = s;
        }
    }
    s3 = s1+s2[n-2];
    s5 = s3;
    s4 = s1[0]+s2;
    s6 = s4;         //cout <<s3<<" "<<s4<<endl;
    reverse(s4.begin(), s4.end());
    reverse(s3.begin(), s3.end());

    if(s3==s5 && s4==s6 && s3==s4)
    {
        cout <<"YES\n";
        return;
    }
    swap(s1, s2);
    s3 = s1+s2[n-2];
    s5 = s3;
    s4 = s1[0]+s2;
    s6 = s4;        //cout <<s3<<" "<<s4<<endl;
    reverse(s4.begin(), s4.end());
    reverse(s3.begin(), s3.end());

    if(s3==s5 && s4==s6 && s3==s4)
    {
        cout <<"YES\n";
        return;
    }
    cout <<"NO\n";
    return ;
}


int  main()
{
   // Fast
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

