using System;
using System.Linq;

public class Solution {
    public string solution(string s) {

        return new String(s.ToCharArray().OrderByDescending(x=>x).ToArray());
    }
}