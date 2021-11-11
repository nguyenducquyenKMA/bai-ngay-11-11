#include "stdio.h"
int a[100],b[100],c[100];
int n,m,p;
void nhapMang(int x[100], int &n){
	printf("Nhap vao so luong phan tu: ");
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		printf("Nhap x[%d]:", i);
		scanf("%d", &x[i]);
	}
}
void xuatMang(int x[100], int n){
	printf("Gia tri cua mang la: ");
	for(int i=0; i<n; i++){
		printf("%d ", x[i]);
	}
}
void swap(int &a, int &b){
	int tam=a;
	a = b;
	b = tam;
}
void sapXepGiam(int x[100], int n){
	for(int i=0; i<n-1; i++){
		int vitrilonnhat = i;
		for(int j=i+1; j<n; j++){
			if(x[j]>x[vitrilonnhat])
				vitrilonnhat = j;
		}
		swap(x[i],x[vitrilonnhat] );
	}
}
void printMang(int x[100], int n){
	for(int i=0; i<n; i++){
		printf("%d ", x[i]);
	}
}
int main(){
	nhapMang(a, n);
	printf("\n Mang giam dan: ");
	sapXepGiam(a, n);
	printMang(a, n);
}
