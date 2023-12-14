#include <stdio.h>

int main()
{ 
    int a,b,c;
    char ch;
    printf ("enter first number with operator like 4+ and hit enter");
    scanf("%d %c",&a,&ch);
    printf("enter the second number ");
    scanf("%d",&b);
    switch(ch){
        case '+':c=a+b;
        printf("addition of %d and %d is %d",a,b,c);
        break;
        case '-':c=a-b;
        printf("substraction of %d and %d is %d",a,b,c);
        break;
        case '*': c=a*b;
        printf("multiplication of %d and %d is %d",a,b,c);
        break;
        case '/':c=a/b;
        printf("quotient of %d and %d is %d",a,b,c);
        break;
        case '%':c=a%b;
        printf("reminder of %d and %d is %d",a,b,c);
        break;
    }
        

    return 0;
}

