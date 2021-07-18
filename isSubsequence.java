class Solution {
    public boolean isSubsequence(String s, String t) {
        int p1=0,p2=0;
        if(s.isEmpty()){
            return true;            
        }  
        while(p1<s.length() && p2<t.length()){
            if(s.charAt(p1)==t.charAt(p2)){
            p1++;
            p2++;
         }
                    
        
        else{
            p2++;
        }
            
            
        }

        
        if(p1==s.length()){
            return true;
        }
        else{
            return false;
        }
        
        
    }
}