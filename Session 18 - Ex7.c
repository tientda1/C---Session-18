#include <stdio.h>
typedef struct {
    int id;
    char name[50];
    int age;
    char phoneNumber[20];
} Student;

Student students[50] = {
    {1, "Alice", 20, "123-456-7890"},
    {2, "Bob", 21, "234-567-8901"},
    {3, "Charlie", 22, "345-678-9012"},
    {4, "David", 23, "456-789-0123"},
    {5, "Eve", 24, "567-890-1234"}
};
int studentCount = 5;
void displayStudents() {
    printf("Danh sach sinh vien:\n");
    for (int i = 0; i < studentCount; i++) {
        printf("ID: %d, Name: %s, Age: %d, Phone Number: %s\n", students[i].id, students[i].name, students[i].age, students[i].phoneNumber);
    }
}
void deleteStudentByName(char *name) {
    int found = 0;
    for (int i = 0; i < studentCount; i++) {
        if (strcmp(students[i].name, name) == 0) {
            found = 1;
            for (int j = i; j < studentCount - 1; j++) {
                students[j] = students[j + 1];
            }
            studentCount--;
            break;
        }
    }
    if (!found) {
        printf("Sinh vien voi ten '%s' khong ton tai.\n", name);
    }
}

int main() {
    displayStudents();
    char nameToDelete[50];
    printf("Nhap ten sinh vien can xoa: ");
    scanf("%s", nameToDelete);
    deleteStudentByName(nameToDelete);
    displayStudents();

    return 0;
}

