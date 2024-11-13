#include<iostream>
using namespace std;

struct cartesiano{
    float x=0; 
    float y=0;
};
int main(){
    
    int n;
    cout<<"Ingrese la cantidad de pares de datos que desea ingresar: ";
    cin>>n;

    cartesiano ejes[n];
    for(int i=0; i<n; i++){
        cout<<"Ingrese los datos de X"<<i+1<<": ";
        cin>>ejes[i].x;
        cout<<"Ingrese los datos de Y"<<i+1<<": ";
        cin>>ejes[i].y;
    };
    for(int i=0; i<n; i++){
    if(ejes[i].x>0 && ejes[i].y>0){
        cout<<"Este par ["<<ejes[i].x<<","<<ejes[i].y<<"]. Pertenece al primer cuadrante."<<endl;
    }else if(ejes[i].x<0 && ejes[i].y>0){
        cout<<"Este par ["<<ejes[i].x<<","<<ejes[i].y<<"]. Pertenece al segundo cuadrante."<<endl;
    }else if(ejes[i].x<0 && ejes[i].y<0){
        cout<<"Este par ["<<ejes[i].x<<","<<ejes[i].y<<"]. Pertenece al tercer cuadrante."<<endl;
    }else if(ejes[i].x>0 && ejes[i].y<0){
        cout<<"Este par ["<<ejes[i].x<<","<<ejes[i].y<<"]. Pertenece al cuarto cuadrante."<<endl;
    }else if(ejes[i].x==0 && ejes[i].y==0){
        cout<<"el par ["<<ejes[i].x<<","<<ejes[i].y<<"]. pertence al origen. "<<endl;
    }else if(ejes[i].x==0){
        cout<<"Este par ["<<ejes[i].x<<","<<ejes[i].y<<"]. Se encuentra sobre el eje Y."<<endl;
    }else if(ejes[i].y==0){
        cout<<"Estre par ["<<ejes[i].x<<","<<ejes[i].y<<"]. Se encuentra sobre el eje X"<<endl;
    }
    }
     for(int i=0; i < n; i++){

        float fx = ejes[i].x + 1;

        if(ejes[i].y == fx){
            cout << "Las coordenadas: [" << ejes[i].x << "," << ejes[i].y << "]. pertenece a la ecuacion f(x)= x+1" << endl;
        }
        else{
            cout << "La coordenadas: [" << ejes[i].x << "," << ejes[i].y << "]. no pertenece a la ecuacion f(x)= x+1" << endl;
        }
    }
    return 0;
}