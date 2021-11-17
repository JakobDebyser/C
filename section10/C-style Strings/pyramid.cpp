#include <string>
#include<iostream>

using namespace std;

int main()
{
    string user_input{},pyramid{""}; 

    cout<<"Please enter a sequence of characters: ";
    cin>>user_input;
    string space(user_input.length()-1,' ');
    for (int i{0};i<user_input.length();i++){
        pyramid=user_input.substr(0,i+1);
        cout<<space<<pyramid;
        if(pyramid.size()==1){
            cout<<space;
        }else{
            for(auto j{pyramid.length()};j>0;j--){
                cout<<pyramid.at(j-1);
            }
        }
        space.erase(0,1);
        cout<<endl;
    }

    cout<<endl;
    return 0;
}