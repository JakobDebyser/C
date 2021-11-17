#include<string>
#include<iostream>
using namespace std;
int main()
{
    string str{"Isaac Newton"};
    cout<<str<<endl;
    str.erase(0,6);
    cout<<str<<endl;
    return 0;
}