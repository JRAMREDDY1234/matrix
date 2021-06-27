#include<stdio.h>
int main(void){

    int arr[3][3];
    int *ptr = &arr;
    printf("enter the elements of the array \n");
    for(int i=0;i<3;i++){
            for(int j=0;j<3;j++)
           scanf("%d ",&*((ptr+i*3+j))); 
    }

    printf("the elements of the array are \n");
    for(int i=0;i<3;i++){
            for(int j=0;j<3;j++)
            printf("%d ",*((ptr+i*3)+j)); 
            printf("\n");
    }
    {
        int trace=0;
    for(int i=0;i<3;i++)
         {
          trace+=arr[i][i];
         }
       printf("Trace of above matrix is %d\n",trace);
    }
    return 0;
}
