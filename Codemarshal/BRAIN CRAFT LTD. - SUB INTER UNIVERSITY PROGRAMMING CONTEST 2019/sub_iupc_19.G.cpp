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
    int i,j,k,F,S;
    cin >> k;
    string s1,s2;
    cin >> s1 >> s2;
    int sz1=s1.size(),sz2=s2.size();
    for(i=0; i<sz1; i++)
    {
        if(s1[i]=='.' )
        {
            F=i;
            break;
        }
    }
    if(i==sz1)
        F = i;
    for(i=0; i<sz2; i++)
    {
        if(s2[i]=='.' )
        {
            S=i;
            break;
        }
    }
    if(i==sz2)
        S = i;
    if(F!=S)
    {
        cout <<"Case "<<t<<": rejected\n";
        return ;
    }

    int sz = max(sz1,sz2);
    for(i=0,j=1; i<sz; i++,j++)
    {        // cout <<i<<" "<<s1[i]<<" "<<s2[i]<<" "<<sz1<<" "<<sz2<<endl;
        if(i>=sz1)
        {
            if(s2[i]!='.' && s2[i]!='0')
            {
                cout <<"Case "<<t<<": rejected\n";
                return ;
            }
            if(s2[i]=='.') j--;
        }
        else if(i>=sz2)
        {
            if(s1[i]!='.' && s1[i]!='0')
            {
                cout <<"Case "<<t<<": rejected\n";
                return ;
            }
            if(s1[i]=='.') j--;
        }
        else if(s1[i]!=s2[i])
        {
            cout <<"Case "<<t<<": rejected\n";
            return ;
        }
        else if(s1[i]=='.')
        {
            j--;
            continue;
        }
        if(j>=k)
        {
            cout <<"Case "<<t<<": accepted\n";
            return ;
        }
    }
    cout <<"Case "<<t<<": accepted\n";
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


