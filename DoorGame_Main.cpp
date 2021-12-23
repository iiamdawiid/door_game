#include <iostream>
#include <string>
#include "funcs.h"

int main() {

    char playGame;
    // start game message
    std::cout << "\n------------------------------\n"
              << "------------------------------\n"
              << "Would you like to play a game?\n"
              << "------------------------------\n"
              << "------------------------------\n"
              << "(Y/N): ";
    std::cin >> playGame;
    std::cout << "\n";
    // check input
    while (playGame != 'Y' && playGame != 'N') {
        std::cout << "Incorrect Input!\n"
                  << "Enter Y or N: ";
        std::cin >> playGame;
        std::cout << "\n";
    }
    // checks if player selected Y
    while (playGame == 'Y') {
        int difficulty;
        // choose difficulty
        std::cout << "Select Difficulty:\n"
                  << "1) Easy        *1  LEVEL*\n"
                  << "2) Medium      *2 LEVELS*\n"
                  << "3) Hard        *3 LEVELS*\n"
                  << "4) Impossible  *4 LEVELS*\n"
                  << "-------------\n"
                  << "Enter choice: ";
        std::cin >> difficulty;
        std::cout << "\n";
        // check input
        while (difficulty != 1 && difficulty != 2 && difficulty != 3 && difficulty != 4) {
            std::cout << "Incorrect Input!\n"
                      << "Select 1, 2, 3, or 4 to play: ";
            std::cin >> difficulty;
            std::cout << "\n";
        }
        // process choice and call correct func
        if (difficulty == 1)
            playGame = choice_Easy();
        else if (difficulty == 2)
            playGame = choice_Medium();
        else if (difficulty == 3)
            playGame = choice_Hard();
        else if (difficulty == 4)
            playGame = choice_Impossible();
        else
            std::cout << "Invalid Choice";
    }
    // final message
    std::cout << "Thank you for playing!\n\n";
}
