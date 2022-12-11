#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

// A struct that represents a score entry
struct ScoreEntry {
    string name;
    int score;
};

// The maximum number of scores that can be stored
const int MAX_SCORES = 10;

// The path to the file where the scores are stored
const string SCORES_FILE_PATH = "scores.txt";

// An array that holds the top scores
ScoreEntry scores[MAX_SCORES];

// The number of scores that are currently stored
int numScores = 0;

// Loads the scores from the scores file
void loadScores() {
    ifstream input(SCORES_FILE_PATH);

    // Check if the file could be opened
    if (input.is_open()) {
        // Read the scores from the file
        for (int i = 0; i < MAX_SCORES && !input.eof(); i++) {
            input >> scores[i].name >> scores[i].score;
            numScores++;
        }

        // Close the file
        input.close();
    }
}

// Saves the scores to the scores file
void saveScores() {
    ofstream output(SCORES_FILE_PATH);

    // Check if the file could be opened
    if (output.is_open()) {
        // Write the scores to the file
        for (int i = 0; i < numScores; i++) {
            output << scores[i].name << " " << scores[i].score << endl;
        }

        // Close the file
        output.close();
    }
}

// Inserts a new score into the top scores list
void insertScore(const string& name, int score) {
    // Check if the score is higher than the lowest score in the list
    // or if the list is not full yet
    if (numScores < MAX_SCORES || score > scores[MAX_SCORES - 1].score) {
        // Shift the lower scores down in the list to make room for the new score
        for (int i = MAX_SCORES - 1; i > 0 && score > scores[i - 1].score; i--) {
            scores[i] = scores[i - 1];
        }

        // Insert the new score
        scores[0].name = name;
        scores[0].score = score;

        // Update the number of scores if the list was not full before
        if (numScores < MAX_SCORES) {
            numScores++;
        }

        // Save the updated scores
        saveScores();
    }
}

// Displays the top scores
void displayScores() {
    // Check if there are any scores to display
    if (numScores > 0) {
        // Output the scores
        cout << left << setw(20) << "Name" << "Score" << endl;
        for (int i = 0; i < numScores; i++) {
            cout << left << setw(20) << scores[i].name << scores[i].score << endl;
        }
    }
    else {
        // Inform the user that there are no scores
        cout << "There are no scores to display." << endl;
    }
}

int main() {
    // Load the scores
    loadScores();

    bool done = false;
    while (!done) {
        // Show the menu
        cout << endl;
        cout << "Please enter a choice." << endl;
        cout << "1. Enter a score" << endl;
        cout << "2. Display scores" << endl;
        cout << "3. Exit" << endl;
        cout << endl;
        cout << "Enter your choice: ";
        // Read the user's choice
        int choice;
        cin >> choice;

        // Process the user's choice
        switch (choice) {
        case 1: {
            // Read the score and name from the user
            int score;
            string name;
            cout << endl;
            cout << "Enter the score: ";
            cin >> score;
            cout << "Enter your name: ";
            cin >> name;

            // Insert the score into the top scores list
            insertScore(name, score);
            break;
        }

        case 2: {
            // Display the top scores
            displayScores();
            break;
        }

        case 3: {
            // Exit the program
            done = true;
            break;
        }

        default: {
            // Invalid choice
            cout << "Invalid choice." << endl;
            break;
        }
        }
    }
    return 0;
}