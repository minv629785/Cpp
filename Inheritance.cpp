#include <iostream>
#include <cmath>
using namespace std;

// 父類：形狀
class Shape {
public:
    virtual double area() const = 0; // 純虛函數
};

// 子類：圓形，繼承自形狀
class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}
    double area() const override {
        return M_PI * radius * radius;
    }
};

int main() {
    Circle circle(5.0);
    cout << "Area using inheritance: " << circle.area() << endl;
    return 0;
}