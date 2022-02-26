class Solution {
    public int[] shuffle(int[] nums, int n){
        int[] ans = new int[nums.length];
        int res = 0;
        n = n-1;
        
        for(int i=0;i<nums.length;i++){
            if(i%2==0){
                ans[i] = nums[res];
                res++;
            }else{
                ans[i] = nums[n+res];
            }
        }
        return ans;
    }
}