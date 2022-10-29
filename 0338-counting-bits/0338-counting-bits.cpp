class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> arr(n+1,0);
        for(int i=1; i<=n; ++i){
            bool isSet = false;
            int num = i;
            if(num&1) isSet = true;
            num >>= 1;
            if(isSet) arr[i] = arr[num] + 1;
            else arr[i] = arr[num];
        }
        return arr;
    }
};