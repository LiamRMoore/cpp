#include <iostream>
#include <vector>

using namespace std;

// ABC
class Shape {
    private:
        //
    public:
        virtual void draw() = 0; // pure virtual
        virtual void rotate() = 0; // pure virtual
        virtual ~Shape() {}
};

// abstract derived classes
class OpenShape : public Shape {
    public:
        virtual ~OpenShape() {}
};

class ClosedShape : public Shape {
    public:
        virtual ~ClosedShape() {}
};

// concrete
class Line : public OpenShape {
    public:
        virtual void draw() override { cout << "Draw line" << endl;}
        virtual void rotate() override { cout << "Rotate line" << endl;}
        virtual ~Line() {}
};

class Circle : public ClosedShape {
    public:
        virtual void draw() override { cout << "Draw circle" << endl;}
        virtual void rotate() override { cout << "Rotate circle" << endl;}
        virtual ~Circle() {}
};

void screen_refresh(const vector<Shape*> &shapes) {
    cout << "refreshing screen" << endl;
    for (const auto &p: shapes)
        p->draw();
}


int main() {

    //Shape s;
    //Shape *p_s = new Shape; // abstract type - compiler errors

    // static binding
    Circle c;
    c.draw();

    Shape *p_s = new Circle;
    p_s->draw();

    Shape *s1 = new Circle;
    Shape *s2 = new Line;

    vector<Shape*> shapes {s1,s2};

    for (const auto &p: shapes)
        p->draw();

    screen_refresh(shapes);

    delete s1;
    delete s2;

    return 0;
}