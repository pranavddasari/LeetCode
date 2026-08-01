class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> ans;
        for(auto it : nums)
        {
            ans.insert(it);
        }
        if(ans.size()<nums.size())
        {
            return true;
        }
        return false;
    }
};