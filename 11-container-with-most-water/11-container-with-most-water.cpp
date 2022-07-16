class Solution {
public:
    int maxArea(vector<int>& height) {
        int start = 0;
        int end = height.size()-1;
        int water = 0;
        while(start<end){
            int heightt = min(height[start],height[end]);
            water = max(water, (end-start)*heightt);
            while(height[start] <= heightt && start<end){
                start++;
            }
            while(height[end] <= heightt && start<end){
                end--;
            }
        }
        return water;
    }
};