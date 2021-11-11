#include "stdio.h"
#include "conio.h"
#include"math.h"
int a[100];
void nhapMang(int x[100], int &n){
	printf("Nhap vao so luong phan tu: ");
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		printf("Nhap x[%d]:", i);
		scanf("%d", &x[i]);
	}
}
int timkiem(int x[], int h, int n)
{
    int i, k = -1;
    for (i = 0; i < n; i++)
        if (h == x[i])
            k = i+1;
    return k;
}
int kiemTraSoNguyenTo(int x){
	if(x<=1) return 0;
	for(int j=2; j<=sqrt(x); j++){
		if (x%j==0) return 0;
	}
	return 1;
}
int TimSoNguyenToDau(int a[], int n){
    for(int i = 0; i < n; i++){
	    if(kiemTraSoNguyenTo(a[i]) == 1){
	    	return a[i];
		}
	}
	return -1;
}
int timMin(int x[], int n){
	int min = x[0];
	for(int i=1; i<n; i++){
		if(min>x[i])
			min = x[i];
	}
	return min;
}
int NguyenDuongMin(int x[],int n) {
    int i,min;
    for(i=0; i<n; i++) {
        if(x[i]>0) {
            min = x[i];
            break;}
        }
    for(i=0; i<n; i++) {
        if(x[i]>0 && x[i]<min)
            min = x[i];
			}
    return min;
}
int main()
{
	int n,x,k;
	nhapMang(a, n);
    printf("\nNhap x: ");
    scanf("%d", &x);
    k= timkiem(a,x,n);
    if(k != -1)
        printf("\n%d xuat hien tai vi tri cuoi mang A la: %d", x, k);
    else
        printf("\n%d khong xuat hien trong mang A", x);
    TimSoNguyenToDau(a,n);
    if(TimSoNguyenToDau(a,n)==-1){
            printf("\nkhong tim thay so nguyen to ");
    	}else{
    		printf("\nso nguyen to dau tien la %d",TimSoNguyenToDau(a,n));
		}
    printf("\n Min = %d", timMin(a, n));
    printf("\n so nguyen duong nho nhat la  = %d", NguyenDuongMin(a,n));
    getch();
}
 

