class Solution {
public:
    void rotate(vector<int>& nums, int k) {
     int n=nums.size(),j=0;
    k=k%n;
    int arr[n];
    for(int i=n-k;i<n;i++){
        arr[j]=nums[i];
        j++;
    }
    for(int i=0;i<n-k;i++){
        arr[j]=nums[i];
        j++;
    }
    for(int i=0;i<n;i++){
        nums[i]=arr[i];
    }

    }
};