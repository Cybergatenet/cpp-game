#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// A simple Guessing Game
void guessingGame(){
    srand(time(0));
    int number = rand() % 100 + 1;
    int guess;
    cout << "Guess a number between 1 and 100: ";

    while (true){
        cin >> guess;
        if (guess == number){
            cout << "Congratulations! You guess the number." << endl;
            break;
        }else if (guess < number){
            cout << "Too low! Try again: ";
        }else{
            cout << "Too high! Try again: ";
        }
    }
}

// Simple Array Manipulation
void arrayManipulation(){
    int numbers[5];
    cout << "Enter 5 numbers: ";
    for (int i = 0; i < 5; i++){
        cin >> numbers[i];
    }
    cout << "you have entered: ";
    for (int i = 0; i < 5; i++){
        cout << numbers[i] << " ";
    }
    cout << endl;
}

// Basic string Reversal
void reverseString() {
    string input, reversed = "";
    cout << "Enter a string: ";
    cin >> input;

    for (int i = input.length() - 1; i >= 0; i--){
        reversed += input[i];
    }

    cout << "Reversed string: " << reversed << endl;
}

int main(){
    int choice;
    cout << "Choose a game to run: \n1. Guessing Game \n2. Array Manipulation \n. String Reveral \n Enter Choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        guessingGame();
        break;
    case 2:
        arrayManipulation();
        break;
    case 3:
        reverseString();
        break;
    default:
        cout << "Invalid Choice!" << endl;
        break;
    }

    return 0;
}