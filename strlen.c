#include<stdio.h>
int main(){
    int count=0;
    char str1[10];
    printf("enter");
   scanf("%s",str1);
for(int i=0;str1[i]!=NULL;i++){
    count++;
}

printf("The length of the string is %d ",count);

return 0;
}
