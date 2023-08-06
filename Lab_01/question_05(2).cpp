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
double w,h;
cout << "Please enter the width of rectangle: ";
cin >> w;
cout << "Please enter the height of rectangle: ";
cin >> h;
x_member_operation=new rectangle();
x_dot_operation=new rectangle();
x_member_operation->set_width(w);
x_member_operation->set_height(h);
x_member_operation->get_area();
(*x_dot_operation).set_width(w);
(*x_dot_operation).set_height(h);
(*x_dot_operation).get_area();
delete x_member_operation;
delete x_dot_operation;
(*x_dot_operation).get_area();
x_member_operation->get_area();
}
