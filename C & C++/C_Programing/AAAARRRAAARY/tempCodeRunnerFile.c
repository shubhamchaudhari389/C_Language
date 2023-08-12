#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct student
{
    int stud_id;
    int name_len;
    int struct_size;
    char stud_name[0];
    // varible length of array must be
    //last
};

//memory allocation and initialisation of structure

struct student* creatStudent(struct student* s, int id, char[])
{
    s= malloc(sizeof(*s)+sizeof(char)*strlen(a));

    s->stud_id =id;
    s->name_len =strlen(a);
    strcpy(s->stud_name, a);

    s->struct_size =(sizeof(*s) + sizeof(char) * strlen(s->stud_name));

return s;
}

void printStudent(struct student* s)
{
    printf("Student_id:%d\n"
           "Stud_Name :%s\n"
           "Name_Length: %d\n"
           "Allocated_Struct_Size:%d\n\n",
           s->stud_id,s->stud_name->name_len,
           s->struct_size);

           //Value of allocated_struct_size here is in Bytes.
        
}


int main()
{
    struct student *s1 *s2;
    s1=creatStudent(s1,523, "Sanjayulsha");
    s2=creatStudent(s2,535, "cherry");

    printStudent(s1);
    printStudent(s2);

    // Size in Byte 
    printf("Size of Struct student:%lu\n",sizeof(struct student));

    // size in bytes 
    printf("Size of Struct pointer :%lu", sizeof(s1));

    return 0;
}