/**
*bubble sort:
*time consume:θ(n) = n ^ 2;
*extra space consume: θ(1)
*sort in place: Yes
*stable: yes
**/
#include<stdio.h>
#include<stdlib.h>
void exchange(int *,int *);
void bubble(int *arr,int length);
int main(){
	int arr[] = {12,4,5,9,10};
	printf("before sort:\n");
	for(int i = 0;i < 5;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
	bubble(arr,5);
	for(int i = 0;i < 5;i++){
		printf("%d ",arr[i]);
	}
}
void bubble(int *arr,int length){
	int flag = 0;
	while(!flag){
		flag = 1;
		for(int j = 0;j < length - 1;j++){
			if(arr[j] > arr[j+1]){
				exchange(&arr[j],&arr[j+1]);
				flag = 0;
			}
		}
	}
}
void exchange(int *src,int *dest){
	int temp = *src;
	*src = *dest;
	*dest = temp;
}
