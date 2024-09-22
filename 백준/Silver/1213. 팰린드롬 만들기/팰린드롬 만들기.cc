#include <iostream>
#include <map>

using namespace std;

int main()
{
    string name;                    // 임한수의 영어 이름
    string front = "";              // 팰린드롬 앞 알파벳 저장
    string back = "";               // 팰린드롬 뒤 알파벳 저장
    string remain = "";             // 팰린드롬 만들면서 남는 알파벳 저장
    map<char, int> alphabet_cnt;    // 영어 이름에 있는 알파벳 개수 저장    

    // 입력
    cin >> name;

    for(char c: name)
    {
        if(alphabet_cnt.find(c) != alphabet_cnt.end())
        {
            alphabet_cnt[c]++;
        }
        else
        {
            alphabet_cnt.insert({c, 1});
        }
    }

    // 팰린드롬 구하기
    for(auto ac : alphabet_cnt)
    {
        for(int i = 0; i < ac.second / 2; i++)
        {
            front += ac.first;
            back = ac.first + back;
        }
        if(ac.second % 2 == 1)
        {
            remain += ac.first;
        }        
    }

    // 결과 출력
    if(remain.length() == 1 || remain.length() == 0)
    {
        cout << front + remain + back;
    }
    else
    {
        cout << "I'm Sorry Hansoo";
    }

    return 0;
}