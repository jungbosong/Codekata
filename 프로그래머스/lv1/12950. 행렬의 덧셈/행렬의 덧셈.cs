public class Solution {
    public int[,] solution(int[,] arr1, int[,] arr2) {
        int[,] answer = new int[arr1.GetLength(0),arr1.GetLength(1)];
        for(int row = 0; row < arr1.GetLength(0); row++)
        {
            for(int col = 0; col < arr1.GetLength(1); col++)
            {
                answer[row, col] = arr1[row, col] + arr2[row, col];
            }
        }
        return answer;
    }
}