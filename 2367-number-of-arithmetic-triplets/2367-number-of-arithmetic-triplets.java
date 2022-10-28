class Solution {
    public int arithmeticTriplets(int[] nums, int diff) {
        int n = nums.length;
        int result = 0;
        
        
        for(int i = 0; i < n; i++) {
            for(int j = i + 1; j < n; j++) {
                int currentDiff = nums[j] - nums[i];
                if(currentDiff == diff) {
                    for(int k = j + 1; k < n; k++) {
                        if(nums[k] - nums[j] == diff) {
                            result++;
                            break;
                        }
                    }
                } else if (currentDiff < diff) {
                    continue;
                } else {
                    break;
                }
            }
        }
        
        return result;
    }
}