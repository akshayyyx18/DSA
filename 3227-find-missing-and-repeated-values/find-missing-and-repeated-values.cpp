class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
      int n=grid.size();
      int repeating=-1,missing=-1;
      vector<int>ans;
      vector<int>hash((n*n)+1);
      for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            hash[grid[i][j]]++;
        }
      }
      for(int i=1;i<=(n*n);i++){
        if(hash[i]==2){
            repeating=i;
        }
        if(hash[i]==0){
            missing=i;
        }
      }
    ans.push_back(repeating);
    ans.push_back(missing);
    return ans;
    }
};