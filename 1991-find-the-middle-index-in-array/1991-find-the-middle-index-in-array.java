class Solution {
    public int findMiddleIndex(int[] nums) {
        int sum=0;
        int sumL=0;
        
        for(int x:nums){
            sum+=x;
        }
        
        for(int i=0;i<nums.length;i++){
            if(sumL == (sum-nums[i])){
                return i;
            }else{
                sumL+=nums[i];
                sum-=nums[i];
            }
        }
        return -1;
    }
}