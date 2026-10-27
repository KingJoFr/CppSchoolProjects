#include <iostream>

class Circle
{
    public: 
        Circle(double radius)
        {
            this->radius = radius;
        }
        int getRadius()
        {
            return this->radius;
        }
    private:
        double radius;
    
};

int main()
{
    Circle mycircle(6);
    std::cout<<"mycircle radius: " <<mycircle.getRadius();
    
    return 0;
}