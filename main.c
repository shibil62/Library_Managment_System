#include <stdio.h>

//added display messages

int main() {

    int choice = 0;

    while(choice != 6) {

        printf("======================================\n");
        printf("=======Library Management System======\n");
        printf("======================================\n");

        printf("1. Add book \n 2. Search book \n 3. Issue book \n 4. Return book \n 5. Display all books \n 6. Exit \n");
        
        printf("Enter your choice: ");
        scanf(" %d", &choice);

        switch(choice){
            case 1:
            // add group
            printf("\n");
            break;
            case 2:
            // search book
            printf("\n");
            break;
            case 3:
            // issue book
            printf("\n");
            break;
            case 4:
            // return book
            printf("\n");
            break;
            case 5:
            // display book
            printf("\n");
            break;
            case 6:
            printf("Exited . thank you for using");
            printf("\n");
            break;
            default:
            printf("Invalid choice");
            printf("\n");
            break;
        }
    }
}