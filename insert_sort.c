/**
*
*
*
**/
#include<stdio.h>
#include<stdlib.h>
#define N 5
void exchange(int *,int *);
void insert_sort(int *arr,int length);
int main(){
	int arr[] = {5,3,9,1,0};
	printf("before sort:\n");
	for(int i = 0;i < N;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
	insert_sort(arr,N);
	printf("after sort:\n");
	for(int i = 0;i < N;i++){
		printf("%d ",arr[i]);
	}

}
void insert_sort(int *arr,int length){
	int temp[length];
	for(int i = 0;i< length;i++){
		temp[i] = arr[i];
	}
	for(int i = 1;i < length;i++){
		int j = i;
		while(j > 0 && arr[j-1] > temp[i]){
			arr[j] = arr[j-1];
			j--;
		}
		arr[j] = temp[i];
	}
}
