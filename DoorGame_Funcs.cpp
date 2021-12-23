#include "funcs.h"
#include <iostream>
#include <string>
#include <time.h>

// if player chose 1
char choice_Easy() {
    char playAgain;
    char answer;
    char correctAnswer;
    std::cout << "In front of you are two doors.\n"
              << "One of them leads to a saferoom,\n"
              << "but the other will kill you.....\n"
              << "If you successfully pick all the\n"
              << "right doors, you will escape.\n"
              << "Good luck!\n";
    // seed for rng
    srand(time(NULL));
    // display correct number of doors as long as i > 0
    int i = 1;
    for (i; i > 0; i--) {
        std::cout << " __________     __________\n"
                  << "|  __  __  |   |  __  __  |\n"
                  << "| |  ||  | |   | |  ||  | |\n"
                  << "| |  ||  | |   | |  ||  | |\n"
                  << "| |__||__| |   | |__||__| |\n"
                  << "|  __  __()|   |  __  __()|\n"
                  << "| |  ||  | |   | |  ||  | |\n"
                  << "| |  ||  | |   | |  ||  | |\n"
                  << "| |  ||  | |   | |  ||  | |\n"
                  << "| |  ||  | |   | |  ||  | |\n"
                  << "| |__||__| |   | |__||__| |\n"
                  << "|__________|   |__________|\n"
                  << "  Left(L)        Right(R)\n "
                  << "Enter choice: ";
        std::cin >> answer;
        // check input
        while (answer != 'L' && answer != 'R') {
            std::cout << "Incorrect Input!\n"
                      << "Enter L or R: ";
            std::cin >> answer;
        }
        std::cout << "\n";
        // generate random number for correct answer each iteration
        int num = rand() % 4 + 1;
        // determine correct door
        if (num % 2 == 0)
            correctAnswer = 'L';
        else
            correctAnswer = 'R';
        //compare user answer to correct answer
        if (answer == correctAnswer) {
            if (i != 1) {
                std::cout << "You've survived!\n"
                          << i - 1 << " rooms to go....\n";
            }
            // if answer is correct
            else {
                std::cout << "Congratulations! You have escaped!\n"
                          << "Would you like to try a\n"
                          << "harder difficulty?\n"
                          << "----------------------------------\n"
                          << "Yes(Y) or No(N): ";
                std::cin >> playAgain;
                return playAgain;
            }
        }
        // if answer is incorrect
        else {
            std::cout << "You're DEAD!\n"
                      << "Do you want to try again?\n"
                      << "-------------------------\n"
                      << "Yes(Y) or No(N): ";
            std::cin >> playAgain;
            std::cout << "\n";
            return playAgain;
        }
    }
}

// if player chose 2
char choice_Medium() {
    char playAgain;
    char answer;
    char correctAnswer;
    std::cout << "In front of you are two doors.\n"
              << "One of them leads to a saferoom,\n"
              << "but the other will kill you.....\n"
              << "If you successfully pick all the\n"
              << "right doors, you will escape.\n"
              << "Good luck!\n";
    // seed for rng
    srand(time(NULL));
    // display correct number of doors as long as i > 0
    int i = 2;
    for (i; i > 0; i--) {
        std::cout << " __________     __________\n"
                  << "|  __  __  |   |  __  __  |\n"
                  << "| |  ||  | |   | |  ||  | |\n"
                  << "| |  ||  | |   | |  ||  | |\n"
                  << "| |__||__| |   | |__||__| |\n"
                  << "|  __  __()|   |  __  __()|\n"
                  << "| |  ||  | |   | |  ||  | |\n"
                  << "| |  ||  | |   | |  ||  | |\n"
                  << "| |  ||  | |   | |  ||  | |\n"
                  << "| |  ||  | |   | |  ||  | |\n"
                  << "| |__||__| |   | |__||__| |\n"
                  << "|__________|   |__________|\n"
                  << "  Left(L)        Right(R)\n "
                  << "Enter choice: ";
        std::cin >> answer;
        std::cout << "\n";
        // generate random number for correct answer each iteration
        int num = rand() % 4 + 1;
        // determine correct door
        if (num % 2 == 0)
            correctAnswer = 'L';
        else
            correctAnswer = 'R';
        //compare user answer to correct answer
        if (answer == correctAnswer) {
            if (i != 1) {
                std::cout << "You've survived!\n"
                          << i - 1 << " rooms to go....\n";
            }
            // if answer is correct
            else {
                std::cout << "Congratulations! You have escaped!\n"
                          << "Would you like to try a\n"
                          << "harder difficulty?\n"
                          << "----------------------------------\n"
                          << "Yes(Y) or No(N): ";
                std::cin >> playAgain;
                return playAgain;
            }
        }
        // if answer is incorrect
        else {
            std::cout << "You're DEAD!\n"
                      << "Do you want to try again?\n"
                      << "-------------------------\n"
                      << "Yes(Y) or No(N): ";
            std::cin >> playAgain;
            std::cout << "\n";
            return playAgain;
        }
    }
}

// if player chose 3
char choice_Hard() {
    char playAgain;
    char answer;
    char correctAnswer;
    std::cout << "In front of you are two doors.\n"
              << "One of them leads to a saferoom,\n"
              << "but the other will kill you.....\n"
              << "If you successfully pick all the\n"
              << "right doors, you will escape.\n"
              << "Good luck!\n";
    // seed for rng
    srand(time(NULL));
    // display correct number of doors as long as i > 0
    int i = 3;
    for (i; i > 0; i--) {
        std::cout << " __________     __________\n"
                  << "|  __  __  |   |  __  __  |\n"
                  << "| |  ||  | |   | |  ||  | |\n"
                  << "| |  ||  | |   | |  ||  | |\n"
                  << "| |__||__| |   | |__||__| |\n"
                  << "|  __  __()|   |  __  __()|\n"
                  << "| |  ||  | |   | |  ||  | |\n"
                  << "| |  ||  | |   | |  ||  | |\n"
                  << "| |  ||  | |   | |  ||  | |\n"
                  << "| |  ||  | |   | |  ||  | |\n"
                  << "| |__||__| |   | |__||__| |\n"
                  << "|__________|   |__________|\n"
                  << "  Left(L)        Right(R)\n "
                  << "Enter choice: ";
        std::cin >> answer;
        std::cout << "\n";
        // generate random number for correct answer each iteration
        int num = rand() % 4 + 1;
        // determine correct door
        if (num % 2 == 0)
            correctAnswer = 'L';
        else
            correctAnswer = 'R';
        //compare user answer to correct answer
        if (answer == correctAnswer) {
            if (i != 1) {
                std::cout << "You've survived!\n"
                          << i - 1 << " rooms to go....\n";
            }
            // if answer is correct
            else {
                std::cout << "Congratulations! You have escaped!\n"
                          << "Would you like to try a\n"
                          << "harder difficulty?\n"
                          << "----------------------------------\n"
                          << "Yes(Y) or No(N): ";
                std::cin >> playAgain;
                return playAgain;
            }
        }
        // if answer is incorrect
        else {
            std::cout << "You're DEAD!\n"
                      << "Do you want to try again?\n"
                      << "-------------------------\n"
                      << "Yes(Y) or No(N): ";
            std::cin >> playAgain;
            std::cout << "\n";
            return playAgain;
        }
    }
}

// if player chose 4
char choice_Impossible() {
    char playAgain;
    char answer;
    char correctAnswer;
    std::cout << "In front of you are two doors.\n"
              << "One of them leads to a saferoom,\n"
              << "but the other will kill you.....\n"
              << "If you successfully pick all the\n"
              << "right doors, you will escape.\n"
              << "Good luck!\n";
    // seed for rng
    srand(time(NULL));
    // display correct number of doors as long as i > 0
    int i = 4;
    for (i; i > 0; i--) {
        std::cout << " __________     __________\n"
                  << "|  __  __  |   |  __  __  |\n"
                  << "| |  ||  | |   | |  ||  | |\n"
                  << "| |  ||  | |   | |  ||  | |\n"
                  << "| |__||__| |   | |__||__| |\n"
                  << "|  __  __()|   |  __  __()|\n"
                  << "| |  ||  | |   | |  ||  | |\n"
                  << "| |  ||  | |   | |  ||  | |\n"
                  << "| |  ||  | |   | |  ||  | |\n"
                  << "| |  ||  | |   | |  ||  | |\n"
                  << "| |__||__| |   | |__||__| |\n"
                  << "|__________|   |__________|\n"
                  << "  Left(L)        Right(R)\n "
                  << "Enter choice: ";
        std::cin >> answer;
        std::cout << "\n";
        // generate random number for correct answer each iteration
        int num = rand() % 4 + 1;
        // determine correct door
        if (num % 2 == 0)
            correctAnswer = 'L';
        else
            correctAnswer = 'R';
        //compare user answer to correct answer
        if (answer == correctAnswer) {
            if (i != 1) {
                std::cout << "You've survived!\n"
                          << i - 1 << " rooms to go....\n";
            }
            // if answer is correct
            else {
                std::cout << "Congratulations! You have escaped!\n"
                          << "Would you like to try a\n"
                          << "harder difficulty?\n"
                          << "----------------------------------\n"
                          << "Yes(Y) or No(N): ";
                std::cin >> playAgain;
                return playAgain;
            }
        }
        // if answer is incorrect
        else {
            std::cout << "You're DEAD!\n"
                      << "Do you want to try again?\n"
                      << "-------------------------\n"
                      << "Yes(Y) or No(N): ";
            std::cin >> playAgain;
            std::cout << "\n";
            return playAgain;
        }
    }
}
