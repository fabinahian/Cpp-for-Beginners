#include<iostream>
using namespace std;

int main(){
    
    //different data types occupy different amount of space in memory

    int age = 25; //you can update the variable later
    float weight = 65.5;
    double balance = 123456.789;
    const double pi = 3.14; // you cannot update a constant variable
    char gender = 'f';
    string username = "Fabi";
    bool isTodaySunny = false;

    /*in cpp, you cannot have multiple data types
    in one array. So, you have the specify arrays.*/

    string colors[5] = {"red", "green", "pink", "blue", "black"}; //size = 5
    string names[] = {"john", "kelly", "sarah", "williams"}; //size = 5
    string fruits[10] = {"mango", "grapes", "banana", "apple"} //size = 10; 4 filled & 6 blank spaces



}