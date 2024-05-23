
#include "bsp.hpp"

float   myabs(float result)
{
    if (result < 0)
        result *= -1;
    return (result);
}

float area_calc(Point const &a, Point const &b, Point const &c)
{
    
    float total_areaf = (a.get_x().toFloat() - c.get_x().toFloat()) * (b.get_y().toFloat() - c.get_y().toFloat()) 
    - (b.get_x().toFloat() - c.get_x().toFloat()) * (a.get_y().toFloat() - c.get_y().toFloat());

    return myabs(total_areaf);
}

bool    is_vertex(Point const a, Point const b, Point const c, Point const point)
{
    if (a.get_x() == point.get_x() && a.get_y() == point.get_y())
        return true;
    if (b.get_x() == point.get_x() && b.get_y() == point.get_y())
        return true;
    if (c.get_x() == point.get_x() && c.get_y() == point.get_y())
        return true;
    return false;
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{

float total_area = area_calc(a, b, c);
float area_1 = area_calc(point, b, c);
float area_2 = area_calc(a, point, c);
float area_3 = area_calc(a, b, point);

std::cout << "Area total: " << total_area << std::endl;
std::cout << "A1: " << area_1 << std::endl;
std::cout << "A2: " << area_2 << std::endl;
std::cout << "A3: " << area_3 << std::endl;
std::cout << "Areas_sum: " << area_1 + area_2 + area_3 << std::endl;

if (total_area == (area_1 + area_2 + area_3))
    
    {
        if (area_1 > 0 && area_2 > 0 && area_3 > 0)
        {
            std::cout << "True: The point given it's inside" << std::endl;
            return true;
        }
        else if(is_vertex(a, b, c, point))
        {
            std::cout << "False: The point is a vertex" << std::endl;
            return false;
        }
        else
        {
            std::cout << "False: The point is in one of the egdes" << std::endl;
            return false;
        }
    }
else if (total_area == 0)
{
    std::cout << "False: Given points won't built a triangle" << std::endl;
    return false;
}
std::cout << "False: The point given is outside" << std::endl;
return false;

}