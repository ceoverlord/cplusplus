/*Matt Semmel
Assignment 10
04/17/19 */

#include <string>
#include <iomanip>
#include <iostream>

using namespace std;


int main()
{
string name; //NAME TO BE INPUT BY USER
string rand; //THE RUCKUS TO BE BROUGHT

    cout << "\t\tCharacter Manipulation\n\nInput yo name: ";
    cin >> name;
    cout << "\nInput some hot nonsense: ";
    cin >> rand;

    int ins = (rand.length() / 2); //ESTABLISHES INSERTION POINT BY HALVING STRING LENGTH

    cout << "\n\n" << int(rand.length()); //SHOWS LENGTH OF string rand
    cout << "\n\n" << name << " " << rand; //SHOWS name AND rand TOGETHER
    //cout << "\n\n" << rand.insert(4, name); //DEMO INSERTION, PERMA ALTERS rand, DEMO ONLY
    cout << "\n\n" << ins; //DISPLAYS QUOTIENT OF rand LENGTH AND 2
    cout << "\n\n " << rand.insert(ins, name);

    return 0;
}
