
class Solution {
    public int reverse(int x) {
          int result=0;
        int prev=0;
        
        while(x!=0){
            int temp=x%10;
            x=x/10;
            result=(result*10)+temp;
            
            if((result-temp)/10!=prev){
                return 0;
            }
            else{
                prev=result;
            }
        }
        return result;
           
    
    }
}
