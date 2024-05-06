#pragma once
#include <iostream>
using namespace std;

class Box{
    public: 

    Box();
    Box(const double newlength, const double newbreadth, const double newheight);

    ~Box();
    double Getvolume();
    void Setlength(double len);
    void setbreadth(double bre);
    void Setheight(double hei);

    //overload + operator to add Box objects.
    Box operator+ (const Box& b);

    private:
    double length;  //length of a box
    double breadth; //breadth of a box
    double height; //height of a box
} ;