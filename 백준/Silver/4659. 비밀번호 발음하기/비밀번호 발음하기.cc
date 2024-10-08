#include <iostream>
#include <map>

using namespace std;

int continuous_cons = 0;
int conitnuous_vowel = 0;
int min_vowel = 0;

bool CheckVowel(char c)
{
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
    {
       return true;
    }
    else
    {
        return false;
    }
}

bool CheckAcceptable(string str)
{
    for(int i = 0; i < str.size(); i++)
    {
        char c = str[i];

        if(c == str[i+1])
        {
            if(c != 'e' && c != 'o')
            {
                return false;
            }
        }

        if(CheckVowel(c))
        {
            conitnuous_vowel++;
            continuous_cons = 0;
            min_vowel++;
        }
        else
        {
            conitnuous_vowel = 0;
            continuous_cons++;
        }

        if(conitnuous_vowel >= 3 || continuous_cons >= 3)
        {
            return false;
        }
    }

    if(min_vowel == 0)
    {
        return false;
    }

    return true;
}

int main()
{
    ios::sync_with_stdio(false);    
    cin.tie(NULL);  
    cout.tie(NULL);

    string str;

    while(1)
    {        
        cin >> str;
        if(str.compare("end") == 0)
        {
            break;
        }

        conitnuous_vowel = 0;
        continuous_cons = 0;
        min_vowel = 0;

        if(CheckAcceptable(str))
        {
            cout << "<" << str << "> is acceptable.\n";
        }
        else
        {
            cout << "<" << str << "> is not acceptable.\n";
        }
    }

    return 0;
}