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
void SapXep(int a[],int n) {
    int i,j,tam=0,tem;
    for(i=0; i<n-1; i++) {
        for(j=i+1; j<n; j++)
        if(a[i]<a[j]) {
            tem=a[i];
            a[i]=a[j];
            a[j]=tem;
        }
    }
    for(i=n-1; i>0; i--){
        if(a[i-1] == 0 && a[i] != 0) {
        for(j=i-1; j<n; j++) {
            tam = a[j];
            a[j] = a[j+1];
            a[j+1] = tam;
            tam = 0;
            }
        }
    }
}
int main(){
	nhapMang(a, n);
	SapXep(a,n);
	xuatMang(a,n);
}
 
