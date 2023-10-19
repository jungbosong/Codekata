public class Solution {
    public enum DAY
    {
        FRI = 0,
        SAT,
        SUN,
        MON,
        TUE,
        WED,
        THU,
    }
    public string solution(int a, int b) {
        string answer = "";
        int sum = 0;
        
        for(int i = 1; i <= a; i++)
        {
            if(i == a)
            {
                sum += b;
                break;
            }
            // 1,3,5,7,8,10,12 -> 31일인 달
            if(i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12)
            {
                sum += 31;
            }
            // 4, 6, 9, 11 -> 30일인 달
            if(i == 4 || i == 6 || i == 9 || i == 11)
            {
                sum += 30;
            }
            // 2 -> 29일인 달
            if(i == 2)
            {
                sum += 29;
            }
        }
        sum -= 1;
        answer = EnumToString((DAY)(sum % 7));
        return answer;
    }
    
    public string EnumToString(DAY day)
    {
        return day.ToString();
    }
}