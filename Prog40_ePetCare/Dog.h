#include <iostream>
#include "Pet.h"

class Dog : public Pet {
public:
    // Constructor
    Dog() {
        std::cout << "A new dog has been created!" << std::endl;
    }

    // Destructor
    ~Dog() {
        std::cout << "The dog has been destroyed." << std::endl;
    }

    // Overrides the talk() method in the Pet class
    virtual void talk() {
        std::cout << "The dog says: Woof! Woof!" << std::endl;
    }
};