#ifndef CMD_H
#define CMD_H

#include <iostream>
#include <string>
#include <sstream>

// Namespace cmd
namespace cmd {
    // Print
    void print() {
        std::cout << std::endl;
    }

    // Template function to print a single parameter
    template <typename T>
    void print(const T& value) {
        std::cout << value << std::endl;
    }

    // Variadic template function to print multiple parameters
    template <typename T, typename... Args>
    void print(const T& first, const Args&... args) {
        std::cout << first;
        ((std::cout << ' ' << args), ...); // Fold expression to handle multiple arguments
        std::cout << std::endl;
    }

    // Input
    template<typename T>
    T input(const std::string& prompt = "") {
        if (!prompt.empty()) {
            std::cout << prompt;
        }
        T value;
        std::string input;
        std::getline(std::cin, input);
        std::stringstream(input) >> value;
        return value;
    }

    // Specialization of input for std::string
    template<>
    std::string input<std::string>(const std::string& prompt) {
        if (!prompt.empty()) {
            std::cout << prompt;
        }
        std::string value;
        std::getline(std::cin, value);
        return value;
    }
}

#endif // CMD_H
