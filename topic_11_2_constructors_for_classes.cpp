#include <iostream>
using namespace std;

class Car
{
public:
    string Name;
    string Color;
    double Price;

    Car(string name, string color, double price)

    /*A constructor is a method that's called automatically
    when you create an instance of a class.
    constructor has the same name as your class & doesn't have a return type.*/

    {
        Name = name; // Name from class will hold the name received through the constructor
        Color = color;
        Price = price;
    }

}; // semi-colon after class definition is important.
int main()
{
    Car car_01("Ford", "Red", 50000);
    Car car_02("Volvo", "Blue", 70000);

    cout << "Name: " << car_01.Name << endl;
    cout << "Color: " << car_01.Color << endl;
    cout << "Price: " << car_01.Price << endl;

    system("pause>0");
}