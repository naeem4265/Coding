class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> v;
        int m = 1, n = nums.size(),i, idx;
        v.push_back(nums[0]);
        for( i=1; i<n; i++ ) {
            if( nums[i] > v[m-1] ) {
                v.push_back( nums[i] );
                m++;
            } else {
                idx = binarySearch( nums[i], v );
                v[idx] = nums[i];
            }
        }
        return m;
    }
    int binarySearch( int key, vector<int> &v) {
        int lo = 0, hi = v.size()-1, mi, idx ;
        while( lo <= hi ) {
            mi = (lo+hi)/2;
            if( v[mi] >= key ) {
                idx = mi;
                hi = mi-1;
            } else {
                lo = mi+1;
            }
        }
        return idx;
    }
};