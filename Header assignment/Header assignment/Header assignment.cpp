
#include <iostream> // includes the iostream library
#include <string>//includes the string library
#include "story.h"
using namespace std;// shortcut for the std namespace










int main()
{
    bool loop = true;//sets up the loop boolean variable
    string usr_in;// sets up the usr_in string variable
    cout << "You wake up in a small room with one light. In front of you is a man with a blindingly bald head. He hands you too Pills, one red and one blue" << endl;
    cout << "He tells you 'you may only leave once you make your choice. Choose wisely'" << endl;
    cout << " " << endl;
    cout << "Press B for the blue pill or R for the red pill" << endl;


    while (loop == true) {// while loop is true
        cin >> usr_in;// asks the user to input B or R
        if (usr_in == "R" || usr_in == "r") {//If the user inputs R or r

            cout << "you got the " << PathR1() << " ending"; //runs the PathR1 function
            loop = false;//breaks the loop
        }

        else if (usr_in == "B" || usr_in == "b") {// if the user inputs B or b
            cout << " " << endl;
            cout << "you got the " << PathB1() << " ending"; // runs the PathB1 function
            loop = false;// breaks the loop
        }

        else {// If the user does not input any of the above letters
            cout << "You must choose one or the other. Choose again." << endl;
        }
    }



}

