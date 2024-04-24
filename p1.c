#include<stdio.h>
main()
{
	int s,i;
	
	printf("Enter the size of an array : ");
	scanf("%d",&s);
	
	int A[i];
	for(i=0;i<s;i++){
		printf("Enter elements of an array : \n");
		scanf("%d",&A[i]);
	}
	
	printf("Negative elements from an Array are :");
	
	for(i=0;i<s;i++){
		if(A[i]<0){
				printf("%d,",A[i]);
		}
	}
}
