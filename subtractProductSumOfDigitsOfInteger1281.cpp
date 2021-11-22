class Solution {
public:
    int subtractProductAndSum(int n) {
        int m=1,s=0,sub=0,r;
        while(n!=0){
            r=n%10;
            n=n/10;
            
            m=m*r;
            s=s+r;
        }
        
        sub=m-s;
        return sub;
        
    }
};