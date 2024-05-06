#include <iostream>
using namespace std;

int main() {

    int rows;
    int columns;
    cout<< "Enter the number of rows, the max is 3: ";
    cin>>rows;
    if (rows>3) {
        cout<<" the maximum number of rows is 3, exiting the program. ";

    }
    cout<<"Enter the number of columns, the max is 3: ";
    cin>>columns;
    if(columns>3){
        cout<<" the maximum number of columns is 3, exiting the program. ";

    }
    double** array = new double*[rows];
    for (int i=0; i<rows; ++i){
        array[i]= new double[columns];

    }
    for(int i=0; i<rows; ++i){
        for(int j=0; j<columns;++j){
            cout<<"Enter the value of the element [ " <<i <<"][  " <<j <<"] :";
            cin>> array[i][j];
        }
        cout<< "Array elements: "<<endl;
        for(int i=0; i<rows; ++i){
            for (int j=0; j<columns; ++j){
                cout<<array[i][j]<<" ";
            }
            return 0;
        }
    }
}