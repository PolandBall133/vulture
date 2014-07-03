#include "Rectangle.hpp"

namespace vulture{

    Rectangle::Rectangle(int32_t x,
                         int32_t y,
                         int32_t width,
                         int32_t height)
            : x(x), y(y), width(width), height(height){}


    bool
    Rectangle::isEmpty() const{
        return (width <= 0 || height <= 0);
    }

    bool
    Rectangle::equals(const Rectangle &val) const{
        return (x == val.x && y == val.y && width == val.width && height == val.height);
    }

    bool
    Rectangle::hasIntersection(const Rectangle &val) const{
        int Amin, Amax, Bmin, Bmax;
        /* Special cases for empty rects */
        if(isEmpty() || val.isEmpty())
            return false;
        /* Horizontal intersection */
        Amin = x;
        Amax = Amin + width;
        Bmin = val.x;
        Bmax = Bmin + val.width;
        if (Bmin > Amin)
            Amin = Bmin;
        if (Bmax < Amax)
            Amax = Bmax;
        if (Amax <= Amin)
            return false;
        /* Vertical intersection */
        Amin = y;
        Amax = Amin + height;
        Bmin = val.y;
        Bmax = Bmin + val.height;
        if (Bmin > Amin)
            Amin = Bmin;
        if (Bmax < Amax)
            Amax = Bmax;
        if (Amax <= Amin)
            return false;

        return true;
    }


    Rectangle
    Rectangle::getIntersect(const Rectangle &val) const{
        int Amin, Amax, Bmin, Bmax;
        Rectangle result;

        /* Special cases for empty rects */
        if(isEmpty() || val.isEmpty())
            return Rectangle(0, 0, 0, 0);
        /* Horizontal intersection */
        Amin = x;
        Amax = Amin + width;
        Bmin = val.x;
        Bmax = Bmin + val.width;
        if (Bmin > Amin)
            Amin = Bmin;
        result.x = Amin;
        if (Bmax < Amax)
            Amax = Bmax;
        result.width = Amax - Amin;
        /* Vertical intersection */
        Amin = y;
        Amax = Amin + height;
        Bmin = val.y;
        Bmax = Bmin + val.height;
        if (Bmin > Amin)
            Amin = Bmin;
        result.y = Amin;
        if (Bmax < Amax)
            Amax = Bmax;
        result.height = Amax - Amin;
        return result;
    }

    Rectangle
    Rectangle::getUnion(const Rectangle &val) const{
        int Amin, Amax, Bmin, Bmax;
        Rectangle result;

        /* Special cases for empty Rects */
        if (isEmpty()){
            if(val.isEmpty()){
                /* A and B empty */
                return Rectangle(0, 0, 0, 0);
            }else{
                /* A empty, B not empty */
                return val;
            }
        }else
            if (val.isEmpty())
                /* A not empty, B empty */
                return *this;
        /* Horizontal union */
        Amin = x;
        Amax = Amin + width;
        Bmin = val.x;
        Bmax = Bmin + val.width;
        if (Bmin < Amin)
            Amin = Bmin;
        result.x = Amin;
        if (Bmax > Amax)
            Amax = Bmax;
        result.width = Amax - Amin;

        /* Vertical union */
        Amin = y;
        Amax = Amin + height;
        Bmin = val.y;
        Bmax = Bmin + val.height;
        if (Bmin < Amin)
            Amin = Bmin;
        result.y = Amin;
        if (Bmax > Amax)
            Amax = Bmax;
        result.height = Amax - Amin;
        return result;
    }

    bool
    Rectangle::operator==(const Rectangle &val) const{
        return equals(val);
    }

    bool
    Rectangle::operator!=(const Rectangle &val) const{
        return !equals(val);
    }
}
