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
        // std::ranges::sort(vec.begin(), vec.begin() + vec.size() / 2);
        // std::ranges::reverse(vec.begin() + vec.size() / 2, vec.end());
        //
        // for (auto element : vec) {
        //     std::cout << element << ' ';
        // }

    }

};

#endif //ITERATOR_H
