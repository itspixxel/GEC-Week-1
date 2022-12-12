#pragma once
#include <iostream>
using namespace std;

class Pet {
    public:
        Pet(int hunger = 0, int boredom = 0) : m_hunger(hunger), m_boredom(boredom)
        {
            cout << endl;
            cout << "A new pet has arrived!" << endl;
        }

        virtual ~Pet()
        {

        }

        virtual void Talk()
        {
            int mood = GetMood();
            cout << endl;
            cout << "Pet: I feel ";

            if (mood > 12) {
                cout << "mad" << endl;
            }
            else if (mood > 8) {
                cout << "frustrated" << endl;
            }
            else if (mood > 4) {
                cout << "okay" << endl;
            }
            else {
                cout << "happy" << endl;
            }
            PassingTime(1);
        }

        void Feed(int food = 4)
        {
            cout << endl;
            cout << "Burp!" << endl;
            m_hunger -= food;
            if (m_hunger < 0) {
                m_hunger = 0;
            }
            PassingTime(1);
        }

        void Play(int fun = 4)
        {
            cout << endl;
            cout << "Whee!" << endl;
            m_boredom -= fun;
            if (m_boredom < 0) {
                m_boredom = 0;
            }
            PassingTime(1);
        }

    protected:
        const int GetMood()
        {
            return m_hunger + m_boredom;
        }

        void PassingTime(int time)
        {
            m_hunger += time;
            m_boredom += time;
        }
    private:
        int m_hunger;
        int m_boredom;
};