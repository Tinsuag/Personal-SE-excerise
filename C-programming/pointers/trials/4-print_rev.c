#include <stdio.h>

void car(char *str){
    int counter;
    for (counter = 0; *str != '\0'; ++str)
		++counter;


    printf("%d",counter);
    for( int i=counter; i>0;--i){
        printf("%c",str[i]);
    }
    //for(int i=count;i>0; --i)
    //    printf("%c", *(str+i));
}

int main(void)
{
    char *str;

    str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
    car(str);
    return (0);
}