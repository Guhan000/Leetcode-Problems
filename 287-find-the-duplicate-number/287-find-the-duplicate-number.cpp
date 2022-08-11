class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        set<int> s;
        for(int i=1;i<nums.size();i++){
            s.insert(nums[i-1]);
            if(s.find(nums[i])!=s.end()){
                return nums[i];
            }
        }
        return -1;
    }
};