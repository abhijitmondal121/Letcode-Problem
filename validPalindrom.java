class Solution {
    public boolean isPalindrome(String s) {
        
        String fs="";
        for(char c: s.toCharArray()){
            if(Character.isDigit(c)||Character.isLetter(c)){
                fs+=c;
            }
        }
        fs=fs.toLowerCase();
        
        int a_pointer=0;
        int b_pointer=fs.length()-1;
        
        while(a_pointer <= b_pointer){
            if(fs.charAt(a_pointer) != fs.charAt(b_pointer)){
                return false;
            }
            
            a_pointer +=1;
            b_pointer -=1;
            
        }
        return true;
        
    }
}