#include <stdio.h>

struct Student{
	int id;
	char name[50];
	int age;
	char phoneNumber[15];
};
int main(){
		
	struct Student sv[50]={

		{1,"Nguyen Van A",20,"0123456789"},
		{2,"Nguyen Van B",49,"0987654321"},
		{3,"Nguyen Van C",53,"0888888888"},
		{4,"Nguyen Van D",100,"0949534953"},
		{5,"Nguyen Van Xe",99,"0111111111"}
	};
		int numSv = 5;
		
		sv[numSv].id = numSv+1;
		printf("Moi ban nhap ten sinh vien: ");
		fgets(sv[numSv].name,sizeof(sv[numSv].name),stdin);

		printf("Moi ban nhap tuoi sinh vien: ");
		scanf("%d", &sv[numSv].age);	
		fflush(stdin);
		printf("Moi ban nhap so dien thoai sinh vien: ");
		fgets(sv[numSv].phoneNumber,sizeof(sv[numSv].phoneNumber),stdin);
		numSv++;
		printf("\nThong tin cua cac sinh vien:\n");
    for (int i = 0; i < numSv; i++) {
        printf("\nSinh vien thu %d:\n", sv[i].id);
        printf("Ho va ten: %s\n", sv[i].name);
        printf("Tuoi: %d\n", sv[i].age);
        printf("So dien thoai: %s\n", sv[i].phoneNumber);
    }
}
