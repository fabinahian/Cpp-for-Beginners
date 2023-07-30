#include <iostream>
using namespace std;

class Car
{
public: // access modifier
    /*In cpp, all properties of any class in private by default.
    So, you need to make it public to make these accessible
    within functions (eg main function)*/

    string name;
    string color;
    double price;
};
int main()
{
    /*class is a user-defined data type.

    Class is a blueprint which defines some properties and behaviors.

    An object is an instance of a class which has those properties and behaviour
    attached.*/

    Car car_01; // car_01 is an object of type car.
    car_01.name = "Ford";
    car_01.color = "Red";
    car_01.price = 50000;

    cout << "Name: " << car_01.name << endl;
    cout << "Color: " << car_01.color << endl;
    cout << "Price: " << car_01.price << "$" << endl;

    Car car_02; // car_02 is an object of type car.
    car_02.name = "Volvo";
    car_02.color = "Blue";
    car_02.price = 70000;

    cout << "Name: " << car_02.name << endl;
    cout << "Color: " << car_02.color << endl;
    cout << "Price: " << car_02.price << "$" << endl;

    system("pause>0");
}