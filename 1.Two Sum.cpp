class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       int start;
       int end;

       for(start =0; start<nums.size();start++)
       {
        for(end= start+1; end<nums.size(); end++)
        {
            if(nums[start] + nums[end] == target){
                return {start,end};
                break;
            }
        }
       }
       return {};
    }
};
