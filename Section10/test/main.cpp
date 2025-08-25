#include <iostream>
//#include <cstring>
//#include <cctype>
#include <string>

using namespace std;
int main() {
    
//    ################# first section exercise ############
//    char first_name[20]{"Bjarne"};
//    char last_name[20]{"Stroustrup"};
//    char whole_name[50]{};
//    
//    
//    size_t first_name_length{strlen(first_name)};
//    size_t last_name_length{strlen(last_name)};
//    
//    strcpy(whole_name,first_name);
//    strcat(whole_name, last_name);
//    
//    size_t whole_name_length(strlen(whole_name));

   
//    ################ second section exercise ###########
    string unformatted_full_name {"StephenHawking"};
    string first_name{unformatted_full_name,0,7};
    string last_name{};
    
    last_name = unformatted_full_name.substr(7,7);
    
    string formatted_full_name{};
    formatted_full_name = first_name + last_name;
    
    
    formatted_full_name.insert(7," ");
    cout << formatted_full_name;
}