#include "stdio.h"
#include "conio.h"
#include"math.h"
int a[100],b[100];
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
void Tach(int a[],int n,int b[],int &m) {
    int i,j;
    m=0;
    for(i=0; i<n; i++) {
        if(kiemTraSoNguyenTo(a[i])) {
        b[m++] = a[i];
        for(j=i; j<n-1; j++) {
        a[j] = a[j+1];
            }
        n--;
        }
    }
}

 
int main()
{
	int n,m;
	nhapMang(a, n);
    Tach(a,n,b,m);
    xuatMang(b,m);
    }
