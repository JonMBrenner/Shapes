#ifndef SHAPE_H_
#define SHAPE_H_

namespace shape {
class Shape {
  public:
    Shape(int x, int y);
    virtual ~Shape() = default;

    int x_pos() const;
    int y_pos() const;
    virtual double area() const = 0;
    virtual double perimeter() const = 0;

  private:
    int x_{};
    int y_{};
};

class Circle : public Shape {
  public:
    Circle(int x, int y, double radius);
    ~Circle() = default;

    double area() const override;
    double perimeter() const override;

  private:
    double radius_{};
};

class Rectangle : public Shape {
  public:
    Rectangle(int x, int y, double length, double width);
    ~Rectangle() = default;

    double area() const override;
    double perimeter() const override;

  private:
    double length_{};
    double width_{};
};
}

#endif
