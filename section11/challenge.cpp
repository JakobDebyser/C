#include<iostream>
#include<vector>
using namespace std;
void display_menu();
char user_input();
void display_data(const vector<int>&);
void add_number(vector<int>&);
void calculate_average(const vector<int>);
void calculate_smallest_number(const vector<int>);
void calculate_biggest_number(const vector<int>);
void clear_data(vector<int>&);
void unknown_selection();
void ending();
int main(){
    
    char selection{};
    vector<int> data{};
do{
    //display Menu
    display_menu();
    selection=user_input();
    switch(selection){
        case 'P':
        case 'p':
            display_data(data);
            break; 
        case 'A':
        case 'a':
            add_number(data);
            break; 
        case 'M':
        case 'm':
            calculate_average(data);
            break;
        case 'S':
        case 's':
            calculate_smallest_number(data);
            break;      
        case 'L':
        case 'l':
            calculate_biggest_number(data);
            break;           
        case 'C':
        case 'c':
            clear_data(data);
            break;       
        case 'Q':
        case 'q':
            break;    
        default: 
            unknown_selection();    
    }
}while(selection!='q'&& selection!='Q');
    ending();
return 0;
}
void display_menu(){
    cout<<"\nP - Print numbers"<<endl;
    cout<<"A - Add a number"<<endl;
    cout<<"M - Display mean of numbers"<<endl;
    cout<<"S - Display the smallest number"<<endl;
    cout<<"L - Display the largest number"<<endl;
    cout<<"C - Clear the list"<<endl;
    cout<<"Q - quit"<<endl;
}
char user_input(){
    char selection{};
    cout<<"\nEnter your choice: ";
    cin>>selection;
    return selection;
}
void display_data(const vector<int> &data){
    
    if(data.size()==0){
        cout<<"\nThe list is empty"<<endl;
            }else{
                cout<<"["<<" ";
                for (int i:data){
                    cout<<i<<" ";
                }  
                cout<<"]"<<endl;
                }
            
}
void add_number(vector<int> &data)
{
    int number{};
    cout<<"Enter a number to add: ";
    cin>>number;           
    data.push_back(number);
    cout<<"\n"<<number<<" added"<<endl;     
}
void calculate_average(const vector<int>data){
    if (data.size()==0){
        cout<<"\nUnable to calculate the mean - no data"<<endl;
    }else{
        int total{};
        for (auto number:data)total+=number;
        cout<<"\nThe average is: "<<static_cast<double>(total)/data.size()<<endl;
        }
}
void calculate_smallest_number(const vector<int>data){
    if (data.size()==0){
        cout<<"\nUnable to determine the smallest number - the list is empty"<<endl;
    }else{
        int smallest_number{0};
        for (int i:data){
            if(i<smallest_number)smallest_number=i;
        }
    cout<<"\nthe smallest number is: "<<smallest_number<<endl;
                    }
}
void calculate_biggest_number(const vector<int>data){
     if (data.size()==0){
            cout<<"\nUnable to determine the largest number - the list is empty"<<endl;
        }else{
            int largest_number{0};
            for (int i:data){
                if(i>largest_number)largest_number=i;
            }
            cout<<"\nthe largest number is: "<<largest_number<<endl;
        }
}
void clear_data(vector<int> &data){
    data.clear();
    cout<<"\nThe list has been emptied"<<endl;
}
void unknown_selection(){
    cout<<"\nUnknown selection, please try again"<<endl;
}
void ending(){
    cout<<"Goodbye"<<endl;
}