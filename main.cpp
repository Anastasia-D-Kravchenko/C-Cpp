//
// Created by Anastasiia Kravchenko on 14.03.2025.
//
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <ranges>

#include "lesson1/main.h"
#include "lesson1/ShortTest1.h"
#include "lesson2/iterator.h"

int main() {
    // std::cout << "hello world\n";
    //
    // auto text = std::string();
    // std::cin >> text;
    // std::cout << text << std::endl;
    //
    // auto str = std::vector<std::string>();
    // str.push_back("hello world");
    // str.push_back("hello");
    // str.push_back("world");
    // for (auto i : str) std::cout << i << std::endl;
    // str.pop_back();
    // for (auto i : str) std::cout << i << std::endl;
    //
    // auto hi = int(4);
    // switch (hi) {
    //     case 4: std::cout << "hi\n"; break;
    //     default: std::cout << "hi"; return 0;
    // }
    //
    // std::string text1 = "long sentance with some meaning";
    // for (auto i = 0; i < text1.size(); i++) std::cout << text1[i];
    // std::cout << std::endl;
    // for (auto i : text1) std::cout << i;
    // std::cout << std::endl;
    // std::vector<char> rev;
    // for (int i = text1.size() - 1; i >= 0; i--) rev.push_back(text1[i]);
    // for (auto i : rev) std::cout << i;
    // std::cout << std::endl;
    //
    // text = std::string();
    // auto first = std::string("Programming");
    // auto second = std::string("in");
    // auto third = std::string("C++");
    // auto fourth = std::string(", Python");
    // for (auto chr : first) text += chr;
    // text += ' ';
    // for (auto chr : second) text += chr;
    // text += ' ';
    // for (auto chr : third) text += chr;
    // text += fourth;
    // std::cout << text;
    //
    // text = std::string("Programming");
    // std::cout << "\nkg stands for kilo" << text.substr(3, 4) << std::endl;
    //
    // auto vec = std::vector<int>{3, 5, 1, 4, 2};
    // std::ranges::reverse(vec);
    // for (auto element : vec) {
    //     std::cout << element << ' ';
    // }
    // std::cout << std::endl;
    //
    // std::string myString = "Hello, string view!";
    // MyClass myObject;
    // myObject.printStringView(myString);
    // const char* cString = "C-style string";
    // myObject.printStringView(cString);
    // std::cout << std::endl;
    //
    // auto vec1 = std::vector<int>{1, 2, 3};
    // std::vector<int> vec2 = vec1;
    // for (auto element : vec2) std::cout << element << ' ';
    // std::cout << std::endl;
    // vec1[1] = 10;
    // std::cout << vec2[1];
    // std::cout << vec1[1] << std::endl;
    //
    // auto str1 = std::string("hello");
    // myObject.append(str1);
    // std::cout << str1;
    // std::cout << std::endl;
    //
    // vec1 = std::vector<int>{1, 2, 3};
    // vec2 = vec1;
    // std::cout << (vec1 == vec2);
    // std::cout << std::endl;
    //
    // vec1 = std::vector<int>{1, 2, 3};
    // vec2 = std::vector<int>{3, 2, 1};
    // std::cout << (vec1 == vec2);
    // std::cout << std::endl;
    //
    // auto s1 = std::string("hello");
    // auto s2 = std::string("olleh");
    // std::cout << (s1 == s2);
    // std::cout << std::endl;
    //
    // s1 = std::string("hello");
    // s2 = std::string("he");
    // s2 += "llo";
    // std::cout << (s1 == s2);
    // std::cout << std::endl;
    //
    // auto words = std::vector<std::string>{
    //     "a", "quick", "brown", "fox"
    // };
    //
    // std::ranges::sort(words);
    // for (auto word : words) std::cout << word;
    // std::cout << std::endl;
    //
    // std::ranges::reverse(words);
    // for (auto word : words) std::cout << word;
    // std::cout << std::endl;
    //
    // std::cout << words.back() << '\n';
    // std::cout << words.front().front();
    // std::cout << std::endl;
    //
    // myObject.task1();
    // myObject.task2();
    // myObject.task3();
    //
    // ShortTest1 myObject2;
    // myObject2.shorty();
    //
    //
    // str1 = std::string();
    // std::cout << "Input your name: ";
    // std::cin >> str1;
    // if (str1 == "Einstein") {
    //     std::cout << "I know you!";
    // } else {
    //     std::cout << "Greetings.";
    // }
    //
    // std::cout << "Hello, world!" << "\n";
    //
    // auto weight = 12.5;
    // auto height = 12;
    // // std::string hi = "Hi";
    // auto hi1 = std::string("Hello, World!");
    // std::cout << "Weight " << weight << "\n";
    // std::cout<< "Height " << height << "\n";
    // std::cout << height / weight << "\n";
    // std::cout << hi1 << std::endl;
    //
    // std::cin >> weight;
    // std::cout << "Weight " << weight << "\n";
    // std::cin >> height;
    // std::cout << "Height " << height << "\n";
    // std::cout << height / weight << "\n";
    //
    // std::cin >> weight
    //          >> height;
    // std::cout << "Weight "
    //           << weight << "\n";
    // std::cout << "Height "
    //           << height << "\n";
    //
    // return 0;

    auto const word = std::string("hello");
    auto text = word.back() + word + word.front(); // ohelloh
    std::ranges::sort(text); // abcdefghigknlmoprt => ehhlloo
    std::cout << text << "\n";
    std::cout << word.size() << "\n"; // 5

    auto str = std::string();
    return 0;
}