class Solution {
public:
    bool isPalindrome(int x) {
       std::string nums{std::to_string(x)};
       return std::equal(nums.begin(), nums.begin()+nums.size()/2, nums.rbegin());
    }
};