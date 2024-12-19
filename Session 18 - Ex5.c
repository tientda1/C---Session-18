#include <stdio.h>

struct Student{
	int id;
	char name[50];
	int age;
	char phoneNumber[15];
};
int main(){
	int idSV;
	
	struct Student sv[50]={
		{1,"Nguyen Van A",20,"0123456789"},
		{2,"Nguyen Van B",49,"0987654321"},
		{3,"Nguyen Van C",53,"0888888888"},
		{4,"Nguyen Van D",100,"0949534953"},
		{5,"Nguyen Van Xe",99,"0111111111"}
	};
	int numSv = 5;
	printf("Nhap id sinh vien (1->5): ");
	scanf("%d", &idSV);
	if(idSV==1){
		printf("Sua thong tin sinh vien co id la %d\n", idSV);
		fflush(stdin);
		printf("Moi ban nhap ten sinh vien: ");
		fgets(sv[idSV].name,sizeof(sv[idSV].name),stdin);
		fflush(stdin);
		printf("Moi ban nhap tuoi sinh vien: ");
		scanf("%d", &sv[idSV].age);	
	}
	else if(idSV==2){
		printf("Sua thong tin sinh vien co id la %d\n", idSV);
		fflush(stdin);
		printf("Moi ban nhap ten sinh vien: ");
		fgets(sv[idSV].name,sizeof(sv[idSV].name),stdin);
		fflush(stdin);
		printf("Moi ban nhap tuoi sinh vien: ");
		scanf("%d", &sv[idSV].age);	
	}
	else if(idSV==3){
		printf("Sua thong tin sinh vien co id la %d\n", idSV);
		fflush(stdin);
		printf("Moi ban nhap ten sinh vien: ");
		fgets(sv[idSV].name,sizeof(sv[idSV].name),stdin);
		fflush(stdin);
		printf("Moi ban nhap tuoi sinh vien: ");
		scanf("%d", &sv[idSV].age);	
	}
	else if(idSV==4){
		printf("Sua thong tin sinh vien co id la %d\n", idSV);
		fflush(stdin);
		printf("Moi ban nhap ten sinh vien: ");
		fgets(sv[idSV].name,sizeof(sv[idSV].name),stdin);
		fflush(stdin);
		printf("Moi ban nhap tuoi sinh vien: ");
		scanf("%d", &sv[idSV].age);	
	}
	else if(idSV==5){
		printf("Sua thong tin sinh vien co id la %d\n", idSV);
		fflush(stdin);
		printf("Moi ban nhap ten sinh vien: ");
		fgets(sv[idSV].name,sizeof(sv[idSV].name),stdin);
		fflush(stdin);
		printf("Moi ban nhap tuoi sinh vien: ");
		scanf("%d", &sv[idSV].age);	
	}else{
		printf("Khong tim thay id cua sinh vien!");
	}
	
	if(idSV==1||idSV==2||idSV==3||idSV==4||idSV==5){
	printf("\nThong tin cua cac sinh vien:\n");
    for (int i = 0; i < numSv; i++) {
        printf("\nSinh vien thu %d:\n", sv[i].id);
        printf("Ho va ten: %s\n", sv[i].name);
        printf("Tuoi: %d\n", sv[i].age);
        printf("So dien thoai: %s\n", sv[i].phoneNumber);
    }
	}
	


	return 0;
}

