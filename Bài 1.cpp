#include<stdio.h>
#include<conio.h>
int main(){
	int a,b,s=0;
	printf("Nhap vao so nguyen a: ");
	scanf("%d",&a);
	printf("Nhap vao so nguyen b(b>a): ");
	scanf("%d",&b);
	for(int i=a;i<=b;i++) s+=i;
	printf("Vay tong tu %d den %d la: %d",a,b,s);
	getch();
}
