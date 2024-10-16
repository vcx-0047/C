#include <stdio.h>


// printf and newlines


/*int main() {
  printf("Hello World! \n");
  printf("this is the second line ");
  printf(" - its the same line ");
  printf("\n \n \n i skiped 2 lines \n \n ");
  printf("line 1 \n line 2 \n line 3");
  printf("\"a\"");//this will print "a"
 //printf('k');  // This is incorrect and will cause a compilation error.
  return 0;
}*/

// varibales and outputs

/*
int	2 or 4 bytes => %d	
float	4 bytes	 => %f
double	8 bytes	 =>%lf
char	1 byte	=>%c
string   ???  => %s
*/

/*int main(){
    int num1 = 1 ;
    float num2 =0.5;
    //char letter = "w" ; error (In C/C++, single characters are enclosed in single quotes)
    char letter = 'z';
    printf("%d \n",num1);
    printf("%f \n",num2);
    printf("%c \n",letter);
    return 0;
}*/


//some operation


/*int main(){
    int a = 5;
    int b ;
    b=a;
    //multipale declaring
    int some , multplie , minus , devide;

    some =a+b;
    multplie =a*b;
    minus =a-b;
    devide=a/b;

    printf("a + b =%d \n ",some);
    printf("a * b =%d \n ",multplie);
    printf("a - b =%d \n",minus);
    printf("a / b =%d \n ",devide);
    return 0 ;
}*/


//test
int main (){
    char tab [4][4] = {{'1','2','3','4',},
                        {'a','6','n','9',},
                        {'z','l','a','4',},
                       {'o','2','p','q',} };
    int i , j ;

    for (i=0;i<4;i++){
        for (j=0;j<4;j++){
            printf("%c|",tab[i][j]);
        }
        printf("\n");
    }
    printf("///////////////////////////");
 printf("\n");
        for (i=0;i<4;i+=2){
        for (j=0;j<4;j++){
            printf("%c|",tab[i][j]);
        }
        printf("\n");
    }
            for (i=0;i<4;i++){
        for (j=0;j<4;j++){
            if (tab[i][j]%2==1){
                printf("%c|",tab[i][j]);
                        printf("%p|",&tab[i][j]);
        
            }
            
              
            
        }
        printf("\n");
    }
    return 0 ;
}                 