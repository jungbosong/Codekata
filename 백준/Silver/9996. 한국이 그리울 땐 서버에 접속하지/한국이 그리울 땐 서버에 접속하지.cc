#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    string file_name;
    string pattern;
    string pre;
    string suf;

    cin >> n;
    cin >> pattern;

    int pos = pattern.find('*');
    pre = pattern.substr(0, pos);
    suf = pattern.substr(pos+1);

    for(int i = 0; i < n; i++)
    {
        cin >> file_name;
        
        if(pre.size() + suf.size() > file_name.size())
        {
            cout << "NE\n";
        }
        else
        {
            if(pre == file_name.substr(0, pre.size()) && suf == file_name.substr(file_name.size()-suf.size()))
            {
                cout << "DA\n";
            }
            else
            {
                cout << "NE\n";
            }
        }
    }
    return 0;
}