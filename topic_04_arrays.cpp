#include<iostream>
using namespace std;

int main(){
    string colors[] = {"red", "blue", "yellow", "green", "black", "white"};
    cout << colors[0];
    cin >> colors[0]; //user will assign value to the first position of the array
    cout << "new value of colors[0] = " << colors[0];
    colors[1] = "pink"; //overwriting a value

    system("pause>0");
}