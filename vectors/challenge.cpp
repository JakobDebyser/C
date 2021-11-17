#include<iostream>
#include<vector>
using namespace std;

int main(){
vector<int> vector1;
vector<int> vector2;
vector1.push_back(10);
vector1.push_back(20);
cout<<"\nvector1:"<<endl;
cout << vector1.at(0)<<endl;
cout << vector1.at(1)<<endl;
cout << "Vector1 size: "<<vector1.size()<<endl;
vector2.push_back(100);
vector2.push_back(200);
cout<<"\nvector2:"<<endl;
cout << vector2.at(0)<<endl;
cout << vector2.at(1)<<endl;
cout << "Vector2 size: "<<vector2.size()<<endl;

vector<vector<int>>vector_2d;
vector_2d.push_back(vector1);
vector_2d.push_back(vector2);
cout<<"Elements in vector_2d: "<<endl;
cout<<vector_2d.at(0).at(0)<<" "<<vector_2d.at(0).at(1)<<endl;
cout<<vector_2d.at(1).at(0)<<" "<<vector_2d.at(1).at(1)<<endl;

cout<<"Changed vector1's first element to 1000"<<endl;
vector1.at(0)=1000;
cout<<"Elements in vector_2d: "<<endl;
cout<<vector_2d.at(0).at(0)<<" "<<vector_2d.at(0).at(1)<<endl;
cout<<vector_2d.at(1).at(0)<<" "<<vector_2d.at(1).at(1)<<endl;
cout<<"Elements in vector1: "<<endl;
cout << vector1.at(0);
cout << "\n"<<vector1.at(1)<<endl;

return 0;
}