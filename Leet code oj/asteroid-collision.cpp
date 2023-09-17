class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> ans;
        vector<pair<int, int> > temp;
        for(int i=0; i<asteroids.size(); i++)
        {
            if(asteroids[i]>=0)
            {
                temp.push_back({asteroids[i], i});
                continue;
            }
            while(!temp.empty() && temp[temp.size()-1].first<-asteroids[i])   temp.pop_back();
            if(!temp.empty() && temp[temp.size()-1].first==-asteroids[i])
            {
                temp.pop_back();
            }
            else if(temp.empty())
            {
                ans.push_back(i);
            }
        }
        while(!temp.empty())  
        {
            ans.push_back(temp[temp.size()-1].second);
            temp.pop_back();
        }
        sort(ans.begin(), ans.end());
        for(int i=0; i<ans.size(); i++)
        {
            ans[i] = asteroids[ans[i]];
        }
        return ans;
    }
};
