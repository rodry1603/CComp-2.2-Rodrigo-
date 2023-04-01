#include<iostream>
#include<fstream>
#include<string>
#include<stdlib.h>
using namespace std;

int congruencia(int a, int b){
    int x{1};
    if(a>=b){
        while((x*b)<a){
            x+=1;
        }
        a-=(x*b);
    }
    return a;
}

int casoNegativo(int a, int b){
    int x{1};
    if(a<0){
        while(a+b*x<0)
            x+=1;
    }
    return a + b * x;
}

int inversa(int a, int b){
    a=congruencia(a,b);
    int a2{a}, b2{b}, a3;
    int x{0}, y{1}, z, q, r{1}, contador{0};
    while(r != 0){
        a3=r;
        q=b2/a2;
        r=b2%a2;
        b2=a2;
        a2=r;
        contador+=1;
    }
    if(a3 == 1){
        a2=a;
        b2=b;
        while(contador > 1){
            q=b2/a2;
            r=b2%a2;
            b2=a2;
            a2=r;
            z=casoNegativo(x-y*q,b);
            x = y;
            y = z;
            contador -=1;
        }
        return z;
    }
    return 0;
}

void encriptar_arch(string txtarchivo, string tmparchivo){
    string linea;
    ifstream archivo(txtarchivo.c_str());
    ofstream temp1(tmparchivo);
    while(getline(archivo, linea)){
        for(int i=0; i<linea.length(); ++i){
            char letra = linea[i];
            //letra=letra;
            temp1<<letra;
            //cout<< letra;
        }
        cout<<endl;
    }
    temp1.close();
}

int main(){
    string x="texto.txt";
    string y="temp_texto.txt";
    encriptar_arch(x,y);
}