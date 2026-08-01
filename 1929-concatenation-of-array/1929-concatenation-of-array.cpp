class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int length = nums.size();
        vector<int> ans;
        for(int i = 0; i<2; i++)
        {
            for(int j = 0; j < length; j++)
            {
                ans.push_back(nums[j]);
            }
        }
        return ans;
    }
};