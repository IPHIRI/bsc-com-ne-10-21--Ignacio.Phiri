#pragma once

#include "Box.h"
Box::Box(){
    length = 0.0;
    breadth = 0.0;
    height = 0.0;
}

Box::Box(const double newlength, const double newbreadth, const double newheight) {
    length = newlength;
    breadth = newbreadth;
    height = newheight;
}
 
 Box::~Box(){

 }
 double Box::Getvolume(){
    return length*breadth*height;
 }

 void Box::Setlength(double len) {
    length = len;
 }
 void Box::setbreadth(double bre) {
    breadth = bre;
 }
 void Box::Setheight(double hei){
    height = hei;
 }

 //overload + operator to add two box objects.
 Box Box::operator+(const Box& b) {
    Box box;

    box.length = this->length  + b.length;
    box.breadth = this->breadth + b.breadth;
    box.height = this->height + b.height;
    return box;
 }

 int main(){
    Box Box1; //declare box1 of type box
    Box Box2; //declare box2 of type box
    Box Box3; //declare box3 of type box
    double volume = 0.0; //store the volume of a box here

    //box1 specification
    Box1.Setlength(6.0);
    Box1.Setbreadth(7.0);
    Box1.Setheight(5.0);

    //volume of box 1
    volume = Box1.Getvolume();
    cout<<"volume of Box1 : "<<volume<<endl;

    //box2 specification
    Box2.Setlength(12.0);
    Box2.Setbreadth(13.0);
    Box2.Setheight(10.0);

    //volume of box 2
    volume = Box2.Getvolume();
    cout<<"volume of Box2 "<<volume<<endl;

    //add two object as follows;
    Box3 = Box1 + Box2;

    //volume of box 3
    volume = Box3.Getvolume();
    cout<< "volume of Box3 : "<<volume<<endl;

    return 0;
 }