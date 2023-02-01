#include <iostream>
#include <vector>
using namespace std;

class Polygon{
    protected:
        int width, height;
    public:

        Polygon(int a, int b) : width(a),height(b){}
        virtual int area() = 0; //Convertir la clase Polygon a clase abstracta, haciendo que el metodo area sea virtual pura
        void printarea(){
            cout <<"\tArea: "<< this->area() <<'\n';
        }
        int getWidth()const{ return width;}
        int getHeight()const{ return height;}
        void print();
};



//Implemente clases que hereden de la clase Polygon: Rectangle, Triangle;cada una con sus variables y funciones miembro particulares.

class Rectangle : public Polygon{
    public:
        Rectangle(int a,int b) : Polygon(a,b){}
        int area(){
            return width * height;
        }
};
class Triangle : public Polygon{
    public:
        Triangle(int a,int b) : Polygon(a,b){}
        int area(){
            return (width * height)/2;
        }
};
void printDimension(const Polygon* p){
            cout << "Width: " << p->getWidth() << "\tHeight: "<<p->getHeight();
}

void print(Polygon arr*) {
    std::cout << "[ ";
    for(int i = 0; i < polygs.size(); i++)
        std::cout << polygs[i] << " ";
    std::cout << "]" << std::endl;
}


int main(){

    vector<Polygon*> polygs;

    polygs.push_back(new Rectangle(4,5));
    polygs.push_back(new Triangle(4,5)); 
    polygs.push_back(new Rectangle(3,2));
    polygs.push_back(new Triangle(2,3));

    for(int i=0; i< polygs.size(); i++){
        printDimension(polygs[i]);
        polygs[i]->printarea();
    }
    polygs->print();
    // Liberar memoria
    for (int i = 0; i < polygs.size(); i++) {
        delete polygs[i];
    }

    return 0;
}