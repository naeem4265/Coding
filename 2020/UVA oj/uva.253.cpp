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
    string s,c;
    while(cin >> s)
    {
        c = s;
        int i,j,k,ok=0;
        char temp;
        for(k=0; k<100; k++)
        {
            for(i=0; i<6; i++)
            {
                temp=s[1];
                s[1] = s[2];
                s[2] = s[4];
                s[4] = s[3];
                s[3] = temp;
                for(j=6; j<12; j++)
                {
                    if(s[j-6]!=s[j])
                        break;
                }
                if(j==12)
                {
                    cout <<"TRUE\n";
                    ok=1;
                    break;
                }
            }
            if(ok) break;
            s = c;
            for(i=0; i<6; i++)
            {
                temp=s[1];
                s[1] = s[5];
                s[5] = s[4];
                s[4] = s[0];
                s[0] = temp;
                for(j=6; j<12; j++)
                {
                    if(s[j-6]!=s[j])
                        break;
                }
                if(j==12)
                {
                    cout <<"TRUE\n";
                    ok=1;
                    break;
                }
            }
            if(ok) break;;
                s = c;
                temp=s[1];
                s[1] = s[2];
                s[2] = s[4];
                s[4] = s[3];
                s[3] = temp;
                temp=s[1];
                s[1] = s[5];
                s[5] = s[4];
                s[4] = s[0];
                s[0] = temp;
                c = s;
        }
        if(ok==0)
            cout <<"FALSE\n";
    }
    return 0;
}

