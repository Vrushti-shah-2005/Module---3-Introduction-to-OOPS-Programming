//Procedural Programming (POP) Style
#include <iostream>
using namespace std;

// Function to calculate area
int calculateArea(int length, int width) {
    return length * width;
}

int main() {
    int length, width;

    cout << "Enter length of the rectangle: ";
    cin >> length;

    cout << "Enter width of the rectangle: ";
    cin >> width;

    int area = calculateArea(length, width);
    cout << "Area of the rectangle is: " << area << endl;

    return 0;
}

//Object-Oriented Programming (OOP) Style
#include <iostream>
using namespace std;

// Rectangle class using OOP
class Rectangle 
{
    private:
        int length, width;

    public:
        void input() 
        {
            cout << "Enter length of the rectangle: ";
            cin >> length;
            cout << "Enter width of the rectangle: ";
            cin >> width;
        }

    int calculateArea() 
    {
        return length * width;
    }

    void displayArea() 
    {
        cout << "Area of the rectangle is: " << calculateArea() << endl;
    }
};

int main() 
{
    Rectangle rect;    // Create object
    rect.input();      // Get values
    rect.displayArea();// Show result

    return 0;
}


