//
// Created by Anastasiia Kravchenko on 14.03.2025.
//

#ifndef MAIN_H
#define MAIN_H
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cstdlib>
#include <ctime>


class MyClass {
public:
    // Function to print a string view
    void printStringView(std::string_view sv) {
        std::cout << sv;
    }
public:
    // Function to append " there" to a string and print it
    void append(std::string s) {
        s += " there";
        std::cout << s << std::endl;
    }
public:
    // Task 1: Greeting based on input
    void task1() {
        auto str = std::string();
        std::cout << "Input your name: ";
        std::cin >> str;
        if (str == "Einstein") {
            std::cout << "I know you!\n";
        } else {
            std::cout << "Greetings.\n";
        }
    }
public:
    // Task 2: Number guessing game
    void task2() {
        srand(static_cast<unsigned int>(time(nullptr))); // Seed the random number generator
        auto num = int();
        auto ran = std::rand() % 100 + 3;
        while (num != ran) {
            std::cout << "Guess a number: ";
            std::cin >> num;
            if (num > ran) {
                std::cout << "Too big. Try lower.\n";
            }
            if (num < ran) {
                std::cout << "Too small. Try higher.\n";
            }
        }
        std::cout << "Congratulations.\n";
    }
public:
    // Function to check if a number is prime
    bool isPrime(int number) {
        if (number < 2) return false;
        for (int i = 2; i * i <= number; i++) {
            if (number % i == 0) return false;
        }
        return true;
    }
public:
    // Task 3: Prime number checker
    void task3() {
        auto num = int();
        std::cout << "Please input the numbers.\n";
        std::cout << "Type in a negative number to stop.\n";
        auto numbersToCheckForPrimality = std::vector<int>();
        while (std::cin >> num && num >= 0) numbersToCheckForPrimality.push_back(num);
        std::cout << std::endl;
        for (auto i : numbersToCheckForPrimality) {
            if (isPrime(i)) std::cout << i << " is prime." << std::endl;
            else std::cout << i << " is not prime." << std::endl;
        }
    }
};



#endif //MAIN_H
