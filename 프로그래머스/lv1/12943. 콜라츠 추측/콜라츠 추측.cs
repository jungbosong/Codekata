public class Solution {
    public int solution(int num) {
        long lNum = num;
        for (int i = 0; i < 500; i++)
        {
            if (lNum == 1) return i;
            lNum = lNum % 2 == 0 ? lNum / 2 : lNum * 3 + 1;                        
        }
        return -1;        
    }
}