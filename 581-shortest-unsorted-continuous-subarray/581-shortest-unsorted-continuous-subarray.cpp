class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int count1=0;
        int count2=0;
        vector<int> b(nums);
        sort(b.begin(), b.end());
        int i = 0;
        int j = b.size()-1;
        if(nums==b || nums.size()==1){
            return 0;
        }
        while(i<j){
            if(b[i]==nums[i]){
                i++;
                count1++;
            }else if(b[j]==nums[j]){
                j--;
                count2++;
            }else{
                break;
            }
        }
        return (b.size()-(count1+count2));
        
    }
};