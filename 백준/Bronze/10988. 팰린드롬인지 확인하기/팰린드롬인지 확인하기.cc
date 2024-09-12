#include <iostream>
#include <string>

using namespace std;

bool is_palindrome(string word)
{
    int start_idx = 0;
    int end_idx = word.size()-1;

    while(true)
    {
        if(start_idx > end_idx)
        {
            break;
        }
        if(word[start_idx++] != word[end_idx--])
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    string word;
    cin >> word;

    cout << is_palindrome(word);
    
    return 0;
}