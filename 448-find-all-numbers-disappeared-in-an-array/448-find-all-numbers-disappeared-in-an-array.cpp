class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        set<int> s;
        vector<int> ans;
        int ss = nums.size();
        for(int i=0;i<ss;i++){
            s.insert(nums[i]);
        }
        for(int i=1;i<=ss;i++){
            if(s.find(i)==s.end()){
                ans.push_back(i);
            }
        }
        return ans;
    }
};