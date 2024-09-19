#include <iostream>
#include <string>

using namespace std;

int main()
{
    string input_s;

    getline(cin, input_s);

    for(int i = 0; i < input_s.length(); i++)
    {
        if(input_s[i] == ' ')
        {
            cout << ' ';
        }
        else if(0 <= input_s[i] - '0' && input_s[i]-'0' <= 9)
        {
            cout << input_s[i];
        }
        else if(0 <= input_s[i] - 'a' && input_s[i]-'a' <= 25)
        {
             if(input_s[i]-'a' >= 13)
             {
                cout << (char)(input_s[i] - 13);
             }
             else
             {
                cout << (char)(input_s[i] + 13);
             }
        }
        else if(0 <= input_s[i] - 'A' && input_s[i]-'A' <= 25)
        {
             if(input_s[i]-'A' >= 13)
             {
                cout << (char)(input_s[i] - 13);
             }
             else
             {
                cout << (char)(input_s[i] + 13);
             }
        }
    }
    return 0;
}