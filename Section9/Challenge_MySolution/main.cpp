#include <iostream>
#include <vector>
#include <algorithm>
#include <typeinfo>
#include <limits>
#include <ios>

using namespace std;

int main(){
    
    vector<int> numbers{3,4,8,5,9,2};
//    vector<int> numbers;
    vector<char> options{'P','A', 'M', 'S', 'L', 'Q'};
    int is_not_integer{0};
    

    char choice;
    
    do{
      
        cout << "P - Print numbers" "\n"
        "A - Add a number" "\n" 
        "M - Display mean of the numbers" "\n" 
        "S - Display the smallest number" "\n" 
        "L - Display the largest number" "\n" 
        "Q - Quit" << endl;
        
        cout << "\n" "Enter your choice: ";
        cin >> choice;
//        cout << "\n" << choice << "\n" << endl;
        cin.sync();
        choice = toupper(choice);
        
        if (find(options.begin(),options.end(), choice)==options.end())
            cout << "Unknown selection, please try again" << endl;
            
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
            
            break;
            
        case 'M':
            
            break;
            
        case 'S':
            
            break;
        case 'L':
            
            break;
        case 'Q':
            
            break;

        }
    }
while(find(options.begin(),options.end(), choice)==options.end() || is_not_integer);
    
    
    
    
    
    return 0;
}