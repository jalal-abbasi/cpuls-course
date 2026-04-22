# include <iostream>

using namespace std;

int main() {
    
    cout << "Welcom to my house cleaning service \n" << endl;
    
    int number_of_small_rooms {0};
    cout << "How many small rooms do you have? ";
    cin >> number_of_small_rooms;
    
    int number_of_large_rooms {0};
    cout << "How many large rooms do you have? ";  
    cin >> number_of_large_rooms;
    
    cout << "\nEstimate for carpet cleaning service" << endl;
    cout << "Number of small rooms: " << number_of_small_rooms << endl;
    cout << "Number of large rooms: " << number_of_large_rooms << endl;
    
    const float price_small_room {25};
    cout << "Price for small rooms is: $" << price_small_room << endl;
    const float price_large_room {35};
    cout << "Price for large rooms is: $" << price_large_room << endl;
    
    float cost {0};
    cost = (number_of_small_rooms * price_small_room) 
    + (number_of_large_rooms * price_large_room); 
    cout << "Cost: $" << cost << endl;
    
    const float tax {0.06};
    cout << "Tax: " << tax * cost << endl;
    cout << "==================================" << endl;
    cout << "Total Estimate: $" << cost + tax * cost << endl;
    
    const int valid_days {30};
    cout << "This estimate is valide for " << valid_days <<" days.\n";
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;

}