/**
 * // This is MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * interface MountainArray {
 *     public int get(int index) {}
 *     public int length() {}
 * }
 */
 
class Solution {
    public int findInMountainArray(int target, MountainArray mountainArr) {
        int peak = binarySearch(mountainArr);
        if(mountainArr.get(peak)==target) {
            return peak;
        }
        int ans = -1;
        ans = binarySearchh(mountainArr, target, 0, peak);
        if(ans!=-1) {
            return ans;
        } 
        return binarySearchh(mountainArr, target, peak+1, mountainArr.length()-1);
    }
    
    int binarySearch(MountainArray mountainArr){
        int start = 0;
        int end = mountainArr.length()-1;
        while(start<end){
            int mid = start + (end-start)/2;
            if(mountainArr.get(mid) < mountainArr.get(mid+1)){
                start=mid+1;
            }else{
                end=mid;
            }
        }
        return end;
    }

    int binarySearchh(MountainArray mountainArr,int target,int start,int end){

        boolean isasc = mountainArr.get(start) < mountainArr.get(end);
        
        while(start<=end){
            int mid = start + (end-start)/2;

            if(isasc){
                if(mountainArr.get(mid) < target){
                    start=mid+1;
                }else if(mountainArr.get(mid) == target){
                    return mid;
                }else{
                    end=mid-1;
                }
            }else{
                if(mountainArr.get(mid) > target){
                    start=mid+1;
                }else if(mountainArr.get(mid) == target){
                    return mid;
                }else{
                    end=mid-1;
                }
            }
            
        }
        return -1;
    }
    
}