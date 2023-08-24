namespace CodeKata
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int input = int.Parse(Console.ReadLine());
            Console.Write(CheckEven(input));

            // 풀이 2
            Console.Write(input % 2 == 0 ? "Even" : "Odd");
        }

        static string CheckEven(int num)
        {
            if (num % 2 == 0 || num == 0)
            {
                return "Even";
            }
            return "Odd";
        }
    }
}