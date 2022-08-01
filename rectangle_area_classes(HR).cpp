/*The first and only line of input contains two space separated integers denoting the width and height of the rectangle.

OUTPUT
The output should consist of exactly two lines:
In the first line, print the width and height of the rectangle separated by space.
In the second line, print the area of the rectangle.
*/

#include <iostream>

using namespace std;

class Rectangle 
{
    public:
    int width, height;
    void display() 
    {
        cout << width << " " << height << "\n";
    }
};
class RectangleArea : public Rectangle{
  

  public:
  void read_input()
  {
      cin>>width;
      cin>>height;
  }
    void display()
    {
        cout<<width*height;
    }
};


int main()
{

    RectangleArea r_area;
    

    r_area.read_input();
    
 
    r_area.Rectangle::display();
    
 
    r_area.display();
    
    return 0;
}