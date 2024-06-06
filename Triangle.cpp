#include "Triangle.h"

int Triangle::Area(){
    return mwidth * mHeight /2;

}
Triangle::Triangle(int a, int b){
    SetValues(a, b);
}