class SnapshotArray {
public:
    vector< vector<pair<int, int> > > v;
    int snap_ct = 0;
    SnapshotArray(int length) {
        v.resize(length);
    }
    
    void set(int index, int val) {
        v[index].push_back({val, snap_ct});
    }
    
    int snap() {
        return snap_ct++;
    }
    
    int get(int index, int snap_id) {
        int lo=0, hi=v[index].size()-1, m;
        int ans = 0;
        while(lo<=hi)
        {
            m = (lo+hi)/2;   //cout <<m<<" "<<v[index][m].first<<" "<<v[index][m].second<<" "<<snap_id<<endl;
            if(v[index][m].second <= snap_id)
            {
                ans = v[index][m].first;
                lo = m+1;
            }
            else
                hi = m-1;
        }
        return ans;
    }
};

/**
 * Your SnapshotArray object will be instantiated and called as such:
 * SnapshotArray* obj = new SnapshotArray(length);
 * obj->set(index,val);
 * int param_2 = obj->snap();
 * int param_3 = obj->get(index,snap_id);
 */
