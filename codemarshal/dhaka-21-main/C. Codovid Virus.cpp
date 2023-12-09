#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_bacct2
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007
#define limit 10008
using namespace std;
ll n, one, fone;
ll forwrd[limit], revrse[limit], flip_forwrd[limit], flip_revrse[limit];

ll cal(ll pos, ll l)
{
    ll ans,ct;
    ct = l/n;
    ans = ((ct+1)/2)*one+fone*(ct/2);
    l -= ct*n;   //cout <<ans<<" here "<<l<<" "<<pos<<" "<<one<<" "<<fone<<endl;
    if(pos&1)
    {
        if(ct&1)
        {
            ans += flip_revrse[l];
        }
        else
        {
            ans += forwrd[l];
        }
    }
    else
    {
        if(ct&1)
        {
            ans += flip_forwrd[l];
        }
        else
        {
            ans += revrse[l];
        }
    }
    return ans;
}

void Please_AC(ll tt)
{
    ll i,j,q;
    char ch[limit];
    scanf("%s", ch);

    n = strlen(ch);
    string s="";
    for(i=0; i<n; i++)
        s += ch[i];

    one = 0;
    fone = 0;
    for(i=0; i<n; i++)
    {
        forwrd[i] = (s[i]=='1'? 1: 0);
        if(forwrd[i])   one++;
        else   fone++;

        flip_forwrd[i] = (s[i]=='1'? 0: 1);
        if(i)
        {
            forwrd[i] += forwrd[i-1];
            flip_forwrd[i] += flip_forwrd[i-1];
        }
    }
    reverse(s.begin(), s.end());
    for(i=0; i<n; i++)
    {
        revrse[i] = (s[i]=='1'? 1: 0);
        flip_revrse[i] = (s[i]=='1'? 0: 1);
        if(i)
        {
            revrse[i] += revrse[i-1];
            flip_revrse[i] += flip_revrse[i-1];
        }
    }

    //cin >> q;
    scanf("%lld", &q);
    while(q--)
    {
        ll l,r;
        //cin >> l >> r;
        scanf("%lld %lld", &l, &r);
        l--; l--;  r--;
        ll ct1 = 1, ct2=1;
        i = 0;
        while(++i)
        {
            if(l>=ct1*n)  l-= ct1*n;
            else  break;
            ct1 *= 3LL;
        }
        ll ans = (ct1+1)/2*one+(ct1/2)*fone - cal(i, l);

        j = 0;
        while(++j)
        {
            if(r>=ct2*n)  r-= ct2*n;
            else  break;
            ct2 *= 3LL;
        }

        ans += cal(j, r);
        if(i==j)
            ans -= (ct2+1)/2*one+(ct2/2)*fone;
        for(i+=1; i<j; i++)
        {
            ct1 *= 3LL;
            ans += (ct1+1)/2*one+(ct1/2)*fone;
        }
        //cout << ans <<endl;
        printf("%lld\n", ans);
    }


    return ;
}


int  main()
{
    Fast
//    Freed
//    Fout
    ll t,tt=1;
    //cin >> tt;
    scanf("%lld", &tt);
    for(t=1; t<=tt; t++)
    {
        //cout <<"Case "<<t<<":\n";
        printf("Case %lld:\n", t);
        Please_AC(t);
    }
    return 0;
}
