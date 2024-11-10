//Using arrays to store the strings.
#include<stdio.h>
void main(){
    char  name[12]={'C','i','t','y','C','o','l','l','e','g','e','\0'};
   /* printf("%s\n", name);
    printf("%c\n", name[1]);
    printf("%c\n\n", name[3]);
    printf("%c\n\n", name[3]);
    for (int i=0; i< 4; i++){
        printf("%c\t\t", name[i]);
    puts("\n\n");*/
    //Run the loop till it is null(\0)
    int count=0;
    for (int j=0; name[j] != '\0'; j++){
        if(name[j] == 'a' || name[j] == 'e' || name[j] =='i' || 
        name[j]=='o' || name[j]=='u' || name[j] == 'A' || name[j] == 'E' 
        || name[j] =='I' || name[j]=='O' || name[j]=='U')
        {printf("%c\t\t", name[j]);
        count++;
        }
    }
    printf("Total # of vowels = %d", count);
}