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
    double r,R,H,P;
    cin >>  r >> R >> H >> P;
    double d = R-r,dhal, con1, con2, ja, vit_lom, half_dhal, down,ans=0.00000000000001,X;
    if(P>R)
    {
        vit_lom = sqrt(P*P-R*R);
        X = P-vit_lom;
        if((H-X)>ans)
        {
            cout <<fixed<<setprecision(8) <<H-X<<endl;
            return;
        }
    }
    dhal = sqrt(H*H+d*d);   //cout <<d<<" "<<dhal<<endl;
    con1 = asin(d/dhal);
    con2 = pi/2.00-con1;          //cout <<con1 <<" "<<con2<<endl;
    ja = P*sin(con2);
    vit_lom = sqrt(P*P-ja*ja);         //cout <<ja<<" "<<vit_lom<<endl;
    half_dhal = (ja-r)/sin(con1);
    down = sqrt(half_dhal*half_dhal-(ja-r)*(ja-r));
    ans = down-(P-vit_lom);
    ans = max(ans, 0.00000000000001);

    cout <<fixed<<setprecision(8) <<ans<<endl;


    return ;
}


int  main()
{
    Fast
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

