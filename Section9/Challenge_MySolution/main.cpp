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
            cout << "\n""Type an integer you want to add to the list: " ;
            int user_int;
            cin >> user_int;
            if (cin.fail()){
                cout << "Wrong input, you must input an integer! Try again." << endl;
                is_not_integer=1;
            }
                
            else{
                numbers.push_back(user_int);
                cout << user_int << " added. " << endl;
            }

            break;
            
        case 'M':
            if (numbers.size() !=0){
                int average{0};
                for (int number : numbers){
                    average += number;
                }
                average /= numbers.size();
                cout << "The average is : "<< average << endl;
                
            } 
            else
                cout << "Unable to calculate the mean - no data" << endl;

            break;
            
        case 'S':
            if (numbers.size() !=0){
                int min{numbers[0]};
                for (int number : numbers){
                    if (number < min)
                        min = number;
                }
                
                cout << "The smallest number is : "<< min << endl;
                
            } 
            else
                cout << "Unable to determine the smallest number - list is empty" << endl;

            break;
        case 'L':
            if (numbers.size() !=0){
                int max{numbers[0]};
                for (int number : numbers){
                    if (number > max)
                        max = number;
                }
                
                cout << "The largest number is : "<< max << endl;
                
            } 
            else
                cout << "Unable to determine the largest number - list is empty" << endl;

            break;
        case 'Q':
            
            break;

        }
    }
while(find(options.begin(),options.end(), choice)==options.end() || is_not_integer);
    
    
    
    
    
    return 0;
}