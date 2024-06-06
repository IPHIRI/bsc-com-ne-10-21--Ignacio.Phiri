#pragma once
#include "Polygon.h"
#include <iostream>
using namespace std;

void Polygon:: SetValues(int width, int height){
    mwidth = width;
    mHeight = height;

}

void Polygon::PrintArea(){
    cout<< this -> Area()  << '\n';

}