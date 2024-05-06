#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    srand(time(0));

int daysUntilExpiration = rand() %12;

switch(daysUntilExpiration) {
    case 0:
    cout<<"Your subscription has expired."<<endl;
    break;
    case 1:
    cout<<"your subscription expires within a day!\n";
    cout<<"Renew now and save 20%!"<<endl;
    break;
    case 2:
    case 3:
    case 4:
    case 5:
    cout<<"your subscription expires in"<<daysUntilExpiration<<"days.\n";
    cout<<"Renew now and save 10%!"<<endl;
    break;
    default:
    if(daysUntilExpiration <= 10){
        cout<< "Your subscription will expire soon. Renew now!"<<endl;
 }
 else{
    cout<<"You have an active subscription."<<endl;
 }
 break;
}
return 0;
}