#include <iostream>
#include <string>
#include <vector>
#include <algorithm> 

using namespace std;

int main() {
    string word = "hangman";
    vector<char> guessedLetters;
    int lives = 6;

    while (true) {
        cout << "Hangman Game" << endl;
        cout << "Word: ";
        for (char c : word) {
            if (find(guessedLetters.begin(), guessedLetters.end(), c)!= guessedLetters.end()) {
                cout << c << " ";
            } else {
                cout << "_ ";
            }
        }
        cout << endl;

        cout << "Lives: " << lives << endl;

        char guess;
        cout << "Enter a letter: ";
        cin >> guess;

        if (find(guessedLetters.begin(), guessedLetters.end(), guess)!= guessedLetters.end()) {
            cout << "You already guessed this letter!" << endl;
        } else {
            guessedLetters.push_back(guess);
            if (find(word.begin(), word.end(), guess) == word.end()) {
                lives--;
                cout << "Incorrect guess!" << endl;
            } else {
                cout << "Correct guess!" << endl;
            }
        }

        if (lives == 0) {
            cout << "You lost! The word was " << word << endl;
            return 0;
        }

        bool won = true;
        for (char c : word) {
            if (find(guessedLetters.begin(), guessedLetters.end(), c) == guessedLetters.end()) {
                won = false;
                break;
            }
        }

        if (won) {
            cout << "You won! The word was " << word << endl;
            return 0;
        }
    }
}