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
int n,i;
cout << "Please enter the number of rectangle: ";
cin>>n;
rectangle r[n];
for(i = 0; i < n; i++){
cout << "Please enter the width of rectangle "<< i+1<<":";
cin >> w;
cout << "Please enter the height of rectangle "<< i+1<<":";
cin >> h;
r[i].set_width(w);
r[i].set_height(h);
r[i].get_area();
}
r[0].get_area();
r[1].get_area();
}
