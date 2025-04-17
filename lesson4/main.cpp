#include <algorithm>
#include <fstream>
#include <iostream>
#include <string>
#include <map>
#include <fmt/ranges.h>



int main() {
    auto file = std::fstream("text.txt");
    replace(file, "hello");
    std::string word;
    while (file >> word) {

    }
    // int count = 0;
    // std::string word;
    // while (file >> word) {
    //     bool isNumber = true;
    //     for (char c : word) {
    //         if (!std::isdigit(c)) {
    //             isNumber = false;
    //             break;
    //         }
    //     }
    //     if (isNumber) {
    //         count++;
    //     }
    // }
    //
    // // auto all = std::all_of(std::begin(word), std::end(word), [](char c) {return std::isdigit(c);});
    // fmt::println("The file contains {} number(s).", count);
    // // fmt::print("The file contains {} number(s).\n", all);


    return 0;
}