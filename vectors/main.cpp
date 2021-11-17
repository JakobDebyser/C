#include<iostream>
#include<vector>

using namespace std;

int main(){
vector <char> vowels1;
vector <char> vowels{'a','b','c'};
cout<<vowels[0]<<endl;
cout<<vowels[2]<<endl;
vowels.push_back('d');
cout<<vowels[3]<<endl;
cout<<"There are "<<vowels.size()<< " vowels in the vector"<<endl;

return 0;
}