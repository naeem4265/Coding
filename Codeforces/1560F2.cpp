#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007
#define limit 1000008
using namespace std;

void solve(ll t)
{

    ll i,j,n,m,k;
    string s;

    cin >> s;
    cin >> k;

    ll ct=0,cnt[12];
    memset(cnt,0,sizeof(cnt));
    n = s.size();

    for(i=0; i<n; i++)
    {
        cnt[s[i]-'0']++;
        if( cnt[s[i]-'0']>1 ) continue;
        ct++;

        if(ct>k)
        {
            bool ok=1;
            cnt[s[i]-'0']--;
            for(j=s[i]-'0'; j<10; j++)
            {
                if(cnt[j])
                {
                    s[i] = '0'+j;
                    ok = 0;
                    break;
                }
            }
            if(ok)
            {
                i--;
                while(ok && s[i]=='9' || cnt[s[i]-'0']>1)
                {
                    cnt[s[i]-'0']--;
                    for(j=s[i]-'0'+1; j<10; j++)
                    {
                        if(cnt[j])
                        {
                            s[i] = '0'+j;
                            ok = 0;
                            break;
                        }
                    }
                    if(ok==0) break;

                    if(cnt[s[i]-'0']==0)
                    {
                        i--;
                        if(cnt[s[i]-'0']==1)
                        {
                            cnt[0]++;
                        }
                        break;
                    }
                    i--;
                }
                if(ok)
                {
                    if(cnt[s[i]-'0']==1)
                    {
                        cnt[s[i]-'0'] = 0;
                    }
                    s[i] += 1;
                    if(cnt[s[i]-'0'])
                        cnt[0]++;
                    cnt[s[i]-'0']++;
                }
            }
            for(i=i+1; i<n; i++)
            {
                for(j=0; j<10; j++)
                {
                    if(cnt[j])
                    {
                        s[i] = '0'+j;
                        break;
                    }
                }
            }
            cout << s << endl;
            return ;
        }
    }
    cout << s << endl;
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    ll t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
