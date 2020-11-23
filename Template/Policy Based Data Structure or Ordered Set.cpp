#include<bits/stdc++.h>
#define limit 100008

///PBDS or Order set/multiset/map any operation O(logn)
///insert,erase,size,order_of_key
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
typedef tree<int, null_type, less<int>, rb_tree_tag,
             tree_order_statistics_node_update>
            new_data_type;

int  main()
{
    int t,time,i;
    new_data_type os;
    for(i=1; i<=10; i++)
    {
        scanf("%d",&time);
        os.insert(time);
    }
    return 0;
}

