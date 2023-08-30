public class Solution {
     public int solution(string s)
      {
          int answer = 0;
          int flag = 1;
          int idx = 1;

          for (int i = 0; i < s.Length - 1; i++)
          {
              idx *= 10;
          }

          foreach (char c in s)
          {
              if (c == '-')
              {
                  flag = -1;
              }
              else if (c != '+')
              {
                  if (c == '0')
                  {
                      answer /= 10;
                      answer *= 10;
                  }
                  else
                  {
                      answer += (int)(c - '0') * idx;
                  }
              }
              idx /= 10;
          }

          if (answer == 0)
          {
              return 0;
          }
          else
          {
              return answer * flag;
          }
      }
}