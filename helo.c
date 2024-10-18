#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<Windows.h>
#include<stdlib.h>
#include<unistd.h>


#define charLimit 20

void breker(char inputString[],char resultString[],int num){
    printf("%s \n %s \n %d",inputString,resultString,num);
}

int main(){

    char inputString[charLimit]= "Hello World!", resultString[charLimit];
    int i, stringLength;

    //uncomment this if you want to input diffrent strings
    /*
    scanf("%[^\n]s",&inputString);
    */

    stringLength = strlen(inputString);
    
    //intitlize the result tring as blanks or ' ' 

    printf("%s\n",inputString);

    for(i=0;i<charLimit;i++){
        resultString[i]=' ';
    }

    for(i=0;i<stringLength;i++){
        resultString[i]='a';
        while(resultString[i] != inputString[i]){
            printf("%s\n",resultString);
            resultString[i]++;
            Sleep(10);
            system("cls");
        }
    }

    printf("%s\n",resultString);

    getch();
    return 0;
}
