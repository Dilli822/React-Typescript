// Program to illustrate the working of 
// public and private in c++ class
#include<iostream>
using namespace std;
class Room {
    private:
    double length;
    double breadth;
    double height;

    public:
    // function to initialize private variables
    void initData(double len, double brth, double hgt){
        length = len;
        breadth = brth;
        height = hgt;
    }

    double calculateArea(){
        return length * breadth * height;
    }

    double calculateVolume(){
        return length * breadth * height;
    }
};

int main(){
    // create object of Room Class
    Room room1;

    // pass the values of private variables as arguments
    room1.initData(23.23, 232.23, 45.345);

    cout << "Area of Room = " << room1.calculateArea() << endl;
    cout << "Volume of Room = " << room1.calculateVolume() << endl;
    return 0;
}