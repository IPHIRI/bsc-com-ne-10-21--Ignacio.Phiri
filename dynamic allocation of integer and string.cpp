#include <iostream>
#include <string>
using namespace std;

int main(){

    int* dynamicInt = new int;
    string* dynamicString = new string;

    cout<< "Enter the value to be assigned to integer: ";
    cin>> *dynamicInt;

    cout<< "Enter value to be assigned to string: ";
    cin>> *dynamicString;

    cout<< "The value of the dynamic integer is: "<< *dynamicInt <<endl;
    cout<< "The value of the dynamic string is: "<< *dynamicString <<endl;
}