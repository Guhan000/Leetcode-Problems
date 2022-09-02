class Solution {
public:
    
    void rotate(vector<int>& nums, int k) {
         //if k==array.size() then no change after rotation
        if(k == nums.size()) return;
        else k = k%nums.size();
           
        //step 1: reversing first n-k elements, array:[3, 2, 1, 4, 5]
        reverse(nums.begin(),nums.end()-k);
           
        //step 2: reversing remaining k elements, array:[3, 2, 1, 5, 4]
        reverse(nums.begin()+nums.size()-k, nums.end());
           
        //step 3: reversing whole vector, array:[4, 5, 1, 2, 3], this is resultant
        reverse(nums.begin(), nums.end());
    }
};