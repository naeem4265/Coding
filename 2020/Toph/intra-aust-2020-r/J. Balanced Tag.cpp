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


int  main()
{
//    Fast
//    Freed
//    Fout
    string s;
    while(getline(cin, s))
    {
        int n=s.size(),i,ct=0,ok=1;
        for(i=0; i<n; i++)
        {
            if(s[i]=='<') ct++;
            else if(s[i]=='>')
            {
                ct--;
                if(ct<0)
                {
                    ok = 0;
                    break;
                }
            }
            else if(s[i]=='/')
            {
                if(i+1==n || s[i+1]!='>')
                {
                    ok=0;
                    break;
                }
                ct--;
                i++;
                if(ct<0)
                {
                    ok = 0;
                    break;
                }
            }
        }    // cout <<ok<<" "<<ct<<endl;
        if(ok && ct==0)
        {
            cout <<"Balanced Tag\n";
        }
        else
        {
            cout <<"Not Balanced\n";
        }
    }
    return 0;
}

