class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        int i = 0, j = 0, maxi = 0;
        
        sort(begin(nums),end(nums));
        
        long sum = 0;
        
        while(i < nums.size()) {            
            while(j < i and (nums[i] * 1LL * ( i - j) - sum) > k) {
                sum -= nums[j++];
            }
            
            maxi = max(maxi, i - j + 1);
            
            sum += nums[i];
            
            i++;
        }
        
        return maxi;
    }
};