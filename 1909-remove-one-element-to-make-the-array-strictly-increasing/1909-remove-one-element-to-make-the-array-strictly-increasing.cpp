class Solution {
public:
    bool canBeIncreasing(vector<int>& nums) {
        int value = 0;
        int i = 1;
        
        // Loop through array
        while (i < nums.size()) {
            
            // Check if current value is less than previous.
            if (nums[i] <= nums[i - 1]) {
                value++;
                
                // Check if more than one value is less than previous.
                if (value > 1) {
                    return false;
                }
                
                // Check
                if (i == 1 || nums[i] > nums[i - 2]) 
                {
                    // Remove previous element.
                    nums[i - 1] = nums[i];
                } 
                else 
                {
                    // Remove current element.
                    nums[i] = nums[i - 1];
                }
            }
            // Increment LCV
            i++;
        }
        
        return true;
    }
};