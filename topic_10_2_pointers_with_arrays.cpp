#include <iostream>
using namespace std;

int main()
{
    int lucky_numbers[] = {1, 3, 5, 7, 9};

    cout << lucky_numbers << endl;     // gives address of the first element
    cout << &lucky_numbers[0] << endl; // gives address of the first element
    cout << lucky_numbers[0] << endl;  // gives value of the first element

    int *point; // creates a pointer called point

    point = lucky_numbers;
    cout << "pointing towards: " << point << ", value: " << *point << endl;

    point++; // address moves to the next one (2nd element)
    cout << "pointing towards: " << point << ", value: " << *point << endl;

    system("pause>0");
}
