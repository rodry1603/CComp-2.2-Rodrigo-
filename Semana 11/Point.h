#ifndef __POINT_H__
#define __POINT_H__

#include <iostream>

class Point {
    public:
        Point(int _x = 0, int _y = 0) : x(_x), y(_y) {}

        void setX(int _x);
        int getX() const;
        void setY(int _y);
        int getY() const;
        void print() const;
    private:
        int x, y;
        friend std::ostream& operator<<(std::ostream &output, const Point &p);
};


#endif