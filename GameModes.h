#include <iostream>
#include "MiscFunc.h";

//Olivia Grimail
//Header file for Project Final
//Header file contains game mode functions

//Function for Game mode 1
void gameMode1() {
    int wrongChoices = 0;
    bool validationcheck = false;
    char letterChoice;
    std::string status1[9] = {"_", "_", "_", "_", "_", "_", "_", "_", "_"};
    std::string input = "";
    std::string answer = "telephone";
    std::cout << "Hint: It has many rings, but no fingers.\n (You only get 6 wrong choices.)\n";


    while (input != answer && wrongChoices < 7) {

        std::cout << "\nPlease enter your answer here:   \n";
        std::cin >> letterChoice;
        std::cout << "\n";
        displayNumberOfGuesses(wrongChoices);

        if (status1[0] == "t" && status1[1] == "e" && status1[2] == "l" && status1[4] == "p" && status1[5] == "h" && status1[6] == "o" && status1[7] == "n"){
            break;
        }

        if (letterChoice == 't') {
            status1[0] = 't';
            std::cout << "Yes! Good job :)\n";
            for (const auto &array: status1){
                std::cout << array ;
            }
            std::cout << "\n";
        }

        else if (letterChoice == 'e') {
            status1[1] = 'e';
            status1[3] = 'e';
            status1[8] = 'e';
            std::cout << "Yes! Good job :)\n";
            for (const auto &array: status1) {
                std::cout << array;
            }
        }

        else if (letterChoice == 'l') {
            status1[2] = 'l';
            std::cout << "Yes! Good job :)\n";
            for (const auto &array: status1) {
                std::cout << array;
            }
        }

        else if (letterChoice == 'p') {
            status1[4] = 'p';
            std::cout << "Yes! Good job :)\n";
            for (const auto &array: status1) {
                std::cout << array;
            }
        }

        else if (letterChoice == 'h') {
            status1[5] = 'h';
            std::cout << "Yes! Good job :)\n";
            for (const auto &array: status1) {
                std::cout << array;
            }
        }

        else if (letterChoice == 'o') {
            status1[6] = 'o';
            std::cout << "Yes! Good job :)\n";
            for (const auto &array: status1) {
                std::cout << array;
            }
        }

        else if (letterChoice == 'n') {
            status1[7] = 'n';
            std::cout << "Yes! Good job :)\n";
            for (const auto &array: status1) {
                std::cout << array;
            }
        }

        else {
            std::cout << "Wrong.\n";
            wrongChoices += 1;
            for (const auto &array: status1) {
                std::cout << array;
            }
        }
    }

}



//game mode 2
void gameMode2(){
    int wrongChoices = 0;
    bool validationcheck = false;
    char letterChoice;
    std::string status2[5] = {"_","_","_","_","_"};
    std::string input = "";
    std::string answer = "piano";
    std::cout << "Hint: What has many keys but can't open any locks? \n (You only get 6 wrong choices.)\n";

    while (input != answer && wrongChoices < 7){

        if (status2[0] == "p" && status2[1] == "i" && status2[2] == "a" && status2[3] == "n" && status2[4] == "o") {
            break;
        }

        std::cout << "\n Please enter your answer here: \n";
        std::cin >> letterChoice;
        std::cout << "\n";
        displayNumberOfGuesses(int wrongChoices);

        if (letterChoice == 'p'){
            status2[0] = 'p';
            std::cout << "Yes, good job! \n";
            for (const auto &array: status2){
                std::cout << array;
            }
        }

        else if(letterChoice == 'i'){
            status2[1] = 'i';
            std::cout << "Yes, good job! \n";
            for (const auto &array: status2){
                std::cout << array;
            }
        }
        else if (letterChoice == 'a'){
            status2[2] = 'a';
            std::cout << "Yes, good job! \n";
            for (const auto &array: status2){
                std::cout << array;
            }
        }
        else if (letterChoice == 'n'){
            status2[3] = 'n';
            std::cout << "Yes, good job! \n";
            for (const auto &array: status2){
                std::cout << array;
            }
        }
        else if(letterChoice == 'o'){
            status2[4] = 'o';
            std::cout << "Yes, good job! \n";
            for (const auto &array: status2){
                std::cout << array;
            }
        }
        else{
            std::cout << "Wrong.\n";
            wrongChoices += 1;
            for (const auto &array: status2){
                std::cout << array;
            }
        }
    }
}

//game mode 3
void gameMode3(){
    int wrongChoices = 0;
    bool validationcheck = false;
    char letterChoice;
    std::string input = "";
    std::string answer = "chair";
    std::string status3[5] = {"_","_","_","_","_"};
    std::cout << "Hint: What has legs but cannot walk? \n (You only get 6 wrong choices.)\n";
    
    while (input != answer && wrongChoices < 7) {
        //displayNumberOfGuesses(wrongChoices);

        if (status3[0] == "c" && status3[1] == "h" && status3[2] == "a" && status3[3] == "i" && status3[4] == "r") {
            break;
        }

        std::cout << "\nPlease enter your answer here:  \n";
        std::cin >> letterChoice;
        std::cout << "\n";
        displayNumberOfGuesses(wrongChoices);

        if (letterChoice == 'c') {
            status3[0] = 'c';
            std::cout << "Yes, good job! \n";
            for (const auto &array: status3) {
                std::cout << array;
            }

        } else if (letterChoice == 'h') {
            status3[1] = 'h';
            std::cout << "Yes, good job! \n";
            for (const auto &array: status3) {
                std::cout << array;
            }

        } else if (letterChoice == 'a') {
            status3[2] = 'a';
            std::cout << "Yes, good job! \n";
            for (const auto &array: status3) {
                std::cout << array;
            }

        } else if (letterChoice == 'i') {
            status3[3] = 'i';
            std::cout << "Yes, good job! \n";
            for (const auto &array: status3) {
                std::cout << array;
            }

        } else if (letterChoice == 'r') {
            status3[4] = 'r';
            std::cout << "Yes, good job! \n";
            for (const auto &array: status3) {
                std::cout << array;
            }

        } else {
            std::cout << "Wrong.\n";
            wrongChoices += 1;
            for (const auto &array: status3) {
                std::cout << array;
            }
        }
    }

}

#ifndef PROJECTFINAL_GAMEMODES_H
#define PROJECTFINAL_GAMEMODES_H

#endif //PROJECTFINAL_GAMEMODES_H
