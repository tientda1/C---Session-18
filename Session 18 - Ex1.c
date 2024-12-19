#include <stdio.h>

struct SinhVien{
	char fullName[50];
	char phoneNumber[15];
	char age[10];
};
int main(){
	struct SinhVien std1={"Nguyen Quang Huy","0963222006","18"};

	printf("Ten sinh vien la: %s\n", std1.fullName);
	printf("So dien thoai: %s\n", std1.phoneNumber);
	printf("Tuoi: %s\n", std1.age);
	return 0;
}

