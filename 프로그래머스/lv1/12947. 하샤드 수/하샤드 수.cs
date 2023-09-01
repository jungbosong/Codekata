public class Solution {
    public bool solution(int x) {
        bool answer = true;
        
        int sum = 0;
        int tmp = x;
        while(tmp != 0)
        {
            sum += tmp % 10;
            tmp /= 10;
        }
        
        answer = (x % sum == 0) ? true : false;
        return answer;
    }
}