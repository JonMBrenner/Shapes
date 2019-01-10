#include "shape.h"
#include <cmath>

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

double shape::Circle::area() const {
  return M_PI * radius_ * radius_;
}

double shape::Rectangle::area() const {
  return length_ * width_;
}

double shape::Circle::perimeter() const {
  return 2 * M_PI * radius_;
}

double shape::Rectangle::perimeter() const {
  return 2 * (length_ +  width_);
}

bool shape::has_smaller_area(const Shape& lhs, const Shape& rhs) {
  return lhs.area() < rhs.area();
}
