#include<iostream>
#include <math.h>
#include <iomanip>

using namespace std;

struct ponto{
    float x;
    float y;
};

struct retangulo{
    ponto es;
    ponto di;
};

float tamanhoLado(float esq, float dir){
    float tam;
    tam=esq-dir;
    tam=fabs(tam);
    return tam;
}

float pitagoras(float catetoa, float catetob){
    float hipo, aux;
    aux=pow(catetoa, 2)+pow(catetob, 2);
    hipo=sqrt(aux);
    return hipo;
}

void print(float a, float d, float p){
    cout<<fixed<<setprecision(2);
    cout<<"Área do Retângulo: "<<a<<endl;
    cout<<"Diagonal do Retângulo: "<<d<<endl;
    cout<<"Perímetro do Retângulo: "<<p<<endl;

}

int main(){
    float perimetro, diagonal, area, a, b;
    
    retangulo retan;

    cin>>retan.es.x>>retan.es.y;
    cin>>retan.di.x>>retan.di.y;

    a=tamanhoLado(retan.es.y, retan.di.y);
    b=tamanhoLado(retan.es.x, retan.di.x);

    area=a*b;
    perimetro=(2*a)+(2*b);
    diagonal=pitagoras(a, b);

    print(area, diagonal, perimetro);
    return 0;
}