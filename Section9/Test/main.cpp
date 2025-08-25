#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main() {
    
//    vector<int> vec {1,2,3};
//    vector<int> first_elements;
//    int previous{0};
//    int result{0};
//    
//    for (int first_elem : vec){
//        first_elements.push_back(first_elem);
//        for (int second_elem: vec){
//            if (second_elem != first_elem && find(first_elements.begin(), first_elements.end(), second_elem)==first_elements.end()){
//                result += first_elem * second_elem;
//            }
//        }
//        previous = first_elem;
//        
//    }
//    int result{0};
//    for (unsigned first_index{0}; first_index < vec.size(); first_index++){
//        for (unsigned second_index{first_index+1}; second_index < vec.size(); second_index++){
//            result += vec[first_index] * vec[second_index];
//        }
//        cout << result << endl;
//    }

    int temperature;
    cout << "Enter a temperature: ";
    cin >> temperature;
    if (temperature < 50);
       cout << "It's cold!" << endl;
    if (temperature > 50)
       cout << "It's hot!" << endl;
    else
       cout << "Maybe it's raining?"; 
    return 0;
}