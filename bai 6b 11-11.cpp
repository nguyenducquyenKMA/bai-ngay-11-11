#include "stdio.h"
#include"math.h"
int a[100],n;
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
void ThemPhanTu(int a[], int &n, int them, int sothem)
{
	for (int i = n; i > them; i--)
		a[i] = a[i - 1];
	n++;
	a[them] = sothem;
}
void Chen(int a[], int &n, int So)
{
	for (int i = 0; i < n; i++)
	{
		if (kiemTraSoNguyenTo(a[i])){
		    ThemPhanTu(a, n, i + 1, So);
		if (kiemTraSoNguyenTo(So))
			i++;
} 
}
}
int main(){
	nhapMang(a, n);
    Chen(a, n, 0); 
	xuatMang(a,n);
}
