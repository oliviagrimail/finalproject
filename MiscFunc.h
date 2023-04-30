#include "GameModes.h";
#include <iostream>

//Olivia Grimail
// Final Project Header File
//Header file for miscellaneous functions

//Function for ASCII art
//Function will display how many wrong choices they are at
void displayNumberOfGuesses(int wrongChoices){

    if (wrongChoices == 0){
        std::cout << "\n";
        std::cout << "   +_____+\n";
        std::cout << "   |     |\n";
        std::cout << "         |\n";
        std::cout << "         |\n";
        std::cout << "         |\n";
        std::cout << " ________|\n";
    }

    else if (wrongChoices == 1){
        std::cout << "\n";
        std::cout << "   +_____+\n";
        std::cout << "   |     |\n";
        std::cout << "   O     |\n";
        std::cout << "         |\n";
        std::cout << "         |\n";
        std::cout << "         |\n";
        std::cout << " ________|\n";

    }

    else if (wrongChoices == 2) {
        std::cout << "\n";
        std::cout << "  +_____+\n";
        std::cout << "  |     |\n";
        std::cout << "  O     |\n";
        std::cout << "  |     |\n";
        std::cout << "        |\n";
        std::cout << "________|\n";

    }

    else if (wrongChoices == 3){
        std::cout << "\n";
        std::cout << "  +_____+\n";
        std::cout << "  |     |\n";
        std::cout << "  O     |\n";
        std::cout << "  |     |\n";
        std::cout << "   \\    |\n";
        std::cout << "________|\n";

    }

    else if (wrongChoices == 4){
        std::cout << "\n";
        std::cout << "  +_____+\n";
        std::cout << "  |     |\n";
        std::cout << "  O     |\n";
        std::cout << "  |\\    |\n";
        std::cout << "   \\    |\n";
        std::cout << "________|\n";


    }

    else if (wrongChoices == 5){
        std::cout << "\n";
        std::cout << "  +_____+\n";
        std::cout << "  |     |\n";
        std::cout << "  O     |\n";
        std::cout << " /|\\    |\n";
        std::cout << "   \\    |\n";
        std::cout << "________|\n";

    }
    else if (wrongChoices == 6){
        std::cout << "\n";
        std::cout << "  +_____+\n";
        std::cout << "  |     |\n";
        std::cout << "  O     |\n";
        std::cout << " /|\\    |\n";
        std::cout << " / \\    |\n";
        std::cout << "________|\n";
    }

}

//Function to organise what game they are playing
//Will prompt them if they want to play the next game
void hangmanGame(){

    std::string playGame1;
    std::string playGame2;
    std::string playGame3;

    std::cout << "Welcome to hangman! The goal of the game is to guess what object I am thinking of! \n The more wrong guesses, the closer the man gets to getting hanged!\n"
                 "Don't worry though, I'll give you a hint on what it is. \n Ready to begin? Enter Y if ready\n";
    std::cin >> playGame1;

    //if statement to see if they want to first game
    if (playGame1 == "Y"){
        gameMode1();
        std::cout << "\nWant to play a game? Enter Y if yes. \n";
        std::cin >> playGame2;
    }
    //if statement to see if they want to play the second game
    if (playGame2 == "Y"){
        gameMode2();
        std::cout << "\nWant to play another? Enter Y if yes. \n";
        std::cin >> playGame3;
    }

    //if statement to see if they want to play the final game
    if (playGame3 == "Y"){
        gameMode3();
        std::cout << "\nThank you for playing :) \n";
    }



}


#ifndef PROJECTFINAL_MISCFUNC_H
#define PROJECTFINAL_MISCFUNC_H

#endif PROJECTFINAL_MISCFUNC_H
