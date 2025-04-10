//
// Created by s32802 on 2025-04-10.
//

#include <iostream>
#include <ranges>
#include <vector>
#include <algorithm>
#include <fmt/ranges.h>

// namespace pjc::ranges {
//         template <typename T, typename F>
//         auto transform_copy (std::vector<T> const & vec, F fun) {
//             std::vector<decltype(fun(vec[0]))> res(vec.size());;
//             std::ranges::transform(vec, res.begin(), fun);
//             return res;
//         }
//
//         template <typename T>
//         auto reverse_copy ( std::vector<T> const & vec) {
//             std::vector<T> res(vec);
//             std::ranges::reverse(res);
//             return res;
//         }
// }

// template <typename T, typename Func>
// auto mapped(const std::vector<T>& input, Func func) {
//     std::vector<std::invoke_result_t<Func, T>> result;
//     for (const auto& element : input) {
//         result.push_back(func(element));
//     }
//     return result;
// }

template <typename Func>
auto sizy() {
    if (std::is_invocable_v<Func, int, int, int>) {
        return 3;
    }
    if (std::is_invocable_v<Func, int, int>) {
        return 2;
    }
    return 1;
}

template <typename Container, typename Func>
void chunkedApply(const Container& container, Func func) {
    auto chunkSize = sizy<Func>();
    auto it = container.begin();
    while (it != container.end()) {
        if (chunkSize == 1) {
            func(*it++);
        } else if (chunkSize == 2) {
            if (it + 1 < container.end()) {
                func(*it, *(it + 1));
                it += 2;
            } else {
                func(*it++);
            }
        } else if (chunkSize == 3) {
            if (it + 2 < container.end()) {
                func(*it, *(it + 1), *(it + 2));
                it += 3;
            } else {
                for (; it != container.end(); ++it) {
                    func(*it);
                }
            }
        }
    }
}

int main() {
    // const std::vector<int> original{1, 2, 3, 4, 5};
    //
    // auto doubled = pjc::ranges::transform_copy(original, [](int x) { return x * 2; });
    // for (const int value : doubled) {
    //     std::cout << value << " ";
    // }
    // std::cout << std::endl;
    //
    // auto reversed = pjc::ranges::reverse_copy<>(original);
    // for (const int value : reversed) {
    //     std::cout << value << " ";
    // }
    // std::cout << std::endl;

    // auto strings = std::vector<std::string>{"abc", "defghi", "jk", "lmno"};
    // auto chars = mapped(
    //         strings,
    //         [](std::string s) { return s.front(); }
    // );
    // auto sizes = mapped(
    //         strings,
    //         [](std::string s) { return s.size(); }
    // );
    //
    // fmt::println("{}", chars);
    // fmt::println("{}", sizes);

    auto const ints = std::vector<int>{
        1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12
    };

    chunkedApply(ints, [](int const n) {
        fmt::print("[{}] ", n);
    });

    fmt::println("");

    chunkedApply(ints, [](int const a, int const b) {
        fmt::print("[{} {}]", a, b);
    });

    fmt::println("");

    chunkedApply(ints, [](int const a, int const b, int const c) {
        fmt::print("[{} {} {}]", a, b, c);
    });

    return 0;
}
