#include <stdio.h>
#include <stdlib.h>

int valor=6;

    void Pares(){
        int i;
        for(i=0;i<=valor;i++){
            if(i%2==0){
                printf("Par: %d\n",i);
            }
        }
    }
    void Impares(){
        int i;
        for(i=0;i<valor;i++){
            if(i%2==1){
                printf("Impar: %d\n",i);
            }
        }
    }
    void SumarPI(){
        int i;
        int SP=0;
        int SI=0;
        for(i=0;i<=valor;i++){
            if(i%2==0){
                SP+=1;
            }
            else{
                SI+=i;
            }
        }
        printf("La suma de pares es: %d\n", SP);
        printf("La suma de impares es: %d\n", SI);
    }

int main(){
    system("cls");
    Pares();
    Impares();
    SumarPI();
    return 0;
}
