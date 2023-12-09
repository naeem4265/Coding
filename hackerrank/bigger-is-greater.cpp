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
    string s;
    cin >> s;
    n = s.size();
    ll cnt[30];
    memset(cnt, 0, sizeof(cnt));

    for(i=n-1; i>=0; i--)
    {
        cnt[s[i]-'a']++;
        for(j=s[i]-'a'+1; j<27; j++)
        {     //cout <<i<<" "<<j<<" "<<cnt[j]<<endl;
            if(cnt[j])
            {      // cout <<i<<" "<<j<<endl;  return ;
                cnt[j]--;
                s[i] = j+'a';
                for(k=0; k<=i; k++)
                {
                    cout <<s[k];   
                }
                for(k=0; k<27; k++)
                {
                    while(cnt[k])
                    {
                        cnt[k]--;
                        cout <<(char)(k+'a');
                    }
                }
                cout <<endl;
                return ;
            }
        }
    }
    cout <<"no answer" <<endl;
     

    return ;
}


int  main()
{
    Fast
//    Freed
//    Fout
    ll t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
    {
        //printf("Case :%lld ",t);
        Please_AC(t);
    }
    return 0;
}
