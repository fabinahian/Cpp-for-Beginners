#include <iostream>
using namespace std;

int main()
{

    bool isTodaySunny = false;
    bool isTodayWeekend = false;

    if (isTodaySunny && isTodayWeekend)
    {
        cout << "Go to the park!" << endl;
    }

    else if (isTodaySunny && !isTodayWeekend)
    {
        cout << "Go to the park, but take an umbrella." << endl;
    }

    else
    {
        cout << "Go to work" << endl;
    }

    /*shorter method: ternary operator*/

    isTodaySunny ? cout << "Go to the park!" : cout << "Take an umbrella."; // if-else

    system("pause>0");
}