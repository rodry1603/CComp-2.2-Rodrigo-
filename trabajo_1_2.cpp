#include<iostream>
#include<string>
#include<cmath>
using namespace std;

const string vacio=" ";
const string x[]={vacio, "uno", "dos","tres","cuatro","cinco","seis","siete","ocho","nueve",
                "diez","once","doce","trece","catorce","quince","diesiseis","diesisiete",
                "diesiocho","diesinueve","veinte","veintiuno","veintidos","veintitres","veinticuatro",
                "veinticinco","veintiseis","veintisiete","veintiocho","veintinueve"};
const string y[]={vacio,vacio,vacio,"treinta","cuarenta","cincuenta","sesenta","setenta","ochenta","noventa"};
const string especiales[]={vacio, vacio , vacio, vacio,"quinientos",vacio,"sete",vacio,"nove"};

string convierte_digito(unsigned long long n, string sufijo){
    if(n==0){
        return vacio;
    }

    if(n>29&&(n%10)==0){
        return y[n/10]+ sufijo;
    }else if(n>29&&(n%10)!=0){
        return y[n/10]+ vacio + "y" + vacio + x[n%10]+ sufijo;
    }else{
        return x[n] + sufijo;
    }
}

string convertir(unsigned long long n){

    string res;
    res =(convierte_digito((n%100),""));
    switch ((n/100)%10)
    {
    case 5:
        res="quinientos"+ vacio + res;
        break;
    case 7:
        res="setecientos"+ vacio + res;
    case 9:
        res="novecientos"+ vacio + res;
    default:
        res=convierte_digito(((n/100)%10),"cientos") + vacio + res;
        break;
    }
    res=convierte_digito(((n/1000)%100),"mil") + vacio + res;
    return res;


}

int main(){
    cout<< convertir(201);
}