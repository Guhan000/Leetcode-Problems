class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
//         sort(nums.begin(), nums.end());
        if(nums.size() == 0){
            return 0;
        }
//         int maxi = 0;
//         int curr = 1;
//         for(int i=1;i<nums.size();i++){
//             if(nums[i] == nums[i-1]+1){
//                 curr++;
//             }else if(nums[i] != nums[i-1]){
                
//                 maxi = max(maxi, curr);
//                 curr = 1;
//             }
//         }
//         maxi = max(maxi, curr);
//         return maxi;
        
        unordered_set<int> s;
        for(int x:nums){
           s.insert(x);
        }
        int maxi = 1;
        for(auto element : s){
            int parent = element - 1;
            if(s.find(parent) == s.end()){
                int next = element + 1;
                int count = 1;
                
                while(s.find(next) != s.end()){
                    next++;
                    count++;
                    
                }
                if(count > maxi){
                    maxi = count;
                }
            } 
        }
        return maxi;
    }
};

