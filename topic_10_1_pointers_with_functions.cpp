#include <iostream>
using namespace std;

/*pointers allow you to share data across different location*/

void celebrateBirthday(int *age); //* points to the address

int main()
{
    // pointers with functions

    int my_age = 23;

    cout << "Before function, age: " << my_age << endl;
    celebrateBirthday(&my_age); //& gives the address of a variable.
    cout << "After function, age: " << my_age << endl;

    system("pause>0");
}

void celebrateBirthday(int *age)
{
    (*age)++; // without pointers, the change here won't be updating the original my_age.
    cout << "Yaay! Celebrated " << *age << " birthday!" << endl;
}