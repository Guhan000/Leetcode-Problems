class Solution {
    public boolean isPowerOfThree(int n) {
        return helper(n,0);
    }
    public boolean helper(int n,int x){
        if(x>=20){
            return false;
        }
        if((int)(Math.pow(3,x))==n){
            return true;
        }
        return helper(n,x+1);
    }
}