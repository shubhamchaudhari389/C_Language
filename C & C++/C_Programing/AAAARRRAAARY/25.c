//the comparision my_strcmp() is simple compared my_strcmp(). 

int my_strcmp(char *a, char *b)
{
    return (*a == *b && *b=='\0')? 0: (*a == *b ) ? my_strcmp(++a,++b):1;
}

int main()
{
    char *a ="geeksforgeeks";
    char *b ="geeksforgeeks";
    if(my_strcmp(a,b)==0)
        printf("string are same");
    else
       printf("string are not same");
    
    getchar();
    return 0;
 }