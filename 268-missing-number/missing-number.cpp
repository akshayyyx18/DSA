class Solution {
public:
    int missingNumber(vector<int>& nums) {
   int n=nums.size();
  long long int sum=(n*(n+1))/2;
   long long int s2=0;
   for(int i=0;i<nums.size();i++){
    s2+=nums[i];
   }
   return (sum-s2);
    }
};