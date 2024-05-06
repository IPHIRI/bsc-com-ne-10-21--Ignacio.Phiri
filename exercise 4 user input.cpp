#include <iostream>
using namespace std;

int main(){
    int userInput;

    cout<<"Enter an integer value between 5 and 10";

    while (true){
        if(!(cin>>userInput)){
            cin.clear();
            cin.ignore(numeric_limits<stream size> max(),'\n');
            cout<<"you entered an invalid number, please try again";
        }
        else if(userInput<5||userInput>10){
            cout<<"please enter number between 5 and 10";
            }
            else{
                break;
            }
    }
    cout<<"your input value ("<<userInput<<") has been accepted.";

    return 0;
}