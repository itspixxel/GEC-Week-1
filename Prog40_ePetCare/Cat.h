#include "Pet.h"
using namespace std;

class Cat : public Pet {
public:
    // Constructor
    Cat() {
        //cout << "A new cat has been created!" << std::endl;
    }

    // Destructor
    ~Cat() {
        //cout << "The cat has been destroyed." << std::endl;
    }

    // Overrides the talk() method in the Pet class
    void talk() {
        //cout << "The cat says: Meow! Meow!" << std::endl;
    }
};