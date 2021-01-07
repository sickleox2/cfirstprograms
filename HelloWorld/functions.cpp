/*
#include "functions.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
int get_user_input()
{
    std::cout << "Enter a number: ";
    int number;
    std::cin >> number;
    return number;
}


int random_number(int y)
{
    srand((unsigned int)time(NULL));
    int random_num{(rand() % y)+ 1};
    return random_num;
}
void number_guess(int max, int user_num, int random_num)
{
    std::cout << "Guess a number between 1 and " << max << "\n";
    
    if (user_num != random_num){
        if (user_num > random_num){
            std::cout << "Wrong, number is too high!" << "\n";
            std::cout << "The correct number was: " << random_num << "\n";
        }
        else if (user_num < random_num){
            std::cout << "Wrong, number is too low!" << "\n";
            std::cout << "The correct number was: " << random_num << "\n";
        }
        
    }
    else if (user_num == random_num){
        std::cout << "You guessed!" << "\n";
        exit(0);
    }
}
*/
