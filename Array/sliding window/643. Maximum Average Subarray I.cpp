class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n= nums.size();
        int summ = 0;
        

        for(int i=0; i<k; i++){
            summ += nums[i];
        }
        int maximum= summ;

        for(int j=k; j<n; j++){
            summ += nums[j];
            summ -= nums[j-k];
            maximum =max(maximum , summ);
        }
        return (double)maximum /k;
    }
    
};