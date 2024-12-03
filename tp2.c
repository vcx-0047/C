#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char * load_string(int N){ 
    char *str = (char*)malloc((N + 1) * sizeof(char)); 
    printf("Insert a  word withe %d letter  at most: ", N); 
    scanf("%s", str);   
    return str;
}
int length(char *ch){
    int len = 0; 
    while (ch[len] != '\0') {
        len++;
    }
    return len;
}
void load_table(char *p ,char Table[]){
    int i=0;
    while (p[i] != '\0') {
        Table[i]=p[i];
        i++;
    }
}
void inverse_table(char Table[] , char t[]  ,int m){
    for(int i=0;i<m;i++){
       t[m-1-i]=Table[i];
    }
}
void display_table(char Table[] ,int m){
    for(int i=0;i<m;i++){
        printf("%c",Table[i]);
    }

}
int main(){
    char* ch;
    unsigned int n;
    printf("Insert the size of the word: ");
    scanf("%u", &n);   
    ch = load_string(n);
    int m = length(ch);
    printf("\n this word contain %d letter \n " ,m);
    char table[m] ,t[m] ;
    load_table(ch ,table);
    printf("befor invers \n");
    display_table(table ,m);
    inverse_table(table ,t,m);
    printf("\n");
    printf("after invers \n");
    display_table(t,m);
    free(ch);
    return 0;
}