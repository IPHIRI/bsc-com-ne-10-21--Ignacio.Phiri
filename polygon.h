#pragma once

class Polygon {
    protected:
    int width;
    int mHeight;

    
    public:
    void setValues(int width, int height);
    virtual int Area() = 0;
    void PrintArea();
};