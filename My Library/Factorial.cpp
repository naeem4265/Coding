///Factorial O(n)
ll fact(ll n)
{
    ll ans=1;
    for(ll i=2; i<=n; i++)
        ans = (ans*i)%Mod;
    return ans;
}
