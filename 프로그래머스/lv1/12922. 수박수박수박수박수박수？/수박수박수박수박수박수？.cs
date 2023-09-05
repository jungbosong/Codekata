public class Solution {
    public const string WATER_MELLON = "수박";
    public string solution(int n) {
        string answer = "";
        
        answer = Repeat(n/2);
        if(n % 2 != 0)
        {
            answer += "수";
        }
        
        return answer;
    }
    
    public string Repeat(int count)
    {
        string result = "";
        for(int i = 0; i < count; i++)
        {
            result += WATER_MELLON;
        }
        return result;
    }
}