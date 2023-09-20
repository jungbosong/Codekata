using System;
using System.Linq;

public class Solution {
    public int solution(int[,] sizes) {
        int answer = 0;
        int length = sizes.GetLength(0);
        int[] widthSizes = new int[length];
        int[] heightSizes = new int[length];
        for(int i = 0; i < length; i++)
        {
            widthSizes[i] = sizes[i,0];
            heightSizes[i] = sizes[i,1];
        }
        
        for(int i = 0;  i< length; i++)
        {
            if(widthSizes[i] < heightSizes[i])
            {
                int tmp = heightSizes[i];
                heightSizes[i] =  widthSizes[i];
                widthSizes[i] = tmp;
            }
        }
        
        widthSizes = widthSizes.OrderByDescending(n => n).ToArray();
        heightSizes = heightSizes.OrderByDescending(n => n).ToArray();
        answer = widthSizes[0] * heightSizes[0];
        return answer;
    }
}