/* Write a C++ program to implement a class called Circle that has private member variables for radius.
Include member functions to calculate the circle's area and circumference.*/

# include<bits/stdc++.h>
using namespace std;
class Circle{
    int radius;
    const double pi=3.14;
public:
  
    Circle(int r) {
        radius=r;
}
    // void setRadius(int r){
    //     radius = r;
    // }
    double circle_area()
    {
        
        return pi*radius*radius;
        
    }
    double circumference()
    {
        return 2*pi*radius;
    }
    
};
int main()
{
    int r;
    cin>>r;
    Circle c1(r);
//     cout<<r<<endl;
//     c1.setRadius(r);
    cout<<c1.circle_area()<<endl;
    cout<<c1.circumference()<<endl;
    return 0;
}