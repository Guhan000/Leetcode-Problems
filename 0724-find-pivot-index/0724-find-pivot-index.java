class Solution {
    public int pivotIndex(int[] nums) {
        int sumL = 0;
        int sumR = 0;
        for(int i=0;i<nums.length;i++){
            for(int j=i+1;j<nums.length;j++){
                sumR = sumR + nums[j];
            }
            for(int k=0;k<i;k++){
                sumL = sumL + nums[k];
            }
            
            if(sumR==sumL){
                return i;
            }
            sumL=0;
            sumR=0;
        }
        
        return -1;
    }
}