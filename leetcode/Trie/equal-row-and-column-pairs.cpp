struct Node
{
    int cnt;
    unordered_map<int,  Node* > child;
    Node(){
        cnt = 0;
    }
};
class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) 
    {
        Node *head = new Node();
        int n = grid.size();
        for(int i=0; i<n; i++)
        {
            Node *temp = head;
            for(int j=0; j<n; j++)
            {
                if(temp->child[grid[i][j]]==NULL)
                {
                    temp->child[grid[i][j]] = new Node();
                }
                temp = temp->child[grid[i][j]];
                temp->cnt++;
            }
        }
        int ans = 0;
        for(int j=0; j<n; j++)
        {
            Node *temp = head;
            int ct =0,i;
            for(i=0; i<n; i++)
            {
                if(temp->child[grid[i][j]]==NULL)   break;
                temp = temp->child[grid[i][j]];
                ct = temp->cnt;
            }
            if(i==n)   ans += ct;
        }
        return ans;
    }
};
