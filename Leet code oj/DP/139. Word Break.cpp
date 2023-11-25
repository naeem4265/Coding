class Solution {
public:
    bool ok[305], vis[305];
    bool wordBreak(string s, vector<string>& wordDict) {
        memset(vis, 0, sizeof(vis));
        return rec(0, s, wordDict);
    }
    bool rec(int pos, string s, vector<string> &wordDict){
        if(pos==s.size())   return 1;
        if(vis[pos])   return ok[pos];
        vis[pos] = 1;
        ok[pos] = 0;
        for(int i=0,j,k; i<wordDict.size(); i++){
            for(j=pos,k=0; j<s.size() && k<wordDict[i].size(); j++,k++){
                if( s[j] != wordDict[i][k])   break;
            }
            if( k== wordDict[i].size() )   ok[pos] = ok[pos] | rec(j, s, wordDict);
        }
        return ok[pos];
    }
};