#include <iostream>
#include <string>
using namespace std;

int sum_of_digits(int n) {
    // Write your code below this line
    int divid {n/10};
    int res {n%10};
    int sum {divid + res};
    if (divid==1)
        return sum;
      
    return sum_of_digits(sum);
    
    // Write your code above this line
}



std::string reverse_string(const std::string &mystr) {
    std::string reversed;
    // Write your code below this line 
        reversed = mystr;
        int size = mystr.size();

        char *char_ptr = &reversed[0];
        
        for (int i=0; i<size/2; i++){
            *(char_ptr + i) += *(char_ptr + size - i -1);
            *(char_ptr + size - i -1) =  *(char_ptr + i) - *(char_ptr + size - i -1);
            *(char_ptr + i) = *(char_ptr + i) - *(char_ptr + size - i -1);
        }
    // Write your code abocve this line
    return reversed;
}

int main() {
    int n {};
    string str {"Jalaladdin"};
    // cout << "enter a number: ";
    // cin >> n;
    // cout << sum_of_digits(n) << endl;
    cout << reverse_string(str) << endl;
    return 0;
}