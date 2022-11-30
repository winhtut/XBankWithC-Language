#include "ncc.h"
#include "stdio.h"
#include "stdlib.h"


void login();
void reGister();
void mainMenu();
int exchangeOption();
int main(){


    //allocateOnMemory();
    //allocation();
    mainMenu();


    return 0;
}

void mainMenu(){
    printf("Welcome to our :X: Bank \n");
    printf("This is MainMenu:\n");
    char i; //for user input:
    printf("Press 'l' to Login!\n");
    printf("Press 'r' to Register!\n");
    printf(" Press 'e' to Exit!\n ");
    scanf(" %c",&i);

    switch (i) {
        case 'l':
            login();
            break;

        case 'r':
            reGister();
            break;
        case 'e':
            printf("This is Exit:\n");
            exit(1);
        default:
            printf("Invalid Option:\n");
            mainMenu();
    }



}

void login(){

    printf("This is Login!\n");
    printf("Enter your username:");
    scanf(" %[^\n]",&strArr);

    printf("Enter your password:");
    scanf(" %[^\n]",&pass);

    int success =loginChecking(&strArr,&pass);

    if(success==1){
        exchangeOption();

    } else{
        printf("Username or Password Wrong:\n");
        login();
    }



}

int exchangeOption(){
    printf("Welcome Mr/Ms :%s\n",strDB[Gcurrent].name);
    printf("This is exchange option:\n");

}

void reGister(){
//    char _rusername[100];
//
//    char _rpassword[100];
//    char _rCpassword[100];
    printf("This is Register!\n");

    printf("Please Enter your username to R:\n");
    scanf(" %[^\n]",&strArr);
    int result =checkingUsername(&strArr);

    while (result == 1){

        printf("Please enter password to R:\n");
        scanf(" %[^\n]",&pass);
        printf("Please enter password to R to Confirm:\n");
        scanf(" %[^\n]",&passC);

        int rFlag = compareCharArray(&pass,&passC);
        if(rFlag == 1){
//            *db[Glocate]->name = _rusername;
//            *db[Glocate]->pass = _rpassword;
            strDB[Glocate]=strArr;
            passDB[Glocate]=pass;


            //db[Glocate][0] = _rusername;
            printf("Registration Success");
            printf("data: %s\n",strDB[Glocate].name);
            printf("data: %s\n",passDB[Glocate].pass);
            Glocate++;
            mainMenu();

        } else{
            printf("Password not match:\n");

        }

    }


}
