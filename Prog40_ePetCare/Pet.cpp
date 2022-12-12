#include <iostream>
#include "Pet.h"
#include "Dog.h"
#include "Cat.h"
#include "Hamster.h"

using namespace std;

int main()
{
    // Pointer for new Pet objects
    Pet* pPet = nullptr;

    int petChoice = 1;
    
    cout << endl;
    cout << "Which pet do you want?\n1. Cat\n2. Dog\n3. Hamster" << endl;
    cin >> petChoice;

    switch (petChoice)
    {
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
            // Handle invalid input
            cout << "Invalid input. Please try again.\n";
            break;
    }

    pPet->Talk();

    int userChoice = 1;

    while (userChoice != 0)
    {
        cout << endl;
        cout << "What do you want to do with your pet?:\n1. Talk\n2. Feed\n3. Play" << endl << "Enter 0 to exit." << endl;
        cin >> userChoice;

        switch (userChoice)
        {
            case 0:
                cout << endl;
                cout << "Goodbye!\n";
                break;
            case 1:
                pPet->Talk();
                break;
            case 2:
                pPet->Feed();
                break;
            case 3:
                pPet->Play();
                break;
            default:
                // Handle invalid input
                cout << "Invalid input. Please try again.\n";
                break;
        }
    }

    delete pPet;
}