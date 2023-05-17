#include <stdio.h>
#include <math.h>
#define X 40

double calcularDistancia(int x1, int y1, int x2, int y2);

double calcularDistancia(int x1, int y1, int x2, int y2)
{
    return sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
}

int main(){
    int punto[2][X];
    double dm[2][2];
    double d=0;
    int i=0, j=0;
    for(i=0;i<X;i++){
		for(j=0;j<2;j++){
			punto[j][i]=rand() % 13;
		
		}
		
	}
    for(i=0;i<X;i++){
        for(j=0;j<X-1;j++){
        	
            d=calcularDistancia(punto[0][i],punto[1][i],punto[0][j],punto[1][j]);
           
            if(i==0 && j==1){
                dm[0][0]=d;
                dm[1][0]=i;
                dm[1][1]=j;
            }else if(d<dm[0][0] && i!=j){
                dm[0][0]=d;
                dm[1][0]=i;
                dm[1][1]=j;
            }
    
        }
    }
    printf("La distancia mas pequeÃ±a es de %f y es entre los puntos %d y %d",  dm[0][0], (int)dm[1][0], (int)dm[1][1]);
    return(0);
}
