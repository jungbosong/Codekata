public class Solution {
    public double solution(int[] arr) {
        double answer = 0;
        int cnt = 0;
        foreach(int num in arr)
        {
            answer += num;
            cnt++;
        }
        return answer/cnt;
        
        // 다른 풀이
        // return arr.Average();
    }
}