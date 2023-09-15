#include<stdio.h>

int main(){
    int rows=3;
    int cols=3;
    int arr[rows][cols];
    int value=1;
    for(int i =0;i<rows;i++){
        for(int j=0;j<cols;j++){
            arr[i][j]=value++;
            
        }
    }
    for( int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            printf(" %d ",arr[i][j]);
        }   
        
        printf("\n");
    }
}