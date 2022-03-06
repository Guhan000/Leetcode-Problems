class Solution {
    public boolean search(int[] nums, int target) {
        
        int l=0, h=nums.length-1;
        while(l <= h){
            int m = l+(h-l)/2;
            if(nums[m] == target) return true;
            
            if(nums[m] < nums[h]){
                //nums[mid..high] is pure
                if(nums[m] < target && target <= nums[h]){
                    l = m+1;
                }else{
                    h = m-1;
                }
            }else if(nums[m] > nums[h]){
                //nums[low..mid] is pure
                if(nums[l] <= target && target < nums[m]){
                    h = m-1;
                }else{
                    l = m+1;
                }
            }else{
                h--;
            }
        }
        
        return false;
        
    }
}
