#include<iostream>
using namespace std;
int main(){
    const double cost_of_small_room{25};
    const double cost_of_large_room{35};
    const double tax_rate{0.06};
    const int estimate{30};
    int number_of_small_rooms;
    int number_of_large_rooms;
    double cost_of_all_rooms{0};
    double tax{0};
    cout<<"How many small rooms would you like to clean?:";

    cin>>number_of_small_rooms;

    cout<<"\nHow many large rooms would you like to clean?:";
    cin>>number_of_large_rooms;

    cout<<"\nEstimate for carpet cleaning service"<<endl;
    cout<<"Number of large rooms: "<<number_of_large_rooms<<endl;
    cout<<"Number of small rooms: "<<number_of_small_rooms<<endl;
    cout<<"Price per large room: $"<<cost_of_large_room<<endl;
    cout<<"Price per small room: $"<<cost_of_small_room<<endl;
   cost_of_all_rooms= number_of_small_rooms*cost_of_small_room+number_of_large_rooms*cost_of_large_room;
    
    cout<<"Cost: $"<<cost_of_all_rooms<<endl;
    tax=cost_of_all_rooms*tax_rate;
    cout<<"Tax: $"<<tax<<endl;
    cout<<"==============================================================="<<endl;

    cout<<"Total estimate: $"<<cost_of_all_rooms+tax<<endl;
    cout<<"This estimate is valid for "<<estimate<<" days"<<endl;

    return 0;

}

