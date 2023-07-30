#include <iostream>
using namespace std;

/*Inheritance: All of the properties of a class can be inherited by another class*/

class Houses
{
private:
    // 4 private properties of the class 'Houses'
    string Building_name;
    int Bedrooms;
    int Rent;
    bool Is_broken;

public:
    // constructor of the class 'Houses'
    Houses(string building_name, int bedrooms, int rent)
    {
        Building_name = building_name;
        Bedrooms = bedrooms;
        Rent = rent;
        Is_broken = false;
    }
    // 4 methods of the class 'Houses'
    void get_info()
    {
        cout << "Name: " << Building_name << endl;
        cout << "Number of bedrooms: " << Bedrooms << endl;
        cout << "Rent per month: " << Rent << endl;
    }

    void house_broken()
    {
        cout << "The " << Building_name << " was wrecked by Ralph." << endl;
        Is_broken = true;
    }

    void house_renovated()
    {
        cout << "The " << Building_name << " has been renovated." << endl;
        Is_broken = false;
    }

    void move_in()
    {
        if (Is_broken)
        {
            cout << Building_name << " is in bad condition." << endl;
        }
        else
        {
            cout << Building_name << " is in good shape!" << endl;
        }
    }
};

/*Mansions is inheriting properties from Houses.
The class 'Mansions' is a derived class &
the class 'Houses' is the base class.*/

class Mansions : public Houses // Every public property of Houses will be public for Mansions as well.
{
public:
    Mansions(string building_name, int bedrooms, int rent) : Houses(building_name, bedrooms, rent)
    {
    }
};

int main()
{
    Houses house_01("Oporajita", 3, 50000);
    Houses house_02("Togor", 2, 40000);

    house_01.get_info();
    house_01.move_in();

    house_01.house_broken();
    house_01.move_in();

    house_01.house_renovated();
    house_01.move_in();

    cout << "\n";

    // Let's test the class Mansions

    Mansions mansion_01("La Villa", 15, 150000);
    mansion_01.get_info();
    mansion_01.move_in();

    mansion_01.house_broken();
    mansion_01.move_in();

    mansion_01.house_renovated();
    mansion_01.move_in();

    system("pause>0");
}