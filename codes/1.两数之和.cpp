/*
 * @lc app=leetcode.cn id=1 lang=cpp
 *
 * [1] 两数之和
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int,int> hashmap;
        for(int i = 0; i < nums.size(); i++){
            if(hashmap.find(target-nums[i]) != hashmap.end()){
                return {i,hashmap[target-nums[i]]};
            }
            hashmap[nums[i]] = i;
        }
        return {};
    }
};
// @lc code=end

