#include<bits/stdc++.h>
#define limit 100008

///PBDS or Order set/multiset/map any operation O(logn)
///insert,erase,size,order_of_key,find_by_order
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
    // Deleting 2 from the set if it exists
    if (o_set.find(2) != o_set.end())
        o_set.erase(o_set.find(2));
    // Finding the second smallest element in the set
    cout << *(o_set.find_by_order(1))
         << endl;
    // elements strictly less than k=4
    cout << o_set.order_of_key(4)
         << endl;
    return 0;
}

