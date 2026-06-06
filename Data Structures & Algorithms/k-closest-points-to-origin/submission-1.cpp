class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        int n=points.size();
        priority_queue<pair<int,pair<int,int>>> pq;
        for(int i=0;i<n;i++)
        {
            int dis=((points[i][0] - 0)*(points[i][0] - 0) + (points[i][1] - 0)*(points[i][1] - 0));
            cout<<dis<<endl;
            if(k>0)
            {
                // cout<<dis<<endl;
                pq.push({dis,{points[i][0],points[i][1]}});
                k--;
            }
            else{
                // cout<<dis<<endl;
                if(dis<=pq.top().first)
                {
                    pq.pop();
                    pq.push({dis,{points[i][0],points[i][1]}});
                }
                else{
                    continue;
                }
            }
        }
        vector<vector<int>> v;
        for(int i=0;i<n;i++)
        {
            if(!pq.empty())
            {
                pair<int,pair<int,int>> top_ele=pq.top();
                pq.pop();
                v.push_back({top_ele.second.first,top_ele.second.second});
            }
        }
        return v;
    }
};
