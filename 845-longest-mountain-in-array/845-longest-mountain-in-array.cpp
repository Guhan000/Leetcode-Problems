class Solution {
public:
    int longestMountain(vector<int>& arr) {
        int largest = 0;
        for(int i=1;i<arr.size()-1;){
            
            if(arr[i] > arr[i-1] and arr[i] > arr[i+1]){
                int count = 1;
                int j = i;
                // count backwards
                while(j>=1 and arr[j] > arr[j-1]){
                    j--;
                    count++;
                }
                
                //count forward
                while(i<=arr.size()-2 and arr[i]>arr[i+1]){
                    i++;
                    count++;
                }
                
                largest = max(largest, count);
            }else{
                i++;
            }
        }
        return largest;
    }
};