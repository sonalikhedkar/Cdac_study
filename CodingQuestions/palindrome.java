class Solution {
    public boolean isPalindrome(String s) {
        s = s.replaceAll("[^a-zA-Z0-9]", " ");  
        s = s.replaceAll("\\s", "");
        s= s.toLowerCase();
       
        String nstr="";
        
        for (int i=0; i<s.length(); i++)
      {
          
       char ch= s.charAt(i); //extracts each character
        nstr= ch+nstr; //adds each character in front of the existing string
      }
        if(s.equals(nstr)){
            return true;
        }else{
            return false;
        }
      
    }
}
