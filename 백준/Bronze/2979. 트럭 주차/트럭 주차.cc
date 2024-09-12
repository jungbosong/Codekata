#include <iostream>
using namespace std;

#define A 1
#define B 2
#define C 3

int main()
{
    int price[4];
    int start[3], end[3];
    int number_of_parked_cars[100] = {0};
    int min_start = 100;
    int max_end = 1;
    int result = 0;
    
    cin >> price[A] >> price[B] >> price[C];
    
    for(int i = 0; i < 3; i++)
    {
        cin >> start[i] >> end[i];
    }

    for(int i = 0; i < 3; i++)
    {
        if(min_start > start[i])
        {
            min_start = start[i];
        }
        if(max_end < end[i])
        {
            max_end = end[i];
        }
        for(int time = start[i]; time < end[i]; time++)
        {
            number_of_parked_cars[time]++;
        }
    }

    for(int time = min_start; time <= max_end; time++)
    {
        switch(number_of_parked_cars[time])
        {
            case A: 
            {
                result += A * price[A];
                break;
            }
            case B: 
            {
                result += B * price[B];
                break;
            }
            case C: 
            {
                result += C * price[C];
                break;
            }
        }
    }

    cout << result;

    return 0;
}