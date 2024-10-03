#include <iostream>

using namespace std;

class Rectangle
{
private:
  int width;
  int height;
  friend class GeometricSwapper;

public:
  Rectangle(int w, int h) : width(w), height(h) {}

  int area()
  {
    return this->width * this->height;
  }

  friend Rectangle scale(Rectangle, int);
  
};

class GeometricSwapper
{
  private:
  public:

  void GeometricSwap(class Rectangle &rectangle, int h, int w )
  {
    rectangle.width = w;
    rectangle.height = h;
  }

};

Rectangle scale(Rectangle rectangle, int factor)
{
  int new_width = rectangle.width * factor;
  int new_height = rectangle.height * factor;
  return Rectangle(new_width, new_height);
}

int main()
{
  GeometricSwapper swap;

  Rectangle r1(2, 3);
  cout << "Area of Rectangle 1: " << r1.area() << endl;

  Rectangle r2 = scale(r1, 2);
  cout << "Area of Rectangle 2: " << r2.area() << endl;

  swap.GeometricSwap(r2,5,4);
  cout << "Area of Rectangle 2 after GeometricSwap: " << r2.area() << endl;

  return 0;
}
