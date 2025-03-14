
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main() {
    // // // auto words = std::vector<std::string>{
    // // //     "a", "quick", "brown", "fox"
    // // // };
    // // //
    // // // std::ranges::sort(words);
    // // // for ( auto word : words ) std::cout << word;
    // // // std::cout << std::endl;
    // // //
    // // // std::ranges::reverse(words);
    // // // for ( auto word : words ) std::cout << word;
    // // // std::cout << std::endl;
    // // //
    // // // std::cout << words.back() << '\n';
    // // // std::cout << words.front().front();
    // // // std::cout << '\n';
    // // //
    // // //
    // // // std::string str1;
    // // // std::string str2;
    // // // std::cin >> str1 >> str2;
    // // // if (str1 > str2) {
    // // //     std::cout << str1;
    // // // }else if (str2 > str1) {
    // // //     std::cout << str2;
    // // // } else {
    // // //     std::cout << "same";
    // // // }
    // // // std::cout << '\n';
    // //
    // // auto word = std::string();
    // // std::cin >> word;
    // // std::cout << word[0] << std::endl;
    // // std::cout << "'" << word[word.size() -1] << "'" << std::endl;
    // // std::cout << word.size() << std::endl;
    // // std::cout << "\"" << word[word.size()/2] << "\"" << std::endl;
    // // std::cout << "[" << word << "]" << std::endl;
    // // auto word2 = std::vector<char>();
    // // for (auto i : word) word2.push_back(i);
    // // std::sort(word.begin(), word.end());
    // // for (auto i : word2) std::cout << i;
    //
    // int num;
    // std::cin >> num;
    //
    // switch (num) {
    //     case 0:
    //         std::cout << "zero" << std::endl;
    //     break;
    //     case 1:
    //         std::cout << "one" << std::endl;
    //     break;
    //     case 2:
    //         std::cout << "two" << std::endl;
    //     break;
    //     case 3:
    //         std::cout << "three" << std::endl;
    //     break;
    //     case 4:
    //         std::cout << "four" << std::endl;
    //     break;
    //     case 5:
    //         std::cout << "five" << std::endl;
    //     break;
    //     case 6:
    //         std::cout << "six" << std::endl;
    //     break;
    //     case 7:
    //         std::cout << "seven" << std::endl;
    //     break;
    //     case 8:
    //         std::cout << "eight" << std::endl;
    //     break;
    //     case 9:
    //         std::cout << "nine" << std::endl;
    //     break;
    //     default:
    //         std::cerr << "Incorrect input! Try again by restarting the program" << std::endl;
    //     return 1;
    // }
    std::vector<int> mas(10); // Create a vector with 10 elements

    for (int i = 0; i < 10; ++i) { //read in 10 integers.
        std::cin >> mas[i];
    }

    bool different = false; // Flag to track if any differences were found

    for (int i = 0; i < mas.size() / 2; ++i) {
        for (int j = mas.size() / 2; j < mas.size(); ++j) { //check the second half of the array.
            if (mas[i] != mas[j]) { // Proper comparison
                different = true;
                break; // Exit the inner loop if a difference is found
            }
        }
        if (different){
            break; //exit the outer loop if a difference is found.
        }
    }

    if (different) {
        std::cout << "dif" << std::endl;
    } else {
        std::cout << "same" << std::endl;
    }
}
// #include <iostream>
// #include <vector>
//
// auto addElement(std::vector<int> vector) {
//     vector.push_back(10);
// }
//
// auto main() -> int {
//     auto ints = std::vector<int>();
//     std::cout << ints.size() << '\n';
//     addElement(ints);
//     std::cout << ints.size() << '\n';
// }