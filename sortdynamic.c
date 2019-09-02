#include<stdio.h>
#include<stdlib.h>
void sort(int a[],int size)
{
  int temp,i,j;
  for(i=0;i<size;i++)
  {
   for(j=0;j<size-1;j++)
   {
    if(a[j]>a[j+1])
    {
     temp=a[j];
     a[j]=a[j+1];
     a[j+1]=temp;
    }
  }
 }
}

int main(){
    
    int *a;
     a=(int*)malloc(1000*sizeof(int));
    int j,i=0;
    char c;
    printf("Input array elements:");
    do{
      scanf("%d",&a[i]);
        i++;
        scanf("%c",&c);
    }while(c!='\n');
    sort(a,i);
    printf("\nAscending:");
    for(j=0;j<i;j++)
    printf("%d ",a[j]);
    printf("\nDescending:");
    for(j=i-1;j>=0;j--)
    printf("%d ",a[j]);
return 0;

}