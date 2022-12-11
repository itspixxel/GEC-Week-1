#include <iostream>
#include "Pet.h"
#include "Cat.h"
#include "Dog.h"
#include "Hamster.h"

using namespace std;

// Constructor 
Pet::Pet(int hunger, int boredom)
{
    cout << "A new pet has arrived!" << endl;
    m_hunger = hunger;
    m_boredom = boredom;
}

// Feed function
void Pet::feed(int food)
{
    cout << "Burp!" << endl;
    m_hunger -= food;

    // If m_hunger is less than 0, set it to 0
    if (m_hunger < 0) {
        m_hunger = 0;
    }

    // Call PassingTime to update the pet's boredom level
    PassingTime();
}

// Play function
void Pet::play(int fun)
{
    cout << "Yay, let's play!" << endl;
    m_boredom -= fun;

    // If m_boredom is less than 0, set it to 0
    if (m_boredom < 0) {
        m_boredom = 0;
    }

    // Call PassingTime to update the pet's hunger level
    PassingTime();
}

// Talk function
void Pet::talk() {
    cout << "I am your pet and I feel ";

    // Get the pet's current mood
    int mood = GetMood();

    // Use an if-else if-else statement to print the appropriate mood
    if (mood > 15) {
        cout << "mad" << endl;
    }
    else if (mood > 10) {
        cout << "frustrated" << endl;
    }
    else if (mood > 5) {
        cout << "okay" << endl;
    }
    else {
        cout << "happy" << endl;
    }

    // Call PassingTime to update the pet's hunger and boredom levels
    PassingTime();
}

// PassingTime function
void Pet::PassingTime(int time) {
    m_hunger += time;
    m_boredom += time;
}

int main() {
    // Create a pointer to a Pet object
    Pet* pPet = nullptr;

    // Ask the user which pet they want
    cout << "Which pet do you want? 1. Cat, 2. Dog, 3. Hamster" << endl;
    int choice;
    cin >> choice;

    // Depending on the user's choice, set the pointer to a new Cat, Dog, or Bird object
    switch (choice) {
    case 1:
        pPet = new Cat();
        break;
    case 2:
        pPet = new Dog();
        break;
    case 3:
        pPet = new Hamster();
        break;
    default:
        cout << "Invalid choice. Please try again." << endl;
        break;
    }

    // Call the talk() member function of the Pet object
    pPet->talk();

    // Don't forget to delete the Pet object when it is no longer needed to avoid memory leaks
    delete pPet;

    return 0;
}