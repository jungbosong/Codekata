using System.Linq;

public class Solution {
    public string[] solution(string[] strings, int n) {
        string[] answer = strings.OrderBy(c => c[n]).ThenBy(c => c).ToArray();
        
        return answer;
    }
}