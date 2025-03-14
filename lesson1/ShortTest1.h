//
// Created by Anastasiia Kravchenko on 14.03.2025.
//

#ifndef SHORTTEST1_H
#define SHORTTEST1_H
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>


class ShortTest1 {
public:
    int shorty() {
    // Part 1: Vector of strings, sorting, and reversing
    auto words = std::vector<std::string>{
        "a", "quick", "brown", "fox"
    };

    std::sort(words.begin(), words.end()); // Use std::sort
    for (auto word : words) std::cout << word;
    std::cout << std::endl;

    std::reverse(words.begin(), words.end()); // Use std::reverse
    for (auto word : words) std::cout << word;
    std::cout << std::endl;

    std::cout << words.back() << '\n';
    std::cout << words.front().front() << '\n';
    std::cout << '\n';

    // Part 2: String comparison
    std::string str1;
    std::string str2;
    std::cin >> str1 >> str2;
    if (str1 > str2) {
        std::cout << str1;
    } else if (str2 > str1) {
        std::cout << str2;
    } else {
        std::cout << "same";
    }
    std::cout << '\n';

    // Part 3: String manipulation
    auto word = std::string();
    std::cin >> word;
    std::cout << word[0] << std::endl;
    std::cout << "'" << word[word.size() - 1] << "'" << std::endl;
    std::cout << word.size() << std::endl;
    std::cout << "\"" << word[word.size() / 2] << "\"" << std::endl;
    std::cout << "[" << word << "]" << std::endl;
    std::vector<char> word2;
    for (auto i : word) word2.push_back(i);
    std::sort(word.begin(), word.end());
    for (auto i : word2) std::cout << i;
    std::cout << std::endl;

    // Part 4: Switch statement based on input number
    int num;
    std::cin >> num;

    switch (num) {
        case 0: std::cout << "zero" << std::endl; break;
        case 1: std::cout << "one" << std::endl; break;
        case 2: std::cout << "two" << std::endl; break;
        case 3: std::cout << "three" << std::endl; break;
        case 4: std::cout << "four" << std::endl; break;
        case 5: std::cout << "five" << std::endl; break;
        case 6: std::cout << "six" << std::endl; break;
        case 7: std::cout << "seven" << std::endl; break;
        case 8: std::cout << "eight" << std::endl; break;
        case 9: std::cout << "nine" << std::endl; break;
        default:
            std::cerr << "Incorrect input! Try again by restarting the program" << std::endl;
            return 1;
    }

    // Part 5: Vector comparison
    std::vector<int> mas(10);
    for (int i = 0; i < 10; ++i) {
        std::cin >> mas[i];
    }

    bool different = false;
    for (int i = 0; i < mas.size() / 2; ++i) {
        for (int j = mas.size() / 2; j < mas.size(); ++j) {
            if (mas[i] != mas[j]) {
                different = true;
                break;
            }
        }
        if (different) {
            break;
        }
    }

    if (different) {
        std::cout << "dif" << std::endl;
    } else {
        std::cout << "same" << std::endl;
    }

    return 0; // Indicate successful execution
}
};



#endif //SHORTTEST1_H
