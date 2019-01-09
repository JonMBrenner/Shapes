#include "shape.h"

shape::Shape::Shape(int x, int y) : x_{x}, y_{y} {}

shape::Circle::Circle(int x, int y, double radius)
  : Shape(x, y), radius_{radius}
{}

shape::Rectangle::Rectangle(int x, int y, double length, double width)
  : Shape(x, y), length_{length}, width_{width}
{}

int shape::Shape::x_pos() const {
  return x_;
}

int shape::Shape::y_pos() const {
  return y_;
}
