class Solution {
public:
int gcd(int x,int y){
    if(y==0){
        return x;
    }
    return gcd(y,x%y);
}
    int gcdOfOddEvenSums(int n) {
    int sumOdd=0,sumEven=0;
   for(int i=1;i<=n;i++){
    sumEven+=2*i;
   }
   for(int i=1;i<2*n;i=i+2){
    sumOdd+=i;
   }
   return gcd(sumEven,sumOdd);
    }
};