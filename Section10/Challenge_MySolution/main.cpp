#include <iostream>
# include <string>
#include <iomanip>

using namespace std;

int main() {
    string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key  {"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};
    
    string message{} ;
    
    cout << "Enter your message Motherfucker: " ;
    getline(cin, message); 
    

    for (size_t i {0}; i < message.length(); ++i){
        size_t position = alphabet.find(message[i]);
       
        if (position != string::npos)
            message[i] = key[position];

    }
    
    
    cout << "This is your ciphered message: " << message << endl;
    
      for (size_t i {0}; i < message.length(); ++i){
        size_t position = key.find(message[i]);
       
        if (position != string::npos)
            message[i] = alphabet[position]; 
//  instead of using: message[i] = alphabet[position], You could have used: message[i] = alphabet.at(position). This way, if the position is out of scope, you would get an exception
    }
    
cout << "This is your deciphered message, again!: " << message << endl;

    return 0;
}