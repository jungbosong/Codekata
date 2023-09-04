using System.Linq;
public class Solution {
    public int[] solution(int[] arr) {
        int[] none = {-1};
        if(arr.Length == 1)
        {
            return none;
        }
        
        int min = arr[0];    
        foreach(int num in arr)
        {
            if(num < min)
            {
                min = num;
            }
        }
        int[] answer = arr.Where(num => num != min).ToArray();
        return answer;
    }
}