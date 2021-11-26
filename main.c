/*
    Project: County Library management system.
    Author:  Noah Kirrinkol
    Date:    Oct,2021
    Compiler: GNU GCC
    Language: C99
    License: MIT
*/

/*

Users - view users,Add new user, edit,delete,login,change password,logout
catalogue
Issuance
Serial
Acquisition

KOHA

* Navigation menu

*/
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int menu();
void execute_action(int action);
int main()
{
    int action;
    action = menu();
    execute_action(action);
    return 0;
}

void execute_action(int action) {
    printf("You selected action %d",action);
}

int menu() // header/prototype
{
    int action;
    do {
        printf("\tCounty Library\n");
        printf("Welcome Mr. Titus. \n");
        printf("What would you like to do?\n");
        printf("1. View Users.\n");
        printf("2. Add new User\n");
        printf("3. Edit User\n");
        printf("4. Delete user\n");
        printf("5. Change Password\n");
        printf("6. Log out\n");
        printf("7. Exit System\n");
        printf("Selected Action(1-7): ");
        scanf("%d",&action);
        if ( action < 1 || action > 7) {
            system("cls");
            printf("Invalid action!!! Try again.\n");
        }
    } while( action < 1 || action > 7);

    return action;

}
