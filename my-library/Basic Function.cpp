///Return a vector list of all divisor of x. O(sqrt(x))
vector<ll> get_divisor(ll x)
{
    vector<ll> d;
    for(ll i=1; i*i<=x; i++)
    {
        if(x%i==0)
        {
            d.pb(i);
            if((x/i)!=i)
                d.pb(x/i);
        }
    }
    return d;
}
///Binary Search. O(logn)
ll bs(ll A[],ll n,ll key)
{
    ll lo = 1, hi = n, mid;
    while( lo<=hi )
    {
        mid = (lo+hi)/2;
        if( A[mid] < key )
        {
            l = mid+1;
        }
        else if( A[mid] > key )
        {
            r = mid-1;
        }
        else  return mid;
    }
    return -1;
}
