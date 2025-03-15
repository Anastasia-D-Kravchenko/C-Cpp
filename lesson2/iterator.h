//
// Created by Anastasiia Kravchenko on 14.03.2025.
//

#ifndef ITERATOR_H
#define ITERATOR_H


class iterator {
  public:
    void iterators(){
        auto vec = std::vector<int>{3, 5, 1, 4, 2};
        auto iterator = vec.begin();
        std::cout << *iterator << std::endl;
        *iterator = 10;
        std::cout << vec.front() << std::endl;
        ++iterator;
        *iterator = 20;
        for (auto element : vec) {
            std::cout << element << ' ';
        }
        std::cout << std::endl;
        iterator += 3;
        *iterator = 20;
        --iterator;
        *iterator = 30;
        for (auto element : vec) {
            std::cout << element << ' ';
        }
        std::cout << std::endl;
        auto something = std::ranges::sort(vec.begin(), vec.begin() + vec.size() / 2);
        auto anotherSomething = std::ranges::reverse(vec.begin() + vec.size() / 2, vec.end());
        std::cout << *something;
        std::cout << std::endl;
        std::cout << *anotherSomething;
        std::cout << std::endl;
        for (auto element : vec) {
            std::cout << element << ' ';
        }
        std::cout << std::endl;
        auto middle = vec.begin() + vec.size() / 2;
        std::ranges::sort(vec.begin(), middle);
        std::ranges::sort(middle, vec.end());
        for (auto element : vec) {
            std::cout << element << ' ';
        }
        std::cout << std::endl;
        auto bothHalvesEqual = std::ranges::equal(vec.begin(), middle,middle, vec.end());
        std::cout << bothHalvesEqual;

    }

};

#endif //ITERATOR_H
