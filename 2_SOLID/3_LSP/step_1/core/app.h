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

        if (rectangle->area() != width * height) {
            std::cout << "The area of the rectangle is wrong. Expected: " <<
                width * height << ", " << "Actual: " << rectangle->area() << "\n";

            return;
        }

        std::cout << "The area of the rectangle is " << rectangle->area() << "\n";
    }

    std::vector<Rectangle*> rectangles;
};




#endif