#include <iostream>
using namespace std;

class Houses
{
private:
    int Bedrooms;
    int Rent;

protected: // these will be accessible to the derived classes, not the public.
    string Building_name;
    bool Is_broken;

public:
    Houses(string building_name, int bedrooms, int rent)
    {
        Building_name = building_name;
        Bedrooms = bedrooms;
        Rent = rent;
        Is_broken = false;
    }

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

class Mansions : public Houses
{
public:
    Mansions(string building_name, int bedrooms, int rent) : Houses(building_name, bedrooms, rent)
    {
    }
};

class Hotels : public Houses
{
public:
    Hotels(string building_name, int bedrooms, int rent) : Houses(building_name, bedrooms, rent)
    {
    }

    /*Polymorphism allows us to have the same method
    have different implementations in different classes.*/

    void house_broken()
    {
        cout << "The room in " << Building_name << " is occupied." << endl;
        Is_broken = true;
    }
    void house_renovated()
    {
        cout << "The room in " << Building_name << " has been cleaned." << endl;
        Is_broken = false;
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

    Mansions mansion_01("La Villa", 15, 150000);

    mansion_01.get_info();
    mansion_01.move_in();

    mansion_01.house_broken();
    mansion_01.move_in();

    mansion_01.house_renovated();
    mansion_01.move_in();

    cout << "\n";

    Hotels hotel_01("The Sheraton", 1, 250);

    hotel_01.get_info();
    hotel_01.move_in();

    hotel_01.house_broken();
    hotel_01.move_in();

    hotel_01.house_renovated();
    hotel_01.move_in();

    cout << "\n";

    // Invoking a method using pointers

    Houses *pointer_01 = &mansion_01;
    Houses *pointer_02 = &hotel_01;

    pointer_01->get_info(); // dot gets transformed into an arrow when using pointers to invoke

    system("pause>0");
}