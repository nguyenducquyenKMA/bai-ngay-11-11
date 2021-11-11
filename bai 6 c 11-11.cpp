#include "stdio.h"
#include"math.h"
int a[100],n,i;
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
int kiemTraSoNguyenTo(int x){
	if(x<=1) return 0;
	for(int j=2; j<=sqrt(x); j++){
		if (x%j==0) return 0;
	}
	return 1;
}
void xoamang(int n,int x,int a[]){
   for(int i=x;i<n;i++)
	{
		a[i]=a[i+1];
	}
	n=n-1;	
}
int main(){
	nhapMang(a,n);
	for(i=0;i<n;i++){
		if(kiemTraSoNguyenTo(a[i])==1){
			xoamang(n,i,a);
			n=n-1;
            i--;
		}
	}
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
}
