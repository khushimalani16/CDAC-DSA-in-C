#include<stdio.h>
#include<stdlib.h>

int main(){
	int rows,cols;
	int **arr;
	
	printf("Enter the number of rows ");
	scanf("%d",&rows);
	
	printf("Enter the number of cols ");
	scanf("%d",&cols);
	
	arr=(int**)malloc(rows*sizeof(int*));
	if(arr==NULL){
		printf("Memory allocation failed for rows.\n");
		return 1;
	}
	
	int i,j;
	for(i=0;i<rows;i++){
	
	arr[i]=(int*)malloc(cols*sizeof(int));
	if(arr[i]==NULL){
		printf("Memory allocation failed for rows.\n");
		return 1;
	}
}

printf("Enter the elements \n");
for(i=0;i<rows;i++){
	for(j=0;j<cols;j++){
		scanf("%d",&arr[i][j]);
	}
}

printf("Display the elements \n");
for(i=0;i<rows;i++){
	for(j=0;j<cols;j++){
		printf("%d\t",arr[i][j]);
	}
	printf("\n");
}

for(i=0;i<rows;i++){
	free(arr[i]);
}

free(arr);

return 0;
}
