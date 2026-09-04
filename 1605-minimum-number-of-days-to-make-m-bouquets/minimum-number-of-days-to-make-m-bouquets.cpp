class Solution {
public:
    bool possible(vector<int>& bloomDay,int day, int m, int k){
        int cnt=0;
        int bqt=0;
        for(int i=0;i<bloomDay.size();i++){
            if(bloomDay[i]<=day){
                cnt++;
            }
            else{
                bqt+=cnt/k;
                cnt=0;
            }
        }
        bqt+=cnt/k;
        return bqt>=m;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
    long long val = 1LL*m*1LL*k;
    if(val>bloomDay.size()) return -1;
    int low=INT_MAX,high=INT_MIN;
    for(int i=0;i<bloomDay.size();i++){
        low=min(low,bloomDay[i]);
        high=max(high,bloomDay[i]);
    }
    while(low<=high){
        int mid=low+(high-low)/2;
       if( possible(bloomDay,mid,m,k)){
        high=mid-1;
       }
       else{
        low=mid+1;
       }
    }
    return low;
    }
};