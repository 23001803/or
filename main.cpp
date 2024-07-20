#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    cout<<"Calculate the euclidean distance between two points"<<endl;
    cout<<""<<endl;
    double x1,x2,y1,y2;

cout<<"Enter the value of x1: "  ;
cin>>x1;
cout<<"Enter the value of x2: " ;
cin>>x2;
cout<<"Enter the value of y1: " ;
cin>>y1;
cout<<"Enter the value of y2: ";
cin>>y2;

int a=(x1-y1)+(x2-y2);
int b= 2;

int power =pow(a,b);

cout<<"The distance between point 1 and point 2 is "<<sqrt(power)<<endl;
    return 0;
}
