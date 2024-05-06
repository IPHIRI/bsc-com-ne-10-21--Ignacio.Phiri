#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    srand(time(0));
    int daysUntilExpiration = rand() % 12;

    if(daysUntilExpiration <= 10) {
        cout<< "your  subscription will expire soon, Renew now!" <<endl;
 } 
 else if (daysUntilExpiration <= 5) {
    cout << "your subscription expires in" <<daysUntilExpiration<<"days.\n";
    cout<< "renew now and save 10%"<<endl;
 } 
 else if(daysUntilExpiration == 1){
    cout<< "your subscription expires within a day!\n";
    cout<<"renew now and save 20%!"<<endl;
 }
 else if(daysUntilExpiration == 0){
    cout<<"your subscription has expired."<<endl;
 }
 else{
    cout<<"you have an active subscription."<<endl;

    
 }

 return 0;
 
}