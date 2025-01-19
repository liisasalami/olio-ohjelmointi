#ifndef GAME_H
#define GAME_H

class Game {
public:
    Game(int maxNumber); // konstruktoori
    void play(); // itse peli
    int getGuessCount() const; // paljonko arvauksia?

    ~Game(); //destruktoori, debuggaus

private:
    int maxNumber; // isoin luku mitä voi arvata
    int randomNumber; // tämä luku pitää arvata
    int guessCount; // paljonko arvauksia
};

#endif // GAME_H
