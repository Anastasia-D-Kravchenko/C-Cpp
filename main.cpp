// //
// // Created by Anastasiia Kravchenko on 07.03.2025.
// //
//
// #include <algorithm>
// #include <iostream>
// #include <vector>
// #include <string>
//
// #define print std::cout
//
// void printStringView(std::string_view sv) {
//     using namespace std;
//     namespace rng = std::ranges;
//     cout << sv;
// }
//
// // void printSpan(std::span<int> sp) {
// //     std::cout << "Span: ";
// //     for (int value : sp) {
// //         std::cout << value << " ";
// //     }
// //     std::cout << std::endl;
// // }
//
// auto append(std::string s) -> void {
//     s += " there";
//     std::cout << s << std::endl;
// }
//
// int main_past() {
//     std::cout << "hello world\n";
//     /*      int x;
//             double y;
//             std::string s;
//             std::cin >> x;
//             std::cin >> y;
//             std::cin >> s;
//             std::cout << "[" << x << "]";
//             std::cout << x << ' ' << y << ' ' << s;     */
//
//     //    int x = 0;
//     //    auto x = int();
//     //    auto x = 0;
//     //    auto x = 17;
//     //    for (int i = 0; i < 10; i++) { }
//     //    std::cout << x;
//     //    for (int i = 0; i < 10; i++) { }
//
//     //    auto a = 0;
//     //    auto b = 0;
//     //    std::cin >> a >> b;
//
//     //    auto text = std::string();
//     auto text = std::string();
//     std::cin >> text;
//     std::cout << text << std::endl;
//     //    auto numbers = std::vector<int>();
//     //
//     auto str = std::vector<std::string>();
//     str.push_back("hello world");
//     str.push_back("hello");
//     str.push_back("world");
//     for (auto i : str) std::cout << i << std::endl;
//     str.pop_back();
//     for (auto i : str) std::cout << i << std::endl;
//     //    numbers.push_back(3);
//     //    numbers.push_back(7);
//     //    numbers.push_back(1);
//     //
//     //    for (auto element : numbers) {
//     //        std::cout << element << ' ';
//     //    }
//     //
//     //    numbers.pop_back();
//     //
//     //    std::cout << '\n';
//     //    for (auto element : numbers) {
//     //        std::cout << element << ' ';
//     //    }
//     auto hi = int(4);
//     switch (hi) {
//         case 4: std::cout << "hi\n"; break;
//         default: std::cout << "hi"; return 0;
//     }
//
//     /*auto nums = std::vector<int>{1, 2, 3, 5, 12, 54, 6, 2, 46, 3, 2, 6, 7, 7};
//     std::ranges::sort(nums);
//
//     for (auto element : nums) {
//         std::cout << element << ' ';
//     }*/
//     std::string text1 = "long sentance with some meaning";
//     for (auto i = 0; i < text1.size(); i++) std::cout << text1[i];
//     std::cout << std::endl;
//     for (auto i : text1) std::cout << i;
//     std::cout << std::endl;
//     std::vector<char> rev;
//     for (int i = text1.size() - 1; i >= 0; i--) rev.push_back(text1[i]);
//     for (auto i : rev) std::cout << i;
//     std::cout << std::endl;
//
//
//     text = std::string();
//     auto first  = std::string("Programming");
//     auto second = std::string("in");
//     auto third  = std::string("C++");
//     auto fourth = std::string(", Python");
//     for (auto chr : first) text += chr;
//     text += ' ';
//     for (auto chr : second) text += chr;
//     text += ' ';
//     for (auto chr : third) text += chr;
//     text += fourth;
//     std::cout << text;
//
//
//     text = std::string("Programming");
//     std::cout << "kg stands for kilo" << text.substr(3, 4) << std::endl;
//     //    auto s1 = std::string("hello");
//     //    std::ranges::reverse(s1);
//     //    auto s2 = std::string();
//     //
//     //    std::cin >> s2;
//     //
//     //    if (s1 < s2) {
//     //        std::cout << ":>";
//     //    }
//     //
//     auto vec = std::vector<int>{3, 5, 1, 4, 2};
//
//     std::ranges::reverse(vec);
//
//     for (auto element : vec) {
//         std::cout << element << ' ';
//     }
//     //    auto words = std::vector<std::string>{"hello", "everyone", "present"};
//     //    std::ranges::sort(words);
//     //
//     //    for (auto word : words) std::cout << word << ' ';
//
//     //    std::cout << words;
//
//     //    auto const x = 0;
//     //    x = 10;
//
//     std::string myString = "Hello, string view!";
//     printStringView(myString); // No copy is made
//     const char* cString = "C-style string";
//     printStringView(cString); // Works with C-style strings too
//
//
//     // auto myVector = std::vector<int>{1, 2, 3, 4, 5};
//     // printSpan(myVector);
//     // int myArray[] = {10, 20, 30};
//     // printSpan(myArray);
//
//     auto vec1 = std::vector<int>{1, 2, 3};
//     std::vector<int> vec2 = vec1;
//     for (auto element : vec2) std::cout << element << ' ';
//     std::cout << std::endl;
//     vec1[1] = 10;
//     std::cout << vec2[1];
//     std::cout << vec1[1] << std::endl;
//
//     auto str1 = std::string("hello");
//     append(str1);
//     std::cout << str1;
//
//     vec1 = std::vector<int>{1, 2, 3};
//     vec2 = vec1;
//     std::cout << (vec1 == vec2);
//
//
//     vec1 = std::vector<int>{1, 2, 3};
//     vec2 = std::vector<int>{3, 2, 1};
//     std::cout << (vec1 == vec2);
//
//
//     auto s1 = std::string("hello");
//     auto s2 = std::string("olleh");
//     std::cout << (s1 == s2);
//
//
//     s1 = std::string("hello");
//     s2 = std::string("he");
//     s2 += "llo";
//     std::cout << (s1 == s2);
//
//
//     // auto str2 = std::string("hello");
//     // vec1 = std::vector<char>{'o', 'l', 'l', 'e', 'h'};
//     // std::ranges::reverse(vec);
//     // auto equal = std::ranges::equal(str2, vec1);
//     // std::cout << equal;
//     print << std::endl;
//
//
//
//     auto words = std::vector<std::string>{
//         "a", "quick", "brown", "fox"
//     };
//
//     std::ranges::sort(words);
//     for ( auto word : words ) std::cout << word;
//     std::cout << std::endl;
//
//     std::ranges::reverse(words);
//     for ( auto word : words ) std::cout << word;
//     std::cout << std::endl;
//
//     std::cout << words.back() << '\n';
//     std::cout << words.front().front();
//
//
//
//
// }

#include <iostream>
#include <vector>

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
void task2() {
    srand(time(NULL));
    auto num = int();
    auto ran = std::rand()%100+3;
    while (num != ran) {
        std::cout << "Guess a number: ";
        std::cin >> num;
        if (num > ran) {
            std::cout << "Too big. Try lower.";
        }
        if (num < ran) {
            std::cout << "Too small. Try higher.";
        }
    }
    std::cout << "Congraults.\n";
}
bool isPrime(int number) {
    if (number < 2) return false;
    for (int i = 2; i * i <= number; i++) {
        if (number % i == 0) return false;
    }
    return true;
}
void task3() {
    auto num = int();
    std::cout << "Please input the numbers.";
    std::cout << "Type in a negative number to stop.";
    auto numbersToCheckForPrimality = std::vector<int>();
    while ( std::cin >> num && num >= 0) numbersToCheckForPrimality.push_back(num);
    std::cout << std::endl;
    for (auto i : numbersToCheckForPrimality) {
    if (isPrime(i)) std::cout << i <<  " is prime." << std::endl;
    else std::cout << i <<  " is not prime." << std::endl;};
}

int main(){
    task1();
    task2();
    task3();

}