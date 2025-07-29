#include<stdio.h>

int main(){
int s;
printf("Enter the size of the array: ");
scanf("%d",&s);
int arr[s];
int sum = 0;
int n;
for(int i=0; i<s;i++){
    scanf("%d",&n);
    arr[i] = n;
    sum+= n;
}

float average = (float)sum/s;
printf("the average is : %f",average);
return 0;

}




