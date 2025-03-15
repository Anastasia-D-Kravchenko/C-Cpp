//
// Created by Anastasiia Kravchenko on 14.03.2025.
//

#include <algorithm>
#include <iostream>
#include <set>


#include <fmt/base.h>

auto main() -> int {
    auto set = std::set<int>();

    for (auto newItem : {3, 2, 1, 1, 2, 3, 5, 4, 3, 2, 1}) {
        set.insert(newItem);
    }

    for (auto element : set) {
        std::cout << element << ' ';
    }
    std::cout << std::endl;

    auto names = std::vector<std::string>{
        "Jonathan", "Joseph", "Jotaro",
        "Josuke", "Giorno", "Jolyne",
        "Jonathan", "Josuke"
};

    auto uniqueNames = std::set<std::string>();

    for (auto name : names) {
        uniqueNames.insert(name);
    }

    for (auto name : uniqueNames) {
        std::cout << name << ' ';
    }
    std::cout << std::endl;


    names = std::vector<std::string>{
        "Jonathan", "Joseph", "Jotaro",
        "Josuke", "Giorno", "Jolyne",
        "Jonathan", "Josuke"
};

    uniqueNames = std::set<std::string>(names.begin(), names.end());

    for (auto name : uniqueNames) {
        std::cout << name << ' ';
    }
    std::cout << std::endl;


    names = std::vector<std::string>{
        "Jonathan", "Joseph", "Jotaro",
        "Josuke", "Giorno", "Jolyne",
        "Jonathan", "Josuke"
};

   uniqueNames = std::set<std::string>(
            names.begin(), names.end()
    );

    names = std::vector<std::string>(
            uniqueNames.begin(), uniqueNames.end()
    );
    std::cout << std::endl;


    auto numbers = std::vector<int>(5, 1);

    for ( auto i : std::ranges::unique(numbers)) {
        std::cout << i << ' ';
    }
    std::cout << std::endl;

    for (auto element : numbers) {
        std::cout << element << ' ';
    }
    std::cout << std::endl;


    numbers = std::vector<int>(5, 1);
    auto duplicates = std::ranges::unique(numbers);
    for (auto element : duplicates) {
      std::cout << element << ' ha';
    }
    std::cout << std::endl;



    numbers = std::vector<int>{1, 2, 3, 4, 5, 6, 7};
    for (auto element : numbers) std::cout << element << ' ';
    std::cout << '\n';
    numbers.erase(numbers.begin());
    for (auto element : numbers) std::cout << element << ' ';
    std::cout << '\n';
    numbers.erase(numbers.end() - 1);
    for (auto element : numbers) std::cout << element << ' ';
    std::cout << '\n';
    numbers.erase(numbers.begin() + 1, numbers.begin() + 3);
    for (auto element : numbers) std::cout << element << ' ';



    numbers = std::vector<int>{1, 2, 3, 1, 2, 3, 1, 2, 3};

    std::ranges::sort(numbers);
    duplicates = std::ranges::unique(numbers);

    numbers.erase(duplicates.begin(), duplicates.end());

    for (auto element : numbers) {
        std::cout << element << ' ';
    }


    numbers = std::vector<int>{1, 2, 3, 4, 5, 6, 7};
    fmt::println("{}", numbers);
    numbers.erase(numbers.begin()); // removing the first element
    fmt::println("{}", numbers);
    numbers.erase(numbers.end() - 1); // removing the last element
    fmt::println("{}", numbers);
    numbers.erase(numbers.begin() + 1, numbers.begin() + 3);
    fmt::println("{}", numbers);


    auto vector = std::vector<int>{1, 2, 3};
    auto set    = std::set<int>{1, 2, 3};

    fmt::println("{}", vector);
    fmt::println("[{}]", fmt::join(set, ", "));


    auto x = 1;
    auto y = 2;
    auto z = 3;

    fmt::println("{} {} {}", x, y, z);





    x   = 10;
    auto& ref = x;

    fmt::println("{} {}", x, ref);

    x = 15;

    fmt::println("{} {}", x, ref);

    ref = 20;

    fmt::println("{} {}", x, ref);


    x   = 5;
    y   = 10;
    ref = x;

    ref = y;
}