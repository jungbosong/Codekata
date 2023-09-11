using System;

public class Example
{
    public static void Main()
    {
        String[] s;

        Console.Clear();
        s = Console.ReadLine().Split(' ');

        int colLength = Int32.Parse(s[0]);
        int rowLength = Int32.Parse(s[1]);

        for(int row = 0; row < rowLength; row++)
        {
            for(int col = 0; col < colLength; col++)
            {
                Console.Write("*");
            }
            Console.WriteLine();
        }
    }
}