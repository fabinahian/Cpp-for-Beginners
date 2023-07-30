/*The meaning of Encapsulation,
is to make sure that "sensitive" data is hidden from users.
To achieve this, you must declare class variables/attributes as private
(cannot be accessed from outside the class).
If you want others to read or modify the value of a private member,
you can provide public get and set methods.*/

#include <iostream>
using namespace std;

class Houses // class definition
{
private:
    /*Since, these variables are private, users can't use these.
    However, if you want them to be accessible and updatable,
    you can create 'get' method and 'set' method.*/

    string Building_name;
    int Bedrooms;
    int Rent;
    bool Is_broken;

public:
    // purpose of encapsulation is to make variables private.

    Houses(string building_name, int bedrooms, int rent) // constructor definition
    {
        Building_name = building_name;
        Bedrooms = bedrooms;
        Rent = rent;
        Is_broken = false;
    }

    void get_info() // method definition
    {
        cout << "Name: " << Building_name << endl;

        /*We don't need "Houses.Name since Name is already available inside this class."*/

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

int main()
{
    Houses house_01("Oporajita", 3, 50000);
    Houses house_02("Togor", 2, 40000);

    house_01.get_info();
    house_01.move_in();
    // now, let's see if we can move in if we mess up the building.
    house_01.house_broken();
    house_01.move_in();
    // let's fix the house!
    house_01.house_renovated();
    house_01.move_in();

    system("pause>0");
}