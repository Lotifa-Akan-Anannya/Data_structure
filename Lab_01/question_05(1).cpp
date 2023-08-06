#include <iostream>
#include <string>
using namespace std;
class rectangle
{
private:
double width;
double height;
public:
rectangle(){}
rectangle(double w, double h)
{
height = h;
width= w;
}
void set_width(double w)
{
width = w;
}
void set_height(double h)
{
height = h;
}
void get_area()
{
double area= width * height;
cout << "Area: " <<area<< endl;
}
};
int main()
{
rectangle r1;
double w,h;
cout << "Please enter the width of rectangle: ";
cin >> w;
cout << "Please enter the height of rectangle: ";
cin >> h;
r1.set_width(w);
r1.set_height(h);
r1.get_area();
}
