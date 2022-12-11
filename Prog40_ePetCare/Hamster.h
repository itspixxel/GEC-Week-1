#include "Pet.h"

class Hamster : Pet {
public:
    // Constructor
    Hamster() {
        std::cout << "A new hamster has been created!" << std::endl;
    }

    // Destructor
    ~Hamster() {
        std::cout << "The hamster has been destroyed." << std::endl;
    }

    // Overrides the talk() method in the Pet class
    virtual void talk() {
        std::cout << "The hamster says: Squeak! Squeak!" << std::endl;
    }
};