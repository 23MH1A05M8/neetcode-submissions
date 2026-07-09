class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> v;
        for(int i=0;i<=n;i++)
        {
            int c=0;
            int num=i;
            while(num)
            {
                num=num&(num-1);
                c++;
            }
            v.push_back(c);
        }
        return v;
    }
};
