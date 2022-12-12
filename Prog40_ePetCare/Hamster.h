#include "Pet.h"
using namespace std;

class Hamster : public Pet {
public:
    // Constructor
    Hamster() {
        //cout << "A new hamster has been created!" << std::endl;
    }

    // Destructor
    ~Hamster() {
        //cout << "The hamster has been destroyed." << std::endl;
    }

    // Overrides the talk() method in the Pet class
    void talk() {
        //cout << "The hamster says: Squeak! Squeak!" << std::endl;
    }
};