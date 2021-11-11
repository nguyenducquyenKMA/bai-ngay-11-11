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
void TachMang(int a[], int b[], int c[], int &n, int &m, int &p)
{
	printf("\nNhap vao so phan tu muon tach vao mang B[] =  ");
	scanf("%d",&m);
	printf("Nhap vao so phan tu muon tach vao mang C[] =  ");
	scanf("%d",&p);
	int j=0;
	for (int i=0; i<n; i++)
	{
		if ( a[i] >0)
		{
			b[i]=a[i];
		}
		else 
		{
			c[j]=a[i];
			j++;
		}
	}
	return;
}
int main(){
	nhapMang(a, n);
	TachMang(a,b,c,n,m,p);
    xuatMang(b,m);
    printf("\n");
    xuatMang(c,p);
}    
