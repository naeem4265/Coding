#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 10008
using namespace std;
string change(string s)
{
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]>='A' && s[i]<='Z')
            s[i] += 32;
    }
    return s;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    int i=0,j=0;
    map<string ,int>ct,cnt;
    string orginal[limit];
    string s;
    while(1)
    {
        cin >> s;
        if(s=="#") break;
        ct[s]++;
        orginal[j++]=s;
        s = change(s);
        sort(s.begin(),s.end());
        cnt[s]++;
    }
    sort(orginal,orginal+j);
    for(i=0; i<j; i++)
    {
        int x,y;
        s = orginal[i];   //cout <<ct[s]<<" "<<s<<" ";
        x = ct[s];
        s = change(s);
        sort(s.begin(),s.end());
        y = cnt[s];
        if(x==y)
            cout <<orginal[i]<<endl;
    }
    return 0;
}
//Accepted
