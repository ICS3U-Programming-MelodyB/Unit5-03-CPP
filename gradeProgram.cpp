// Copyright (c) 2022 Melody Berhane All rights reserved.
//
// Created by: Melody Berhane
// Created on: Jan. 20, 2022
// This program asks the user for a grade level,
// then returns the middle percentage.

#include <iostream>


// this function uses a 'switch case' to
// determine middle percentage of a grade level
int CalcMark(int newLevel) {
    // declaring percent variable
    int percent = 0;

    // state the month that is selected as a string
    switch (newLevel) {
        case 1 :
        percent = 98;
        break;

        case 2 :
        percent = 91;
        break;

        case 3 :
        percent = 83;
        break;

        case 4 :
        percent = 78;
        break;

        case 5 :
        percent = 75;
        break;

        case 6 :
        percent = 71;
        break;

        case 7 :
        percent = 68;
        break;

        case 8 :
        percent = 65;
        break;

        case 9 :
        percent = 61;
        break;

        case 10 :
        percent = 58;
        break;

        case 11 :
        percent = 55;
        break;

        case 12 :
        percent = 51;
        break;

        case 13 :
        percent = 25;
        break;

        default :
        return -1;
        break;
    }
    return percent;
}


// this function gets input from the user
// and calls the next function
int main() {
    // declares variables
    std::string original;
    std::string levelUser;
    int percentUser;
    int newLevelUser = 0;

    // gets input from user
    std::cout << "Enter the level you want converted to a percentage: ";
    std::cin >> levelUser;
    std::cout << std::endl;

    // checks input then converts it to correct
    // data type for switch case
    if (levelUser == "4+") {
        original = "4+";
        levelUser = "0";
        newLevelUser = std::stoi(levelUser);
        newLevelUser = 1;
    } else if (levelUser  == "4") {
        original = "4";
        levelUser = "0";
        newLevelUser = std::stoi(levelUser);
        newLevelUser = 2;
    } else if (levelUser  == "4-") {
        original = "4-";
        levelUser = "0";
        newLevelUser = std::stoi(levelUser);
        newLevelUser = 3;
    } else if (levelUser == "3+") {
        original = "3+";
        levelUser = "0";
        newLevelUser = std::stoi(levelUser);
        newLevelUser = 4;
    } else if (levelUser == "3") {
        original = "3";
        levelUser = "0";
        newLevelUser = std::stoi(levelUser);
        newLevelUser = 5;
    } else if (levelUser == "3-") {
        original = "3-";
        levelUser = "0";
        newLevelUser = std::stoi(levelUser);
        newLevelUser = 6;
    } else if (levelUser == "2+") {
        original = "2+";
        levelUser = "0";
        newLevelUser = std::stoi(levelUser);
        newLevelUser = 7;
    } else if (levelUser == "2") {
        original = "2";
        levelUser = "0";
        newLevelUser = std::stoi(levelUser);
        newLevelUser = 8;
    } else if (levelUser == "2-") {
        original = "2-";
        levelUser = "0";
        newLevelUser = std::stoi(levelUser);
        newLevelUser = 9;
    } else if (levelUser == "1+") {
        original = "1+";
        levelUser = "0";
        newLevelUser = std::stoi(levelUser);
        newLevelUser = 10;
    } else if (levelUser == "1") {
        original = "1";
        levelUser = "0";
        newLevelUser = std::stoi(levelUser);
        newLevelUser = 11;
    } else if (levelUser == "1-") {
        original = "1-";
        levelUser = "0";
        newLevelUser = std::stoi(levelUser);
        newLevelUser = 12;
    } else if (levelUser == "R") {
        original = "R";
        levelUser = "0";
        newLevelUser = std::stoi(levelUser);
        newLevelUser = 13;
    } else {
        newLevelUser = -1;
    }

    // assigns variable to function call that gives return value
    percentUser = CalcMark(newLevelUser);

    // displays results to user
    if (CalcMark(newLevelUser) == -1) {
        std::cout << "Invalid input!";
    } else {
        std::cout << "Level " << original << " has a middle percentage of ";
        std::cout << percentUser << "%";
    }
}
