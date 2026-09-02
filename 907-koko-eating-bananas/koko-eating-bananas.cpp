class Solution {
public:
long long calHours(vector<int>&piles,int hours){
     long long  hrs=0;
    for(int i=0;i<piles.size();i++){
        hrs+=(1LL*piles[i]+hours-1)/hours;
    }
    return hrs;
}
    int minEatingSpeed(vector<int>& piles, int h) {
       int n=piles.size(); 
       int low=1,high=*max_element(piles.begin(),piles.end());
       while(low<=high){
        int mid=low+(high-low)/2;
        long long totalhr=calHours(piles,mid);
        if(totalhr<=h){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
       }
       return low;
    }
};