
#include <iostream>
/*
int max_number_var{ };
int max_number()
{
    std::cout << "Max number? ";
    std::cin >> max_number_var;
    return max_number_var;
}

#include <string>
int multiplication()
{
    std::cout << "Enter an integer: ";
    int first_num{ };
    std::cin >> first_num;
    std::cout << "Enter another integer: ";
    int second_num{ };
    std::cin >> second_num;
    std::cout << "Result is: " << first_num * second_num << "\n";
    return 0;
}
int main()
{
    std::cout << "Do you want to multiply?";
    std::string user_input{ };
    std::cin >> user_input;
    if (user_input == "Yes") {
        multiplication();
    } else {
        return 0;
    }
}



int main()
{
    
    number_guess(max_number(), get_user_input(), random_number(max_number_var));
    
}
 */

#include <iostream>

int main()
{
    std::cout << "bool:\t\t" << sizeof(bool) << " bytes\n";
    std::cout << "char:\t\t" << sizeof(char) << " bytes\n";
    std::cout << "wchar_t:\t" << sizeof(wchar_t) << " bytes\n";
    std::cout << "char16_t:\t" << sizeof(char16_t) << " bytes\n"; // C++11 only
    std::cout << "char32_t:\t" << sizeof(char32_t) << " bytes\n"; // C++11 only
    std::cout << "short:\t\t" << sizeof(short) << " bytes\n";
    std::cout << "int:\t\t" << sizeof(int) << " bytes\n";
    std::cout << "long:\t\t" << sizeof(long) << " bytes\n";
    std::cout << "long long:\t" << sizeof(long long) << " bytes\n"; // C++11 only
    std::cout << "float:\t\t" << sizeof(float) << " bytes\n";
    std::cout << "double:\t\t" << sizeof(double) << " bytes\n";
    std::cout << "long double:\t" << sizeof(long double) << " bytes\n";
    
    return 0;
}
