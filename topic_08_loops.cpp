#include <iostream>
using namespace std;

int main()
{
    cout << "WHILE LOOP:\n";
    // int counter = 1;
    int counter = 11;

    while (counter <= 10)
    {
        cout << counter << endl;
        counter++;
    }

    cout << "DO-WHILE LOOP:\n";
    // int do_while_counter = 1;
    int do_while_counter = 11;
    do
    {
        cout << do_while_counter << endl;
        do_while_counter++;
    } while (do_while_counter <= 10);

    cout << "FOR LOOP:\n";
    string animals[] = {"cat", "dog", "cow", "goat", "bee"};

    for(int i=0; i < 5; i++)
    {
        cout << animals[i] << endl;
    }

    system("pause>0");
}