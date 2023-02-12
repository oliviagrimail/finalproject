#include <iostream>
//Olivia Grimail
//COP3003
//Final Project, text based game

//Function for hangman game
void hangmanGame(){

}
//Function for Rock, Paper, Scissors Game
void rpsGame(){

}
//Function for Tic Tac Toe Game
void ticTacToeGame(){

}

int main() {

    int game;
    std::string input;

    std::cout << "Would you like to play a game? Enter Y for yes.\n";
    std::cin >> input;

    //loop to let them continue playing games
    while (input == "Y") {

        //Asking user for what game they want to play
        std::cout<< "Enter a number for which game you would like to play. \n \t1. Rock, Paper, Scissors \n \t2. Hang-man \n \t3. Tic-Tac-Toe \n";
        std::cin >> game;

        //Checking to see if their input was valid
        if (game < 1 || game > 3) {
            std::cout << "Sorry, please try again. Input was invalid.\n";
        }

        //if user wants to play RPS
        if(game = 1){
            rpsGame();
        }
        //if user wants to play hangman
        if (game = 2){
            hangmanGame();
        }
        //if user wants to play Tic-Tac-Toe
        if (game = 3){
            ticTacToeGame();
        }

        //to let user stop playing if they want to
        std::cout << "Do you want to play another game?\n";
        std::cin >> input;
    }

    std::cout << "Thank you for playing!";

    return 0;
}
