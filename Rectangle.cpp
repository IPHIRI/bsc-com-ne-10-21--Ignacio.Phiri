#include "Rectangle.h"
int Rectangle::Area(){
    return mwidth * mHeight;

}
Rectangle::Rectangle(int a, int b){
    SetValues(a,b);
}