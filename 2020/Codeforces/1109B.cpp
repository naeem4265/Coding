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

bool Palindrome(string s)
{
    int n=s.size();
    for(int i=0,j=n-1; i<=j; i++,j--)
    {
        if(s[i]!=s[j])
            return 0;
    }
    return 1;
}
void solve(int t)
{
    int i,j,n,m,k;
    string s;
    cin >> s ;
    n = s.size();
    set <char> st;
    for(i=0; i<n/2; i++)
        st.insert(s[i]);
    if(st.size()==1 || n<=3)
    {
        cout <<"Impossible\n";
        return ;
    }
    string s2=s;
    for(i=0; i<n; i++)
    {
        s2 = s2.back()+s2;
        s2.pop_back();   //cout <<s2<<endl;
        if(s2!=s  && Palindrome(s2))
        {
            cout <<1<<endl;
            return ;
        }
    }
    cout <<2<<endl;
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

