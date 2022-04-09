class Solution {
    public int trap(int[] height) {
        int lMin[] = new int[height.length];
        int rMin[] = new int[height.length];
        int res = 0;
        lMin[0] = height[0];
        for(int i=1;i<height.length;i++){
            lMin[i] = Math.max(height[i], lMin[i-1]);
        }
        rMin[height.length-1] = height[height.length - 1];
        for(int j=height.length-2;j>=0;j--){
            rMin[j] = Math.max(height[j], rMin[j+1]);
        }
        for(int k=0;k<height.length;k++){
            res = res + (Math.min(lMin[k],rMin[k]) - height[k]);
        }
        return res;
    }
}