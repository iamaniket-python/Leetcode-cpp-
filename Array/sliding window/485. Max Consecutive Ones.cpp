class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max_count=0;
        int curr_count=0;

        for(int num : nums){
            if(num == 1){
                curr_count++;
            }else{
                max_count =max(max_count, curr_count);
                curr_count=0;
            }
           
        }
         return max(max_count ,curr_count);
    }
};