class Solution {
    public void rotate(int[] nums, int k) {
        int l = nums.length;
        int[] temp = new int[l];
        k%=l;
        
        for(int i=0;i<k;i++){
            temp[i] = nums[l-k+i];
        }
        
        int i=0;
        for(int j=k;j<l;j++){
            temp[j] = nums[i++];
        }
        
        for(int x=0;x<l;x++){
            nums[x] = temp[x];
        }
        
    }
}