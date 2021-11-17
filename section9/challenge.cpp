#include<iostream>
#include<vector>
using namespace std;

int main(){
    
    char selection{};
    vector<int> data{};
do{
    //display Menu
    cout<<"\nP - Print numbers"<<endl;
    cout<<"A - Add a number"<<endl;
    cout<<"M - Display mean of numbers"<<endl;
    cout<<"S - Display the smallest number"<<endl;
    cout<<"L - Display the largest number"<<endl;
    cout<<"C - Clear the list"<<endl;
    cout<<"Q - quit"<<endl;
    cout<<"\nEnter your choice: ";
    cin>>selection;

    switch(selection){
        case 'P':
        case 'p':{
              if(data.size()==0){
                cout<<"\nThe list is empty"<<endl;
            }else{
                cout<<"["<<" ";
                for (int i:data){
                    cout<<i<<" ";
                }  
                cout<<"]"<<endl;
            }
            break;
        }
          
        case 'A':
        case 'a':{
             int number{};
             bool duplicate_found{false};
            
                cout<<"Enter a number to add: ";
                cin>>number;
               
                data.push_back(number);
                cout<<"\n"<<number<<" added"<<endl;
        
            break;
        }
           
        case 'M':
        case 'm':
        {
            if (data.size()==0){
                cout<<"\nUnable to calculate the mean - no data"<<endl;
            }else{
                int total{};
                for (auto number:data)total+=number;
                cout<<"\nThe average is: "<<static_cast<double>(total)/data.size()<<endl;
            }
            break;
        }
            

        case 'S':
        case 's':
        {
            
            if (data.size()==0){
                cout<<"\nUnable to determine the smallest number - the list is empty"<<endl;
                }else{
                    int smallest_number{0};
                    for (int i:data){
                         if(i<smallest_number)smallest_number=i;
                    }
                        cout<<"\nthe smallest number is: "<<smallest_number<<endl;
                    }

            break;
        }
       
        case 'L':
        case 'l':
        {
             if (data.size()==0){
            cout<<"\nUnable to determine the largest number - the list is empty"<<endl;
        }else{
            int largest_number{0};
            for (int i:data){
                if(i>largest_number)largest_number=i;
            }
            cout<<"\nthe largest number is: "<<largest_number<<endl;
        }

            break;
        }
            
        case 'C':
        case 'c':{
            data.clear();
            cout<<"\nThe list has been emptied"<<endl;
            break;
        }
        case 'Q':
        case 'q':
            break;    
        default:
            cout<<"\nUnknown selection, please try again"<<endl;
    }

}while(selection!='q'&& selection!='Q');
    cout<<"Goodbye"<<endl;

return 0;
}