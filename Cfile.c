#include <stdio.h>
#include <stdlib.h>
void digit(){
    int x,count=0,finale;
printf("Enter Number to find number of Digits:");
scanf("%d",&x);
finale=x;

while(finale%10!=0){
    finale=finale /10;
    count++;

}
printf("\nThe number of Digits are -> %d",count);


}
