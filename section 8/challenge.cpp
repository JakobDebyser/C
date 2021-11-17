#include<iostream>
using namespace std;
int main(){
const int dollar_value{100};
const int quarter_value{25};
const int dime_value{10};
const int nickel_value{5};

int dollars{}, quarters{}, dimes{}, nickels{}, pennies{}, change_in_cents{};

cout<<"Enter an amount in cents: ";
cin>>change_in_cents;

dollars=change_in_cents/dollar_value;
change_in_cents-=dollars*dollar_value;
cout<<"dollars : "<<dollars<<endl;
quarters=change_in_cents/quarter_value;
change_in_cents-=quarters*quarter_value;
cout<<"quarters: "<<quarters<<endl;
dimes=change_in_cents/dime_value;
change_in_cents-=dimes*dime_value;
cout<<"Dimes: "<<dimes<<endl;
nickels=change_in_cents/nickel_value;
change_in_cents-=nickels*nickel_value;
cout<<"Nickels: "<<nickels<<endl;
cout<<"Pennies: "<<change_in_cents<<endl;

return 0;


}
void display_day(int daycode){
    switch(daycode){
        case 0:
            cout<<"Sunday";
            break;

        default:
            cout<<"Error - illegal day code";    
    }
}
