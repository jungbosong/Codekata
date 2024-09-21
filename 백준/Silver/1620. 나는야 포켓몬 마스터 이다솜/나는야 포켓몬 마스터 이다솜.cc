#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;      // 도감에 수록된 포켓몬 수
    int m;      // 문제 개수
    map<string, int> pokemon_name;      // 키: 포켓몬 이름
    map<int, string> pokemon_number;    // 키: 포켓몬 번호
    string name;     // 이름
    string question; // 질문    

    // 입력
    cin >> n >> m;

    for(int i = 1; i <= n; i++)
    {
        cin >> name;
        pokemon_name.insert({name, i});
        pokemon_number.insert({i, name});
    }

    // 질문 입력 받고 답 출력
    for (int i = 0; i < m; i++)
    {
        cin >> question;

        // 질문이 숫자일 경우
        if(atoi(question.c_str()))
        {
            cout << pokemon_number[atoi(question.c_str())] << '\n';
        }
        // 질문이 영어일 경우
        else
        {
             cout << pokemon_name[question] << '\n';
        }
    }

    return 0;
}

// 풀이시간 15분