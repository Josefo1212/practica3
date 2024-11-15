#include <iostream>
#include <cmath>

using namespace std;

struct Coordenada{
    float x;
    float y;
};

int main(){
    int n =0;
    float distancia = 0;
    float distanciaMax = 0;
    int punto1 = 0;
    int punto2 = 0;

    cout << "Inserte la cantidad de coordenadas que quiere insertar:";
    cin >> n;

    Coordenada ejes[n];

    for(int i=0; i<n; i++){
        
        
        cout << "Ingrese la coordenada X" << i+1 << ": ";
        cin >> ejes[i].x;

        cout << "Ingrese la coordenada Y" << i+1 << ": ";
        cin >> ejes[i].y;
    }

    cout << "Eliga un cuadrante como limite" << endl;
    cout << "1. Primer cuadrante" << endl;
    cout << "2. Segundo cuadrante" << endl;
    cout << "3. Tercer cuadrante" << endl;
    cout << "4. Cuarto cuadrante" << endl;
    int cuadrante;
    cin >> cuadrante;

    switch(cuadrante){
        case 1:
            for(int i; i<n; i++){
                if(ejes[i].x>0 && ejes[i].y>0){
                    for(int j=0; j<n; j++){
                        if(ejes[j].x>0 && ejes[j].y>0){
                            distancia = sqrt(pow(ejes[j].x - ejes[i].x,2) + pow(ejes[j].y - ejes[i].y,2));
                            if(distancia > distanciaMax){
                                distanciaMax = distancia;
                                punto1 = i;
                                punto2 = j;
                            }
                        }
                    }
                }
            }
        break;

        case 2:
            for(int i=0; i<n; i++){
                if(ejes[i].x<0 && ejes[i].y>0){
                    for(int j=0; j<n; j++){
                        if(ejes[j].x<0 && ejes[j].y>0){
                            distancia = sqrt(pow(ejes[j].x - ejes[i].x,2) + pow(ejes[j].y - ejes[i].y,2));
                            if(distancia > distanciaMax){
                                distanciaMax = distancia;
                                punto1 = i;
                                punto2 = j;
                            }
                        }
                    }
                }
            }
        break;

        case 3:
            for(int i=0; i<n; i++){
                if(ejes[i].x<0 && ejes[i].y<0){
                    for(int j=0; j<n; j++){
                        if(ejes[j].x<0 && ejes[j].y<0){
                            distancia = sqrt(pow(ejes[j].x - ejes[i].x,2) + pow(ejes[j].y - ejes[i].y,2));
                            if(distancia > distanciaMax){
                                distanciaMax = distancia;
                                punto1 = i;
                                punto2 = j;
                            }
                        }
                    }
                }
            }
        break;

        case 4:
            for(int i=0; i<n; i++){
                if(ejes[i].x>0 && ejes[i].y<0){
                    for(int j=0; j<n; j++){
                        if(ejes[i].x>0 && ejes[i].y<0){
                            distancia = sqrt(pow(ejes[j].x - ejes[i].x,2 ) + pow(ejes[j].y - ejes[i].y,2));
                            if(distancia > distanciaMax){
                                distanciaMax = distancia;
                                punto1 = i;
                                punto2 = j;
                            }
                        }
                    }
                }
            }
        break;

        default:
            cout << "No se eligio un cuadrante valido" << endl;
        return 1;
    }

    cout << "La distancia maxima entre los puntos " << punto1 << " y " << punto2 << " es: " << distanciaMax << endl;

    int punto;
    cout << "Ingrese el indice del punto para calcular distancias: ";
    cin >> punto;

    switch (cuadrante) {
        case 1:
            for (int i=0; i < n; i++) {
                if (i != punto && ejes[i].x > 0 && ejes[i].y > 0) {
                    distancia = sqrt(pow(ejes[i].x - ejes[punto].x, 2) + pow(ejes[i].y - ejes[punto].y, 2));
                    cout << "Distancia del punto " << punto << " al punto " << i << " es: " << distancia << endl;
                }
            }
        break;

        case 2:
            for (int i=0; i < n; i++) {
                if (i != punto && ejes[i].x < 0 && ejes[i].y > 0) {
                    distancia = sqrt(pow(ejes[i].x - ejes[punto].x, 2) + pow(ejes[i].y - ejes[punto].y, 2));
                    cout << "Distancia del punto " << punto << " al punto " << i << " es: " << distancia << endl;
                }
            }
        break;

        case 3:
            for (int i=0; i < n; i++) {
                if (i != punto && ejes[i].x < 0 && ejes[i].y < 0) {
                    distancia = sqrt(pow(ejes[i].x - ejes[punto].x, 2) + pow(ejes[i].y - ejes[punto].y, 2));
                    cout << "Distancia del punto " << punto << " al punto " << i << " es: " << distancia << endl;
                }
            }
        break;

        case 4:
            for (int i=0; i < n; i++) {
                if (i != punto && ejes[i].x > 0 && ejes[i].y < 0) {
                    distancia = sqrt(pow(ejes[i].x - ejes[punto].x, 2) + pow(ejes[i].y - ejes[punto].y, 2));
                    cout << "Distancia del punto " << punto << " al punto " << i << " es: " << distancia << endl;
                }
            }
        break;

        default:
            cout << "No se eligio un cuadrante valido" << endl;
        return 1;
    }

    return 0;
    
}