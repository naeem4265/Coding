class UndergroundSystem {
public:
    string ID[1000005];
    long long time[1000005];
    map<pair<string, string> , long long> mp;
    long long k=1;
    double cnt[1000006], dis[1000006];
    
    UndergroundSystem() {
        k = 1;
        mp.clear();
        memset(dis, 0, sizeof(dis));
        memset(cnt, 0, sizeof(cnt));
    }
    
    void checkIn(long long id, string stationName, long long t) {
        ID[id] = stationName;
        time[id] = t;        
    }
    
    void checkOut(long long id, string stationName, long long t) {
        string u,v;
        u = ID[id];
        v = stationName;
        double d = t-time[id];
        
        if(mp[{u,v}]==0)  mp[{u, v}] = k++;
        cnt[mp[{u,v}]] += 1.0;
        dis[mp[{u,v}]] += d;
    }
    
    double getAverageTime(string startStation, string endStation) {
        string u, v;
        u = startStation;
        v = endStation;
        
        double ans = dis[mp[{u,v}]], ct = cnt[mp[{u,v}]];
        ans /= ct;
        return ans;
    }
};

/**
 * Your UndergroundSystem object will be instantiated and called as such:
 * UndergroundSystem* obj = new UndergroundSystem();
 * obj->checkIn(id,stationName,t);
 * obj->checkOut(id,stationName,t);
 * double param_3 = obj->getAverageTime(startStation,endStation);
 */
