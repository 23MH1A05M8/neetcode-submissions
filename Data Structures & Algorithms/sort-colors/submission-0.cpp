class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        int i=0,j=0,k=0;
        for(int ind=0;ind<n;ind++)
        {
            if(nums[ind]==0)
            {
                swap(nums[i],nums[ind]);
                // swap(nums[j],nums[ind])
                if(nums[ind]==1)
                {
                    swap(nums[j],nums[ind]);
                }
                if(nums[ind]==2)
                {
                    swap(nums[k],nums[ind]);
                }
                i++;
                j++;
                k++;
            }
            else if(nums[ind]==1)
            {
                swap(nums[j],nums[ind]);
                if(nums[ind]==2)
                {
                    swap(nums[k],nums[ind]);
                }
                j++;
                k++;
            }
            else{
                swap(nums[k],nums[ind]);
                k++;
            }
        }
    }
};