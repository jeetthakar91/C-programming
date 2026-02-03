#include <stdio.h>
#include<string.h>
struct stur {
    int marks;
    float avg;
    char name[20];
};
void main() {
    struct stur s;
    s.marks = 85;
    s.avg = 85.57;
   strcpy(s.name,"jeet");

    printf("Structure Values:\n");
    printf("a = %d, b= %f c= %s",s.marks, s.avg, s.name);

}

