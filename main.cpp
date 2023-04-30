#include <iostream>
#include <vector>
#include <array>
#include "GameModes.h";
//#include "MiscFunc.h"

//Olivia Grimail
//COP3003
//Final Project, text based game
//Function for hangman game



//greeting function for hangman
void hangmanGame(){

    std::string playGame1;
    std::string playGame2;
    std::string playGame3;

    std::cout << "Welcome to hangman! The goal of the game is to guess what object I am thinking of! \n The more wrong guesses, the closer the man gets to getting hanged!\n"
                 "Don't worry though, I'll give you a hint on what it is. \n Ready to begin? Enter Y if ready\n";
    std::cin >> playGame1;

    if (playGame1 == "Y"){
        gameMode1();
        std::cout << "\nWant to play another game? Enter Y if yes. \n";
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
//main function
int main() {

    std::string input;

    std::cout << "Would you like to play hangman? Enter Y for yes.\n";
    std::cin >> input;

    //if to see if they want to play the game
    if (input == "Y") {

        //function to call hangman game
        hangmanGame();
    }
    else {
        std::cout << "Okay, maybe next time!";
    }
    return 0;
}

