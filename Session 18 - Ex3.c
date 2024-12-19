#include <stdio.h>

struct SinhVien{
	char name[20];
	int age;
	char phoneNumber[15];

};

int main(){
	struct SinhVien sv[5];
	for(int i=1; i<=5; i++){
	printf("Nhap thong tin sinh vien thu %d\n", i); 
	printf("Moi ban nhap ten sinh vien: ");
	fgets(sv[i].name,sizeof(sv[i].name),stdin);
	printf("Moi ban nhap tuoi sinh vien: ");
	scanf("%d", &sv[i].age);	
	fflush(stdin);
	printf("Moi ban nhap so dien thoai sinh vien: ");
	fgets(sv[i].phoneNumber,sizeof(sv[i].phoneNumber),stdin);
}
	for(int i=1; i<=5; i++){
	printf("\nTen sinh vien %d: %s",i, sv[i].name);
	printf("Tuoi sinh vien: %d\n", sv[i].age);
	printf("So dien thoai sinh vien: %s", sv[i].phoneNumber);

	}

	return 0;
}

