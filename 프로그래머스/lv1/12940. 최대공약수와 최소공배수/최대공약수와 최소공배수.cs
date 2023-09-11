public class Solution {
    public int[] solution(int n, int m) {
        int[] answer = new int[2];
        
        answer[0] = GetGCD(n, m);
        answer[1] = GetLCM(n, m);
        
        return answer;
    }
    
    public int GetGCD(int n, int m)
    {
        if(n < m)
        {
            int tmp = n;
            n = m;
            m = tmp;
        }
        
        int tmpGCD;
        
        while(m != 0)
        {
            tmpGCD = n % m;
            n = m;
            m = tmpGCD;
        }
        return n;
    }
    
    public int GetLCM(int n, int m)
    {
        return n * m / GetGCD(n, m);
    }
}