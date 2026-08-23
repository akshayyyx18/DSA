class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int l=0,r=0,index=0;
    int arr[m+n];
    while(l<m && r<n){
        if(nums1[l]<=nums2[r]){
            arr[index]=nums1[l];
            l++;
            index++;
        }
        else{
            arr[index]=nums2[r];
            r++;
            index++;
        }
    }
    while(l<m){
        arr[index++]=nums1[l++];
    }
    while(r<n){
        arr[index++]=nums2[r++];
    }
    nums1.resize(m+n);
    for(int i=0;i<nums1.size();i++){
        nums1[i]=arr[i];
    }
    }
};