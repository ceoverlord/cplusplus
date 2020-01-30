/*Matt Semmel
Assignment 13
05/08/19*/

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class Date //declarations!
{
private:
    int month, day, year;
public:
    Date(int = 01, int = 01, int = 2000);
    Date(long);
    void showDate();
};

//implementations
Date::Date(int mm, int dd, int yyyy) //constructor
{
month = mm;
day = dd;
year = yyyy;
}

//long to date constructor
Date::Date(long fulldate)
{
    year = int(fulldate/10000);
    month = int((fulldate - year * 10000)/100);
    day = int(fulldate - year * 10000 - month * 100);
}

//member function to display a date
void Date::showDate()
{
    cout << setfill('0')
         << setw(2) << month << '/'
         << setw(2) << day << '/'
         << setw(2) << year % 100;

    return;
}

int main()
{
    string choice;
    long fulldate;
    int i, mm, dd, yyyy;

    Date a; //default constructor
    Date b(fulldate); //long format
    Date c(mm, dd, yyyy); //short format

    cout << "\tWelcome to Matt's (speed)dating program.\n\nWould you like to input the date as long format (YYYYMMDD) or short (MM/DD/YY)?\nPlease input your choice as 'long' or 'short': ";
    cin >> choice;
    cout << "\n";
    for (i=0; i < int(choice.length()); i++)
        choice[i] = toupper(choice[i]);

    if (choice == "LONG" || choice == "L")
    {
        cout << "Please enter the date in long format (YYYYMMDD): ";
        cin >> fulldate;
        b = Date(fulldate);
        cout << "\nThe default date is: ";
        a.showDate();
        cout << "\nYou entered: ";
        b.showDate();

        a = Date(fulldate); //converts a Long to a date
        cout << "\n\nThe date is now: ";
        a.showDate();
        cout << "\n\nThanks for coming to my TED Talk!\n";
    }

    else if (choice == "SHORT" || choice == "S")
    {
        cout << "Please enter the month (MM): ";
        cin >> mm;
        cout << "\nPlease enter the day (DD): ";
        cin >> dd;
        cout << "\nPlease enter the year (YYYY): ";
        cin >> yyyy;
        c = Date(mm, dd, yyyy);

        cout << "\nThe default date is: ";
        a.showDate();
        cout << "\nYou entered: ";
        c.showDate();

        a = Date(mm, dd, yyyy); //converts a Long to a date
        cout << "\n\nThe date is now: ";
        a.showDate();
        cout << "\n\nThanks for coming to my TED Talk!\n";
    }

    else
    {
        cout << "Today is not: ";
        a.showDate();
        cout << " !\n\nYou did not follow instructions!\nYour mother was a hamster, but thank you for coming to my TED Talk!\n";
    }

    return 0;
}
