#ifndef CORE_H
#define CORE_H



class Rectangle
{
    public:
    Rectangle(double height, double width)
    {
        this->height = height;
        this->width = width;
    }

    virtual void setHeight(double height)
    {
        this->height = height;
    }

    virtual void setWidth(double width)
    {
        this->width = width;
    }

    double area() const
    {
        return this->height * this->width;
    }

    protected:
    double height = 0;
    double width = 0;
};

// Square should not be in core => OCP Violation
class Square : public Rectangle
{
    public:
    Square(int width) : Rectangle(width, width) {

    }

    void setHeight(double height)
    {
        this->height = height;
        this->width = height;
    }

    void setWidth(double width)
    {
        this->width = width;
        this->height = width;
    }
};

class Application
{
    public:
    Application(std::vector<Rectangle*> rectangles) : rectangles(rectangles)
    {

    }

    void run()
    {
        for (Rectangle* rectangle : rectangles)
        {
            setSize(rectangle, 3.0, 4.0);
        }
    }

    private:
    void setSize(Rectangle* rectangle, double width, double height)
    {
        rectangle->setHeight(height);
        rectangle->setWidth(width);

        // check if type of rectangle is Square
        if(Square* square = dynamic_cast<Square*>(rectangle)) {
            std::cout << "Class type is Square" << std::endl;

            if (square->area() != width * width) {
                std::cout << "The area of the square is wrong. Expected: " <<
                width * height << ", " << "Actual: " << square->area() << "\n";

                return;
            }
        } else { // else we ware dealing with a rectangle
            if (rectangle->area() != width * height) {
                std::cout << "The area of the rectangle is wrong. Expected: " <<
                    width * height << ", " << "Actual: " << rectangle->area() << "\n";

                return;
            }
        }

        std::cout << "The area of the rectangle is " << rectangle->area() << "\n";
    }

    std::vector<Rectangle*> rectangles;
};




#endif