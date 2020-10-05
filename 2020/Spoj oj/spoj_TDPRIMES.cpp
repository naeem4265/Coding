#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 982500001
using namespace std;
int Bit[limit/32+5];
vector<int>prime;
void bitseive()
{
    int i,j,x,y;
    for(i=3; i*i<=limit; i+=2)
    {
        x = i/62;
        y = (i/2)%31;
        y = 1<<y;
        if((Bit[x] & y)==0)
            for(j=i*i; j<limit; j+=2*i)
            {
                x = j/62;
                y = (j/2)%31;
                y = 1<<y;    //cout <<x<<" "<<y<<endl;
                Bit[x] = Bit[x] | y;
            }
    }

    prime.pb(2);
    int k=1;
    for(i=3; i<limit; i+=2)
    {
        x = i/62;
        y = (i/2)%31;
        y = 1<<y;  //cout <<x<<" "<<y<<" "<<Bit[x]<<endl;
        if((Bit[x]&y) ==0)
        {           // cout <<i<<endl;
            k++;
            if(k%100==1)
                prime.pb(i);
                //cout <<i<<endl;
        }
    }
    for(i=0; i<k; i++)   cout <<prime[i]<<endl;
    //cout <<k<<endl;
}
int  main()
{
    Fast
//    Freed
//    Fout
    int t,tt=1;
  //  cin >> tt;
    for(t=1; t<=tt; t++)
        bitseive();
    cin >> tt;
    while(tt--)
    {
        cin >> t;
        cout <<prime[t-1]<<endl;
    }
  return 0;
}


