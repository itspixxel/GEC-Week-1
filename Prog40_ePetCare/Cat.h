#include "Pet.h"

class Cat : public Pet {
public:
    // Constructor
    Cat() {
        std::cout << "A new cat has been created!" << std::endl;
    }

    // Destructor
    ~Cat() {
        std::cout << "The cat has been destroyed." << std::endl;
    }

    // Overrides the talk() method in the Pet class
    virtual void talk() {
        std::cout << "The cat says: Meow! Meow!" << std::endl;
    }
};