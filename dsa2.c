#include <stdio.h>
int main(){
    int n;
    int *ptr;
    printf("Enter the number of the elements in the array:");
    scanf("%d",&n);
    int arr[n];
    ptr=arr;
    printf("Enter %d elements:\n",n);
    for (int i = 0; i < n; i++)
    {
        printf("Elements %d:",i);
        scanf("%d",ptr);
        ptr++;
    }
    printf("\n Array elements are:\n");
    ptr=arr;
    for (int i = 0; i < n; i++)
    {
        printf("Element %d : %d\n",i,*ptr);
        ptr++;
    }
    return 0;
}