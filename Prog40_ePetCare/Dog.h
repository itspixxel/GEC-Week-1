#include "Pet.h"
using namespace std;

class Dog : public Pet {
public:
    // Constructor
    Dog() {
        //cout << "A new dog has been created!" << std::endl;
    }

    // Destructor
    ~Dog() {
        //cout << "The dog has been destroyed." << std::endl;
    }

    // Overrides the talk() method in the Pet class
    void talk() {
        //cout << "The dog says: Woof! Woof!" << std::endl;
    }
};