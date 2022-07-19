class Solution {
public:
    int trap(vector<int>& height) {
        // O(n^2)
        
        // int res=0;
        // for(int i=1;i<height.size()-1;i++){
        //     int lmax = height[i]; 
        //     for(int j=0;j<i;j++){
        //         lmax = max(height[j],lmax);
        //     } 
        //     int rmax = height[i];
        //     for(int k=i+1;k<height.size();k++){
        //         rmax = max(height[k],rmax);
        //     }
        //     res = res+(min(lmax,rmax)-height[i]);
        // }
        // return res;
        
        // O(n)
        
        int res = 0;
        int larr[height.size()];
        int rarr[height.size()];
        larr[0] = height[0];
        for(int i=1;i<height.size();i++){
            larr[i] = max(height[i],larr[i-1]);
        }
        rarr[height.size()-1] = height[height.size()-1];
        for(int i=height.size()-2;i>=0;i--){
            rarr[i] = max(height[i],rarr[i+1]);
        }
        for(int i=0;i<height.size();i++){
            res = res + (min(larr[i],rarr[i]) - height[i]);
        }
        return res;
    }
    
};