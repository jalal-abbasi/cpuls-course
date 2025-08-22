#include <iostream>
#include <vector>
using namespace std;

int main(){
    
//    vector<int> numbers{2,3,4,8,5,9};
    vector<int> numbers;

    cout << "P - Print numbers" "\n"
    "A - Add a number" "\n" 
    "M - Display mean of the numbers" "\n" 
    "S - Display the smallest number" "\n" 
    "L - Display the largest number" "\n" 
    "Q - Quit" << endl;
    
    cout << "\n" "Enter your choice: ";
    
    char choice;
    
    cin >> choice;
    choice = toupper(choice);
    
    
    switch (choice){
        case 'P':{
            if (numbers.size() !=0){
                cout << "[ ";
                for (int number : numbers)
                    cout << number << " " ;
                    
                cout << "]";
            } 
            else
                cout << "[] - the list is empty" << endl;
            break;
        }
        case 'A':
            cout << "\n""Bye" ;
            break;
        case 'M':
            cout << "\n""Bye2" ;
            break;
        case 'S':
            break;
        case 'L':
            break;
        case 'Q':
            break;
    }
    return 0;
}