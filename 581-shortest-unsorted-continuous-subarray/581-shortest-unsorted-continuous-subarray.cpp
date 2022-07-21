class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {        
        int smallest = INT_MAX;
        int largest = INT_MIN;
        
        if(nums.size()==1){
            return 0;
        }
        
        for(int i=0;i<nums.size();i++){
            int x = nums[i];
            if(outOfOrder(nums,i)){
                smallest = min(smallest, x);
                largest = max(largest, x);
            }
        }
        if(smallest == INT_MAX){
            return 0;
        }
        int start = 0;
        while(nums[start]<=smallest){
            start++;
        }
        int end = nums.size()-1;
        while(nums[end]>=largest){
            end--;
        }
        return (end-start)+1;
    }
    
    bool outOfOrder(vector<int> nums, int i){
        int x = nums[i];
        if(i==0){
            return x>nums[i+1];
        }
        if(i==nums.size()-1){
            return x<nums[i-1];
        }
        return x<nums[i-1] or x>nums[i+1];
    }
};