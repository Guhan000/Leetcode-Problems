class Solution {
    public int findPeakElement(int[] nums) {
        int start = 0;
        int end = nums.length - 1;
        int mid = 0;
        while(start<=end){
            mid=end-(end-start)/2;  
            if(start==mid && end==mid)
                return mid;
            else if(mid==start && nums[mid]>nums[mid+1])
                return mid;
            else if(mid==end && nums[mid]>nums[mid-1])
                return mid;
            else if(nums[mid]>nums[mid-1] && nums[mid]>nums[mid+1])
                return mid;
            else if(mid<end && nums[mid+1]>nums[mid])
            {
                start=mid+1;
            }
            else
            {
                end=mid-1;
            }
        }
        return -1;
    }
}