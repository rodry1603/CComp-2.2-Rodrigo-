#include <iostream>
#include <string>
#include <bitset>
#include <fstream>
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

void paso_binario(string txt, string tmptxt){
    string linea;
    ifstream arc(txt);
    ofstream arc_1(tmptxt);
    while(getline(arc,linea)){
        string str=linea;
        for(size_t i=0; i <str.size();i++){
            arc_1<<bitset<8>(str[i]);
            
        }
    }
    arc_1.close();
}
void encriptar(int v, string m, string n){
    string linea;
    ifstream z(m);
    ofstream out(n);
    while(getline(z,linea)){
        string str=linea;
        for(size_t i=0; i<str.size();i++){
            int tmp=i*v;
            out<<static_cast<char>(tmp);
        }
    }
    out.close();
}

void desencriptar(int s, string e, string r){
    string linea;
    ifstream t(e);
    ofstream out(r);
    while(getline(t,linea)){
        string str=linea;
        for(size_t i=0; i<str.size();i++){
            int k=static_cast<int>(str[i]);
            int tmp_2=k*s;
            out<<static_cast<char>(tmp_2);
        }
    }
    out.close();
}

void encriptador(int a, int f, string nor, string bi, string enc, string denc){
    paso_binario(nor,bi);
    encriptar(a,bi,enc);
    desencriptar(f,enc,denc);
}


int main(){
    string x="texto.txt";
    string y="temp_texto.txt";
    string z="vacio.txt";
    string g="vacio_2.txt";

    encriptador(21, 121, x,y,z,g);   
}