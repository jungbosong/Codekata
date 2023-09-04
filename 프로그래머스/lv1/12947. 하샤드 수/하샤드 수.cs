using System.Linq;

public class Solution {
    public bool solution(int x) {
        bool answer = true;

        var temp = x.ToString().ToList().Select(y => int.Parse(y.ToString())).Sum();

        if (x % temp != 0)
            answer = false;

        return answer;
    }
}