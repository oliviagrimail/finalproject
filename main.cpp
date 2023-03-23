#include <iostream>
#include <vector>
//Olivia Grimail
//COP3003
//Final Project, text based game
//Function for hangman game


//public and private variables
class public:
    int game;
    const int wrongChoice;

class private:
    int choices;

//function for ascii art
void displayNumberOfGuesses(){
    if (wrongChoice == 0){
        std::cout << "   +_____+\n";
        std::cout << "   |     |\n";
        std::cout << "         |\n";
        std::cout << "         |\n";
        std::cout << "         |\n";
        std::cout << " ________|"
    }

    else if (wrongChoice == 1){
        std::cout << "   +_____+\n";
        std::cout << "   |     |\n";
        std::cout << "   O     |\n";
        std::cout << "         |\n";
        std::cout << "         |\n";
        std::cout << "         |\n";
        std::cout << " ________|\n";

    }

    else if (wrongChoice == 2) {
        std::cout << "  +_____+\n";
        std::cout << "  |     |\n";
        std::cout << "  O     |\n";
        std::cout << "  |     |\n";
        std::cout << "        |\n";
        std::cout << "________|\n";

    }

    else if (wrongChoice == 3){
        std::cout << "  +_____+\n";
        std::cout << "  |     |\n";
        std::cout << "  O     |\n";
        std::cout << "  |     |\n";
        std::cout << "   \\    |\n";
        std::cout << "________|\n";

    }

    else if (wrongChoice == 4){
        std::cout << "  +_____+\n";
        std::cout << "  |     |\n";
        std::cout << "  O     |\n";
        std::cout << "  |\\    |\n";
        std::cout << "   \\    |\n";
        std::cout << "________|\n";


    }

    else if (wrongChoice == 5){
        std::cout << "  +_____+\n";
        std::cout << "  |     |\n";
        std::cout << "  O     |\n";
        std::cout << " /|\\    |\n";
        std::cout << "   \\    |\n";
        std::cout << "________|\n";

    }
    else if (wrongChoice == 6){
        std::cout << "  +_____+\n";
        std::cout << "  |     |\n";
        std::cout << "  O     |\n";
        std::cout << " /|\\    |\n";
        std::cout << " / \\    |\n";
        std::cout << "________|\n";
    }

}
//first game mode that will be added
void gameMode1(){
    int wrongChoices;
    bool validationcheck == false;
    char letterChoice;
    std::string input = "";
    std::string answer = "telephone";
    std::cout << "Hint: It has many rings, but no fingers.\n What is your first guess?(You only get 6.)\n";
    std::cin >> input;

    while (input != answer && wrongChoices < 7){
        displayNumberOfGuesses(wrongChoices);

        std::cout << "Please enter your answer here: ";
        std::cin >> letterChoice;
        std::cout << "\n";

        for (int i=0; i<answer.length();i++){
            if(letterChoice==answer[i]){
                bool validationCheck = true;
            }
        }
        if (validationcheck = true){
            std::cout << "Yes! Good job :)\n";
        }
        else{
            std::cout << "Wrong.\n";
        }
    }

}

//greeting function for hangman
void hangmanGame(){
    std::cout << "Welcome to hangman! The goal of the game is to guess what object I am thinking of! \n The more wrong guesses, the closer the man gets to getting hanged!\n"
                 "Don't worry though, I'll give you a hint on what it is. \n Ready to begin?";

}
//mainfunction
int main() {
    
    std::string input;

    std::cout << "Would you like to play hangman? Enter Y for yes.\n";
    std::cin >> input;

    //loop to let them continue playing games
    while (input == "Y") {

        //function to call hangman game
        hangmanGame();

        //to let user stop playing if they want to
        std::cout << "Do you want to play another game?\n";
        std::cin >> input;
    }

    std::cout << "Thank you for playing!";

    return 0;
}
