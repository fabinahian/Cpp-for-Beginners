#include <iostream>
using namespace std;

enum eyeColor
{
    Brown,
    Blue,
    Green,
    Gray,
    Other
}; // enumeration

int main()
{
    eyeColor eyes = Brown;

    switch (eyes)
    {
    case Brown:
        cout << "80% of people have brown eyes.";
        break;
    case Blue:
        cout << "10% of people have Blue eyes.";
        break;
    case Green:
        cout << "2% of people have Green eyes.";
        break;
    case Gray:
        cout << "1% of people have Gray eyes.";
        break;
    case Other:
        cout << "7% of people have Other eyes.";
        break;
    default:
        cout << "Not valid.";
        break;
    }
    system("pause>0");
}