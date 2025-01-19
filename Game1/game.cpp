#include "game.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

Game::Game(int maxNumber) : maxNumber(maxNumber), guessCount(0) { // seedi satunnaisluvulle
    std::cout << "Game Constructor "
        << "maxNumber on:"
              << maxNumber
              << std::endl;
    srand(time(NULL));
    randomNumber = rand() % (maxNumber + 1);
}

Game::~Game()
{
    std::cout << "Game destuktoori"
              << std::endl;
}

void Game::play() { //pelifunktio
    std::cout << "Game Start"
              << std::endl;
    int guess;
    std::cout << "Guess a number between 0 and " << maxNumber << ":\n";

    while (true) {
        std::cout << "Enter your guess: ";
        std::cin >> guess;
        guessCount++;

        if (guess == randomNumber) {
            std::cout << "Correct!\n"; // oikea
            break;
        } else if (guess < randomNumber) {
            std::cout << "The number is higher.\n"; // tip
        } else {
            std::cout << "The number is lower.\n"; // tip
        }
    }
}

int Game::getGuessCount() const {
    std::cout << "Number of guesses: " << guessCount << std::endl;
    return guessCount;
}
