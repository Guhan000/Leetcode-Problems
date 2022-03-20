class Solution {
    public int missingNumber(int[] nums) {
//         int i=0;
//         int n = nums.length;
        
//         while(i<n){
//             int value = nums[i];
//             if(nums[i] < nums.length && nums[i] != nums[value]){
//                 swap(nums, i,value);
//             }else{
//                 i++;
//             }
//         }
        
//         for(int j=0;j<nums.length;j++){
//             if(nums[j] != j){
//                 return j;
//             }
//         }
//         return n;
        
        int res = nums.length;
        for(int i=0;i<nums.length;i++){
            res ^= i;
            res ^= nums[i];
        }
        return res;
    }
    
    // void swap(int[] arr,int first,int second){
    //     int temp = arr[first];
    //     arr[first] = arr[second];
    //     arr[second] = temp;
    // }
}

