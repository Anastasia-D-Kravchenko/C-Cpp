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
#include <map>
#include <cassert>
#include <set>
#include <fmt/core.h>

#include "lesson1/main.h"
#include "lesson1/ShortTest1.h"
#include "lesson2/iterator.h"

// namespace v1 {
//     void printLongestString(std::vector<std::string> vec) {
//         auto longest = std::ranges::max(vec, {}, std::string::size);
//         std::cout << "Longest string using std::ranges::max: " << longest << std::endl;
//     }
// }
//
// namespace v2 {
//     void printLongestString(std::vector<std::string> vec) {
//         auto longest = *std::ranges::max_element(vec, {}, [](std::string s){return std::ranges::size(s);});
//         std::cout << "Longest string using std::ranges::max_element: " << longest << std::endl;
//     }
// }
//
// namespace v3 {
//     void printLongestString(std::vector<std::string> vec) {
//         auto shortest = std::ranges::min(vec, [](std::string a, std::string b){return a.size() > b.size();});
//         std::cout << "Shortest string using std::ranges::min: " << shortest << std::endl;
//     }
// }
//
// namespace v4 {
//     void printLongestString(std::vector<std::string> vec) {
//         auto shortest = *std::ranges::min_element(vec, [](std::string a, std::string b){return a.size() > b.size();});
//         std::cout << "Shortest string using std::ranges::min_element: " << shortest << std::endl;
//     }
// }

// double dotProduct(const std::vector<double>& vec1, const std::vector<double>& vec2) {
//     assert(vec1.size() == vec2.size());
//     double result = 0.0;
//     for (size_t i = 0; i < vec1.size(); i++) result += vec1[i] * vec2[i];
//     return result;
// }
//
//
//
// void displayEveryNth(const std::vector<int>& vec, int n) {
//     for (auto it = vec.begin(); it < vec.end(); it += n) {
//         std::cout << *it << " ";
//     }
//     std::cout << std::endl;
// }
//
// void displayEveryNth(const std::set<int>& s, int n) {
//     auto it = s.begin();
//     int count = 0;
//     while (it != s.end()) {
//         if (count % n == 0) {
//             std::cout << *it << " ";
//         }
//         ++it;
//         ++count;
//     }
// }

int main() {

    fmt::println(
                "[{}]\n[{}]\n[{}]\n[{}]",
                reduceAdjacentWhitespaces("Abc"),
                reduceAdjacentWhitespaces("A b c"),
                reduceAdjacentWhitespaces("   A\tb c      "),
                reduceAdjacentWhitespaces("A\t\tb\n \n  \t c")
        );

    // std::vector<std::string> words = {"apple", "banana", "cherry", "date", "elderberry"};
    //
    // v1::printLongestString(words);
    // v2::printLongestString(words);
    // v3::printLongestString(words);
    // v4::printLongestString(words);
    //
    // return 0;


    // std::vector<int> numbs(7);
    // std::vector<int> num;
    // for (auto i = 0; i < 7; i++) std::cin >> numbs[i];
    // for (auto i = 0; i < 7; i++) {
    //     if (numbs[i] != *std::ranges::max_element(numbs) && numbs[i] != *std::ranges::min_element(numbs)) {
    //         num.push_back(numbs[i]);
    //     }
    // }
    // for (auto i : num) std::cout << i << " ";


    // std::vector<double> vec1 = {1.0, 2.0, 3.0};
    // std::vector<double> vec2 = {4.0, 5.0, 6.0};
    //
    // double result = dotProduct(vec1, vec2);
    // std::cout << "Dot product: " << result << std::endl;
    //
    //
    //
    // std::vector<int> vec = {1, 2, 3, 4, 5, 6, 7};
    // std::cout << "Vector: ";
    // displayEveryNth(vec, 2);
    //
    // std::set<int> s = {1, 2, 3, 4, 5, 6, 7};
    // std::cout << "Set: ";
    // displayEveryNth(s, 3);
    //
    //
    // return 0;
}

int past() {
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






                                       //---------------------------------Preparation 1---------------------------------

//    auto const word = std::string("hello");
//    auto text = word.back() + word + word.front(); // ohelloh
//    std::ranges::sort(text); // abcdefghigknlmoprt => ehhlloo
//    std::cout << text << "\n";
//    std::cout << word.size() << "\n"; // 5
//
//    auto str = std::vector<std::string>();
//    auto temp = std::string();
//    for ( int i = 0; i < 3; i++) {
//        std::cin >> temp;
//        str.push_back(temp);
//    }
//    auto sorted = str;
//    std::ranges::sort(str);
////    auto bol = false;
////    for ( int i = 0; i < 3; i++) {
////        std::cout << sorted[i] << " " << str[i] << "\n";
////        if ( sorted[i] != str[i] ) {
////            bol = true;
////        }
////    }
//    if ( !std::ranges::equal(str, sorted) ) std::cout << "#"; // not alp
//    else std::cout << "%";


                                       //---------------------------------Preparation 2---------------------------------

//    auto const words = std::vector<std::string>{"hello", "there"};
//    auto word = words[0];
//    std::ranges::sort(word);
//    std::cout << words.front() << "\n";
//    std::cout << word << "\n";
//
//    auto word1 = std::string();
//    auto word2 = std::string();
//    std::cin >> word1;
//    std::cin >> word2;
//    if ( word1.size() > word2.size() ){
//        std::cout << word1;
//    } else if ( word1.size() < word2.size() ){
//        std::cout << word2;
//    }else{
//        if ( word1.front() < word2.front() ){ // A 65 B 66 B > A the bigger the later
//            std::cout << word1;
//        } else{
//            std::cout << word2;
//        }
//    }



                                       //---------------------------------Preparation 3---------------------------------

//    auto word = std::string("hello");
//    auto also = word;
//    std::ranges::reverse(word);
//    std::ranges::sort(also);
//    std::cout << word << '\n';
//    std::cout << also;
//


//    auto text = std::string("helloworld");
//
//    auto map  = std::map<char, int>();
//    for (auto c : text) map[c] += 1;
//
//    for (auto [k, v] : map) {
//        std::cout << k << " : " << v << "\n";
//    }
//
//
//    auto vec = std::vector<int>{11, 22, 33, 22, 33, 11};
//
//    auto middle = vec.begin() + vec.size() / 2;
//
//    std::ranges::sort(vec.begin(), middle);
//    std::ranges::sort(middle, vec.end());
//
//    auto bothHalvesEqual = std::ranges::equal(
//            vec.begin(), middle,
//            middle, vec.end()
//    );
//
//    std::cout << bothHalvesEqual;
//
//
//    auto numbers = std::vector<int>(5, 1);
//
//    auto duplicates = std::ranges::unique(numbers);
//    numbers.erase(duplicates.begin(), duplicates.end());
//
//    for ( auto i = 0; i < duplicates.size(); i++){
//        std::cout << duplicates[i];
//    }

    // auto numbs = std::vector<int>{45,32,67,68,98,1,2, 102, 202};
    // std::ranges::sort(numbs);
    // for( auto i : numbs ){
    //     std::cout << i << "\n";
    // }

    // auto numbs = std::vector<int>(3);
    // for ( auto i = 0; i < 3; i++) std::cin >> numbs[i];
    // auto check = numbs;
    // std::ranges::sort(numbs);
    // if ( std::ranges::equal(numbs, check)) std::cout << "#";
    // else std::cout << "%";
}