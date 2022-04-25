#include "story.h"
#include <iostream> // includes the iostream library
#include <string>//includes the string library
using namespace std;// shortcut for the std namespace

string PathR2(string x) {//function 2 for taking the red pill, takes in a string value
    cout << " " << endl;
    cout << "You tell the man that you were born in the year of the " << x << endl;
    cout << "The man screatched his chin. 'A " << x << " huh? Those are very rare in this world. You have potential'" << endl;
    cout << "'It will be long and difficult, but I shall mold you into the hero we need to end this war. Once we win, I promise I will send you back home' " << endl;
    cout << "You follow the man to where he will train you. You don't want to be part of a huge war but it seems like you have no choice. Only time will tell whether or not you survive til the end." << endl;
    cout << " " << endl;
    return "READY FOR WAR";//Returns the text "Ready for war


}

string PathR1() { // Function 1 for taking the Red pill
    string zodiac;//Initializes the zodiac string variable
    cout << " " << endl;
    cout << "As you consume the red pill, a huge flash of light blinds you. When you come to, You find yourself atop a tower looking over a destroyed city" << endl;
    cout << "The man turns towards you and says, 'This world is at war with dark forces that originate from the core of our planet. When people from your world come to ours, they gain powers based on the Chinese Zodiac. What is your zodiac?" << endl;
    cout << " " << endl;
    cout << "type in your zodiac animal" << endl;
    cin >> zodiac;// asks the user to input their zodiac animal
    return PathR2(zodiac);//returns the return value of PathR2
}







string PathB3(string d, int w) {//functino 3 for taking the blue pill, takes in a string and integer value
    cout << " " << endl;
    cout << "the text on the bottle tells you that you have been drinking " << d << " for the past " << w << " weeks." << endl;
    cout << "You know for sure that normal " << d << " doesn't give you weird dreams, so it's obviously because of where you got it from." << endl;
    cout << "Maybe this will teach you not to take alcohol from strangers" << endl;
    cout << " " << endl;
    return "JUST A DREAM"; // returns the text "JUST A DREAM
}

string PathB2(int w) { //function 2 for taking hte blue pill, takes in an integer
    string drink;//sets up the drink string variable
    cout << " " << endl;
    cout << w << " weeks. That's the same amount of time that has passed since you bought that cheap box of alcohol from that strange man accross the street. You take a look at one of the empty bottles on the floor and try to read the small print to find out what kind of alcohol you've been drinking. " << endl;
    cout << " " << endl;
    cout << "type in any type of alcohol." << endl;
    cin >> drink;// asks the user to input the name of a type of alcohol
    return PathB3(drink, w);//returns the value of PathB3 with the drink and w variables

}

string PathB1() {//function 1 for taking the blue pill
    int week; // sets up the week integer variable
    bool loop = true; // sets up the loop boolean variable
    cout << " " << endl;
    cout << "You take the blue pill and you begin to get dizzy and black out. Moments later, you wake up on the floor of your bed room. There are bottles everywhere" << endl;
    cout << "It was that same alcohol induced dream. You try to remember how many weeks in a row this has happened" << endl;
    cout << " " << endl;
    cout << "type a number between 1 and 10" << endl;

    while (loop == true) {//while the loop variable is true
        cin >> week; // asks the user to input a number 
        if (week < 1) {// if the number is less than 1
            cout << "no, that can't be right. You know you have had that dream before. You try to jog your memory." << endl;
        }
        else if (week > 10) {// if the number is greater than 10
            cout << "that's far too many times. You know for sure how had that dream for much less than " << week << " weeks. You try to jog your memory." << endl;
        }
        else {//if the number is between 1 and 10
            loop = false;//break the loop
        }
    }

    return PathB2(week);//returns the value of PathB2 with the input of the week variable

}