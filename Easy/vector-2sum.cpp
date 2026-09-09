class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> cp = nums;
        std::sort(cp.begin(), cp.end()); //Default sort is ascending

        auto fwd = cp.begin();
        auto bwd = cp.end() - 1;
        while (fwd != bwd) {
            if (*fwd + *bwd == target) {
                int in1 = std::find(nums.begin(), nums.end(), *fwd) - nums.begin();
                int in2 = std::distance(std::find(nums.rbegin(), nums.rend(), *bwd), nums.rend() - 1);
                return {in1, in2};
            } else if (*fwd + *bwd > target) {
                bwd-=1;
            } else {
            fwd+=1;
            }
        }
        return {0,1};
    }
};