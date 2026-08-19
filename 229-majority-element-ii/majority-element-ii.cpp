class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
 int cnt1=0,cnt2=0,el1=INT_MIN,el2=INT_MIN;
 for(int i=0;i<nums.size();i++){
    if(cnt1>0 && el1==nums[i]){
    cnt1++;
    }
    else if(cnt2>0 && el2==nums[i]){
        cnt2++;
    }
    else if(cnt1==0){
        cnt1=1;
        el1=nums[i];
    }
    else if(cnt2==0){
        cnt2=1;
        el2=nums[i];
    }
    else{
        cnt1--;
        cnt2--;
    }
 }
 vector<int>ans;
 int c1=0,c2=0;
 for(int i=0;i<nums.size();i++){
    if(el1==nums[i]){
        c1++;
    }
    if(el2==nums[i]){
        c2++;
    }
 }
 int mini = (int)(nums.size()/3)+1;
 if(el1!=el2){
if(c1>=mini){
    ans.push_back(el1);
}
if(c2>=mini){
    ans.push_back(el2);
}
 }
 else{
    ans.push_back(el1);
 }
sort(ans.begin(),ans.end());
return ans;
    }
};