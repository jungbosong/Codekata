public class Solution {
    public int solution(int num) {
        int answer = 0;
        long check = num;
        if(check == 1)
            return answer;
        
        while (true)
        {
            if(answer > 500)
            {
                answer = -1;
                break;
            }
            if(check == 1)
                break;
            
            if(check % 2 == 0)
            {
                check /= 2;
            }
            else
            {
                check = check*3 + 1;
            }
            answer++;
        }
        
        return answer;
    }
}