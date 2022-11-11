#ifndef__POINT_H__
#define__POINT_H__

template<typrname T>
class Point{
    private:
    T x,y;

    public:
    Point(const T u, const T v): x(u), y(v){}
    T getX()const;
    T getY()const;
    

};

template <typename T>
T Point<T>::getX() const{
    return x;
}

template <typename T>
T Point<T>::getY() const{
    return y;
}