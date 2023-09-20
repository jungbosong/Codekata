using System;
using System.Linq;

public class Solution {
    public int solution(int[,] sizes) {
        int maxWidth= 0;
        int maxHeight = 0;
        
        for(int i = 0; i < sizes.GetLength(0); i++)
        {
            if(sizes[i,0] < sizes[i,1])
            {
                int tmp = sizes[i,1];
                sizes[i,1] = sizes[i,0];
                sizes[i,0] = tmp;
            }
            if(maxWidth < sizes[i,0])
            {
                maxWidth = sizes[i,0];
            }
            if(maxHeight < sizes[i,1])
            {
                maxHeight = sizes[i,1];
            }
        }
        
        return maxWidth * maxHeight;
    }
}