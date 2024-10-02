#include <iostream>

using namespace std;

class Rectangle
{
private:
  int width;
  int height;

public:
  Rectangle(int w, int h) : width(w), height(h) {}

  int get_width()
  {
    return this->width;
  }

  int get_height()
  {
    return this->height;
  }

  int area()
  {
    return this->width * this->height;
  }

  void set_width(int w)
  {
    width = w;
  }

  void set_height(int h)
  {
    height = h;
  }

};

Rectangle swap(Rectangle rectangle, int w, int  h)
{
  rectangle.set_height(h);
  rectangle.set_width(w);
  return rectangle;
}

void swapDirect(Rectangle &rectangle, int w, int  h)
{
  rectangle.set_height(h);
  rectangle.set_width(w);
}

Rectangle scale(Rectangle rectangle, int factor)
{
  int width = rectangle.get_width() * factor;
  int height = rectangle.get_height() * factor;
  return Rectangle(width, height);
}

int main()
{
  Rectangle r1(2, 3);
  cout << "Area of Rectangle 1: " << r1.area() << endl;

  Rectangle r2 = scale(r1, 2);
  cout << "Area of Rectangle 2: " << r2.area() << endl;

  Rectangle r3 = swap(r2, 2, 2);
  cout << "Area of New Rectangle 3 after swapping to sides of 2: " << r3.area() << endl;

  swapDirect(r3, 3, 3);
  cout << "Area of Rectangle 3 after direct swapping to sides of 3: " << r3.area() << endl;

  cout << "Demonstration complete. Have a good day!" << endl;

  return 0;


}
