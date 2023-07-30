#include <iostream>
using namespace std;

// function that returns a value

float sum(float a, float b); // function declaration should come before the main function

// function that does not return value

void introduce_me(string name, int age = 0);
/*age holds a default value which will be used
if the function is invoked without giving the age parameter.*/

int main()
{
    cout << sum(2.2, 5) << endl;
    introduce_me("Fabi", 23);

    system("pause>0");
}

float sum(float a, float b)
{
    float sum;
    sum = a + b;
    return sum;
}

void introduce_me(string name, int age)
{
    cout << "My name is " << name << ".\nI am " << age << " years old." << endl;
}