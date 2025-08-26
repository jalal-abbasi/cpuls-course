#include <iostream>
#include <string>

using namespace std;
int main() {

    cout << "Please insert the string you would like to be sorted: " ;
    string user_response{};
    
    // why do we need to initialize the index in the for loop, but not in the range based for loop?
    // eg: for (size_t i{0} ; i < user_respose.length(); ++i)
    // eg: for (char letter : user_response)
    cin >> user_response;
    for (size_t i{0} ; i < user_response.length(); ++i){ 
        for (size_t k{0}; k < user_response.length()-i; ++k)
            cout << " ";
        for (size_t j{0} ; j < 2*i+1; ++j){
            if (j <= i)
                cout << user_response.at(j);
            else{
                cout << user_response.at(2*i-j);
            }
        }
        cout << endl;
    }
    
    return 0;
}