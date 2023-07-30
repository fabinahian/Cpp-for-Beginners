#include <iostream>
using namespace std;

int main()
{
    bool isTodaySunny = false;
    bool isTodayWeekend = true;

    if (isTodayWeekend)
    {
        if (isTodaySunny)
        {
            cout << "Go to the park" << endl;
        }
        else
        {
            cout << "Go to the park, but take an umbrella." << endl;
        }
    }
    else
    {
        if (isTodaySunny)
        {
            cout << "Go to work!" << endl;
        }
        else
        {
            cout << "Go to work, but take an umbrella." << endl;
        }
    }
}