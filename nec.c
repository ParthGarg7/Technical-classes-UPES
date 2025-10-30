Parth:
Q9👇

#include <stdio.h>

struct Student {
    char name[50];
    int age;
};

int main() {
    struct Student s[5];
    int i, minIndex = 0;

    // Input student details
    for (i = 0; i < 5; i++) {
        printf("Enter name and age of student %d: ", i + 1);
        scanf("%s %d", s[i].name, &s[i].age);
    }

    // Find youngest student
    for (i = 1; i < 5; i++) {
        if (s[i].age < s[minIndex].age) {
            minIndex = i;
        }
    }

    printf("Youngest student: %s\n", s[minIndex].name);
    return 0;
}