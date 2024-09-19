#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    int initialCount[26] = {0}; 
    char name[30];
    bool isPossible = false;

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> name;

        initialCount[name[0]-'a']++;
        if(initialCount[name[0]-'a'] >=5 )
        {
            isPossible = true;
        }
    }

    if(isPossible)
    {
        for(int i = 0; i < 26; i++)
        {
            if(initialCount[i] >=5 )
            {
                cout << (char)(i+'a');
            }
        }
    }
    else
    {
        cout << "PREDAJA";
    }

    return 0;
}