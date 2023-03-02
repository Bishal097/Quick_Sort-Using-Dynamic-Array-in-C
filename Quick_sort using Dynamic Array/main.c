#include <stdio.h>
#include <stdlib.h>

void quicksort(int a[25],int first,int last){
   int i, j, pivot, temp;
   if(first<last){
      pivot=first;
      i=first;
      j=last;
      while(i<j){
         while(a[i]<=a[pivot]&&i<last)
         i++;
         while(a[j]>a[pivot])
         j--;
         if(i<j){
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
         }
      }
      temp=a[pivot];
      a[pivot]=a[j];
      a[j]=temp;
      quicksort(a,first,j-1);
      quicksort(a,j+1,last);
   }
}
int main()
{
    int *a,i,n;
    printf("\nEnter the length of the Array\n");
    scanf("%d",&n);
    a=(int*)malloc(n*sizeof(int));
    for(i=0; i<n; i++)
    {
        printf("\nEnter the element");
        scanf("\n%d",&a[i]);
    }
    quicksort(a,0,n-1);
    printf("\nArray after sorting\n");
    for(i=0; i<n; i++)
    {
        printf("%d\t",a[i]);
    }
}
