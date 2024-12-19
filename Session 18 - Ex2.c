#include <stdio.h>

struct SinhVien{
	char name[20];
	int age;
	char phoneNumber[15];

};
int main(){
	struct SinhVien sv1;
	printf("Moi ban nhap ten sinh vien: ");
	fgets(sv1.name,sizeof(sv1.name),stdin);
	printf("Moi ban nhap tuoi sinh vien: ");
	scanf("%d", &sv1.age);	
	fflush(stdin);
	printf("Moi ban nhap so dien thoai sinh vien: ");
	fgets(sv1.phoneNumber,sizeof(sv1.phoneNumber),stdin);
	printf("Ten sinh vien: %s", sv1.name);
	printf("Tuoi sinh vien: %d\n", sv1.age);
	printf("So dien thoai sinh vien: %s\n", sv1.phoneNumber);

	return 0;
}

