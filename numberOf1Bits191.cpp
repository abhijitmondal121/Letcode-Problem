class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count=0,r;
        while(n>0){            
            if(n&1){
                count++;
            }
            n=n>>1;
        }
        return count;
        
    }
};