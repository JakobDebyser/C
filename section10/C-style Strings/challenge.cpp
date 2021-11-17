#include <string>
#include<iostream>
using namespace std;


int main()
{
    string alphabet{"$ abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789"};
    string key     {" $XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr|@#{[^{"};
    string input{};
    cout<<"\nEnter your secret message: ";
    getline(cin,input);

    string encrypted_message{};

    cout<<"\nEncrypting message..."<<endl;

    for(char c:input){
     int position=alphabet.find(c);
        if(position!=string::npos){
            char new_character{key.at(position)};
            encrypted_message+=new_character;
        }else{
            encrypted_message+=c;
        }
     
    }

    cout<<"\nEncrypted message: "<<encrypted_message<<endl;

    cout<<"\nDecrypting message..."<<endl;

    string decrypted_message{};
    for(char c:encrypted_message){
        int position=key.find(c);
        if(position!=string::npos){
            char new_char{alphabet.at(position)};
            decrypted_message+=new_char;
        }else{
            decrypted_message+=c;
        }
    }

    cout<<"\nDecrypted message: "<<decrypted_message<<endl;
    cout<<endl;
    
    return 0;
}