public class Solution {
    public string solution(string phone_number) {    
        char[] chars = phone_number.ToCharArray();
    
        for(int i = phone_number.Length - 5; i >= 0; i--)
        {
            chars[i] = '*';
        }
        
        return new string(chars);
    }
}