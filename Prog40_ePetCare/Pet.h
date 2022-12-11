#include <iostream>

// The Pet class
class Pet {
public:
    // Constructor that takes two int parameters and sets them to 0
    Pet(int hunger = 0, int boredom = 0);

    // Destructor
    ~Pet();

    // Virtual void method called Talk
    virtual void talk();

    // Void method called Feed that takes a single int parameter called food
    void feed(int food = 4);

    // Void method called Play that takes a single int parameter called fun
    void play(int fun = 4);

private:
    // Private member variables m_hunger and m_boredom
    int m_hunger;
    int m_boredom;

protected:
    // Protected inline constant function that takes an int and returns the sum of m_hunger and m_boredom
    inline int GetMood() const {
        return m_hunger + m_boredom;
    }

    // Protected void method called PassingTime that takes a pre-set int equal to 1
    void PassingTime(int time = 1);
};