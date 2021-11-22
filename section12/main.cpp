#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){
    int num{10};
    cout<<"\nValue of num is "<<num<<endl;
    cout<<"Size of num is "<<sizeof num<<endl;
    cout<<"Address of num is "<<&num<<endl;
    int *p;
    cout<<"\nValue of p is "<<p<<endl;
    cout<<"Size of p is "<<sizeof p<<endl;
    cout<<"Address of p is "<<&p<<endl;

    return 0;
}