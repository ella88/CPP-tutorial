#include <iostream>
#include <vector>

class Shape{
private:
   // attribites common to all shapes
public:
    virtual void draw()=0; // pure virtual function
    virtual void rotate()=0; // pure virtual function
    // destructor
    virtual ~Shape(){}
};

class Open_Shape:public Shape{ // abstract class
public:
    virtual ~Open_Shape(){}
};

class Closed_Shape:public Shape{ // abstract class
public:
    virtual ~Closed_Shape(){}
};

// concrete classes
class Line:public Open_Shape{
public:
    virtual void draw() override{
        std::cout<<"Drawing a line"<<std::endl;
    }
    virtual void rotate() override{
        std::cout<<"Rotating a line"<<std::endl;
    }
};

class Circle:public Closed_Shape{
public:
    virtual void draw() override{
         std::cout<<"Drawing a circle"<<std::endl;
    }
    virtual void rotate() override{
        std::cout<<"Rotating a circle"<<std::endl;
    }
};

class Square:public Closed_Shape{
public:
    virtual void draw() override{
        std::cout<<"Drawing a square"<<std::endl;
    }
    virtual void rotate() override{
        std::cout<<"Rotating a square"<<std::endl;
    }
};

int main(){
    Shape *sq = new Square();
    sq->draw(); // dynamic polymorphism
    
    Shape *s1 = new Circle();
    Shape *s2 = new Line();
    Shape *s3 = new Square();
    
    std::vector<Shape*> shapes {s1,s2,s3};
    for(auto s:shapes){
        s->draw();
        s->rotate();
    }
        
    
	return 0;
}
