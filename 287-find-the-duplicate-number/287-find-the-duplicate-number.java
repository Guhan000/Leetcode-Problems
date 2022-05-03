class Solution {
    public int findDuplicate(int[] nums) {
       Set<Integer> set = new HashSet<Integer>();
        for(int i=0;i<nums.length;i++){
            if(!set.add(nums[i])){
                return nums[i];
            }
        }
        return -1;
    } 
    
}