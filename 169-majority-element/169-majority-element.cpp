class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> majority;
        int count=0;
        int max = 0;
        
        for(int i=0;i<nums.size();i++)
        {
            majority[nums[i]]++;
            
        }
    
        for(auto character : majority)
        {
            if(character.second > nums.size()/2)
            {
                max = character.first;
            }
        }
        
        return max;
    }
};