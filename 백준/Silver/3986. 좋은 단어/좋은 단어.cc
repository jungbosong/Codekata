#include <iostream>
#include <vector>

using namespace std;

vector<char> checker;   // 좋은 단어 검사를 위한 스택 역할
int result = 0;         // 결과: 좋은 단어 개수

/// 좋은 단어인지 검사하는 함수
/// @param 검사할 단어 word 
/// @return 입력된 문자가 좋은 단어면 1 반환, 아니면 0반환
bool IsGoodWord(string word)
{
    // 스택 초기화(초기화가 용이한 vector를 스택처럼 사용)
    checker.clear();

    for(char c: word)
    {
        // 스택이 비어있으면 글자 추가
        if(checker.empty())
        {
            checker.push_back(c);
        }
        else
        {
            // 스택의 마지막 글자와 현재 넣을 글자가 같으면 마지막 글자 제거
            if(checker[checker.size()-1] == c)
            {
                checker.pop_back();
            }
            // 스택의 마지막 글자와 현재 넣을 글자가 다르면 현재 글자 스택에 추가
            else
            {
                checker.push_back(c);
            }
        }
    }

    // 스택이 비어있으면 true, 그렇지 않다면 false 반환
    if(checker.empty())
    {
        return true;
    }
    else 
    {
        return false;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;          // 단어 개수
    string word;    // 입력 받을 단어

    // 입력
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> word;
        if(IsGoodWord(word))
        {
            result++;
        }
    }

    // 출력
    cout << result;

    return 0;
}