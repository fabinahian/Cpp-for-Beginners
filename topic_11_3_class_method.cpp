#include <iostream>
using namespace std;

/*Class methods describes the behaviour of a class. Class method is a function.*/

class Houses // class definition
{
public:
    string Building_name;
    int Bedrooms;
    int Rent;

    Houses(string building_name, int bedrooms, int rent) // constructor definition
    {
        Building_name = building_name;
        Bedrooms = bedrooms;
        Rent = rent;
    }

    void get_info() // method definition
    {
        cout << "Name: " << Building_name << endl;

        /*We don't need "Houses.Name since Name is already available inside this class."*/

        cout << "Number of bedrooms: " << Bedrooms << endl;
        cout << "Rent per month: " << Rent << endl;
    }
};

int main()
{
    Houses house_01("Oporajita", 3, 50000);
    Houses house_02("Togor", 2, 40000);

    house_01.get_info();

    system("pause>0");
}