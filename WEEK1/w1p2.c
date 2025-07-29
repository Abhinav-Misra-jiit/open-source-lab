#include<stdio.h>
#include<string.h>

int main(){

char arr[100];
printf("please enter a string: ");
fgets(arr,sizeof(arr),stdin);
strrev(arr);

 printf("Reversed String: %s\n", arr);

return 0;
}
