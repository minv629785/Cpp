#include <iostream>
#include <cmath>
using namespace std;

// 組合的組件：圓形的數學模型
class CircleModel {
private:
    double radius;
public:
    CircleModel(double r) : radius(r) {}
    double area() const {
        return M_PI * radius * radius;
    }
};

// 使用組合的類：圓形，包含一個圓形模型對象
class Circle {
private:
    CircleModel model;
public:
    Circle(double r) : model(r) {}
    double area() const {
        return model.area();
    }
};

int main() {
    Circle circle(5.0);
    cout << "Area using composition: " << circle.area() << endl;
    return 0;
}