#include"Polygon.h"
class Triangle:public Polygon{
    public:
    Triangle(int a, int b):Polygon{a,b}{}//se inicializa el constructor de polygon con los valores que le van
    int area(){                          // a dar al constructor de triangle para poder usar la funcion heredada "area"
        return (width*height)/2;
    }
};