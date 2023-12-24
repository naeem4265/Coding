class Solution {
public:
    vector<vector<long long>> splitPainting(vector<vector<int>>& segments) {
        sort(segments.begin(), segments.end());
        vector<vector<long long> > ans;
        priority_queue<pair<long long, long long> > pq;

        long long left = 0;
        long long sum = 0;

        for( int i=0; i<segments.size(); i++ ) {
            while( !pq.empty() && -pq.top().first <= segments[i][0] ) {
                if( left != -pq.top().first )
                    ans.push_back({left, -pq.top().first, sum});
                sum -= pq.top().second;
                left = -pq.top().first;
                pq.pop();
            }

            if( pq.empty() )    left = segments[i][0];
            
            if( left != segments[i][0] ) {
                ans.push_back({left, segments[i][0], sum});
                left = segments[i][0];
            }
            sum += segments[i][2];
            pq.push({-segments[i][1], segments[i][2]});
        }
        while( !pq.empty() ) {
            if( left != -pq.top().first )
                ans.push_back({left, -pq.top().first, sum});
            sum -= pq.top().second;
            left = -pq.top().first;
            pq.pop();
        }
        return ans;
    }
};