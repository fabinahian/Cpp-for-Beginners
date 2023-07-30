#include <iostream>
using namespace std;

int main()
{
    int select;
    cout << "select one of the following: 1, 2, 3.\n";
    cin >> select;

    switch (select)
    {
    case 1:
        cout << "You got a can of coca-cola!";
        break;
    case 2:
        cout << "You got a pack of lays.";
        break;
    case 3:
        cout << "You got a bottle of aquafina.";
        break;
    default:
        cout << "Not a valid selection.";
        break;
    }

    system("pause>0");
}