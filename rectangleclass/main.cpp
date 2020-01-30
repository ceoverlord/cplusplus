#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class Rectangle
{
	private:
		double length;
		double width;
	public:
		double perimeter();
		double area();
		void setData(double, double);
		void showData();
};

double Rectangle::perimeter()
{
	return (length + width) * 2;
}

double Rectangle::area()
{
	return length * width;
}

void Rectangle::setData(double l, double w)
{
	length = l;
	width = w;
}

void Rectangle::showData()
{
	cout << "The length of the rectangle is "
			  << length << endl;
	cout << "The width of the rectangle is "
			  << width << endl;
	cout << "The perimeter of the rectangle is "
			  << perimeter() << endl;
	cout << "The area of the rectangle is "
			  << area() << endl;
}

int main()
{
    string choice;
    int i;
	double l;
	double w;

	cout << "What is the length of the rectangle: ";
	cin >> l;
	cout << "What is the width of the rectangle: ";
	cin >> w;
	cout << endl;

	Rectangle r;

	r.setData(l,w);
	r.showData();

    cout << "\nWould you like to run the program again? ";
    cin >> choice;
    for (i=0; i < int(choice.length()); i++)
        choice[i] = toupper(choice[i]);

    if (choice == "NO" || choice == "N")
    {
        cout << "\nThanks for using my program. Goodbye.\n";
    }

    else if (choice == "YES" || choice == "Y")
        {
    do{
        cout << "\nWhat is the length of the rectangle: ";
        cin >> l;
        cout << "What is the width of the rectangle: ";
        cin >> w;
        cout << endl;

        r.setData(l,w);
        r.showData();

        cout << "\nWould you like to run the program again? ";
        cin >> choice;
        for (i=0; i < int(choice.length()); i++)
            choice[i] = toupper(choice[i]);
    }while (choice == "YES" || choice == "Y");
    }

    else
    {
        cout << "\nThanks for using my program. Goodbye.\n";
    }

	return 0;
}
