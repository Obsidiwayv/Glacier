#include "Common.hpp"
#include "Dialog.hpp"
#include <cstdio>
#include <iostream>

#define STORE_SAVE_MODE 0x1
#define LOAD_SAVE_MODE 0x2

int useSaveQuestion() {
    char s_answer;
    std::cout << "0 for store, 1 for load";
    std::cin >> s_answer;

    switch(s_answer) {
        case '0':
            return STORE_SAVE_MODE;
        case '1':
            return LOAD_SAVE_MODE;
        default:
            std::cout << "Invalid option";
            return useSaveQuestion();
    }
}

int main() {
    int mode = useSaveQuestion();
    const char* home = getHomeDir();

    

    return 0;
}