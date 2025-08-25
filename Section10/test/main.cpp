#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;
int main() {
    char first_name[20]{"Bjarne"};
    char last_name[20]{"Stroustrup"};
    char whole_name[50]{};
    
    
    size_t first_name_length{strlen(first_name)};
    size_t last_name_length{strlen(last_name)};
    
    strcpy(whole_name,first_name);
    strcat(whole_name, last_name);
    
    size_t whole_name_length(strlen(whole_name));
    
}