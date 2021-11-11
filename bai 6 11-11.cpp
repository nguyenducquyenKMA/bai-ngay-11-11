#include "stdio.h"
#include"math.h"
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
int kiemTraSoNguyenTo(int x){
	if(x<=1) return 0;
	for(int j=2; j<=sqrt(x); j++){
		if (x%j==0) return 0;
	}
	return 1;
}
void SuaNgTo(int a[],int n) {
    int i;
    for(i=0; i<n; i++){
    	if(kiemTraSoNguyenTo(a[i]))
            a[i] = 0;
	}
}
int main(){
	nhapMang(a, n);
	SuaNgTo(a,n);
	xuatMang(a,n);
}
