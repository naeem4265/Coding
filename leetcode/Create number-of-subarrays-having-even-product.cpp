class Solution {
public:
    long long maxScore(vector<int>& nums1, vector<int>& nums2, int k) {
        long long i,n = nums1.size();
        vector<pair<long long, long long> > v;
        priority_queue<long long> pq;
        for(i=0; i<n; i++)
        {
            v.push_back({(long long)nums2[i], (long long)nums1[i]});
        }
        sort(v.begin(), v.end());
        reverse(v.begin(), v.end());
        long long sum = 0;
        for(i=0; i<k; i++)
        {
            sum += v[i].second;
            pq.push(-v[i].second);
        }
        long long ans = sum*v[k-1].first;   //cout <<sum<<" "<<ans<<endl;
        for(i=k; i<n; i++)
        {
            pq.push(-v[i].second);
            sum += v[i].second;
            sum += pq.top();
            ans = max(ans, sum*v[i].first);   //cout <<pq.top()<<endl;
            pq.pop();
        }
        return ans;
    }
};
