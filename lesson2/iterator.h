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
        std::cout << *iterator;
        //
        // vec = std::vector<int>{3, 5, 1, 4, 2};
        // *iterator = 10;
        // std::cout << vec.front();
        //
        // vec = std::vector<int>{3, 5, 1, 4, 2};
        // *iterator = 10;
        // ++iterator;
        // *iterator = 20;
        // for (auto element : vec) {
        //     std::cout << element << ' ';
        // }
        //
        // vec = std::vector<int>{3, 5, 1, 4, 2};
        // *iterator = 10;
        // iterator += 3;
        // *iterator = 20;
        // --iterator;
        // *iterator = 30;
        // for (auto element : vec) {
        //     std::cout << element << ' ';
        // }
        //
        // vec = std::vector<int>{3, 5, 1, 4, 2};
        // std::ranges::sort(vec.begin(), vec.begin() + vec.size() / 2);
        // std::ranges::reverse(vec.begin() + vec.size() / 2, vec.end());
        //
        // for (auto element : vec) {
        //     std::cout << element << ' ';
        // }

    }

};

#endif //ITERATOR_H
