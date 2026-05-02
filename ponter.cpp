#include<stdio.h>
int main(){

int array[7] ={10,20,30,40,50,60,70};
    int *ptr;
    int i;
    ptr = array;
    printf("Accessing array alement using pointer:\n");
    for (i =0;i<7;i++)
    {
    	printf("Element %d = %d\n",i ,*(ptr + i));
	}
	return 0;	
	}

    

