#include <stdio.h>
#include <stdlib.h>

int main()
{
    accountOperations();
}
void accountOperations(){

    char username[5];
    char usernamenew[5];
    char usernames[10][10] = {"ali, veli, ayse, elif, busra"};
    int passwords[10] = {1931, 1071, 8012, 1705, 1379};
    int password, password1;
    int option,option1;
    int price;
    int cash = 2000;
    double accountNumber;

    printf("******Welcome*******\n");
    printf("Options:\n1:Sign In\n2:Create a new user\n");
    printf("Please, sign in if you have an account in our bank, or create a new account if you do not have an account in our bank\n");
    scanf("%d",&option);
    switch(option){
        case 1:
            printf("Enter your username: ");
            scanf("%s",&username);
            for (int i=0; i < 6; i++) {
                if (strcmp(username,usernames[i])){
                    printf("Enter your password: ");
                    scanf("%d",&password);
                    for(int j = 0; j < 6; j++){
                        if(passwords[j] == password){
                            printf("You logged in");
                            printf("Options\n1:Lodgement\n2:Withdrawal\n3:Transfer\n4:Cash Learning\n5:Card Refund\n");
                            printf("\nPlease, Choose an option: ");
                            scanf("%d",&option1);

                            switch(option1){
                                case 1:
                                    printf("Your Balance:  %d",cash);
                                    printf("\nPlease, Enter a price: ");
                                    scanf("%d",&price);
                                    if(price > cash){
                                        printf("\nCash is not enough\n");
                                    }
                                    else{
                                        cash -= price;
                                        printf("\nYour rest cash: %d\n",cash);
                                    }
                                    break;

                                case 2:
                                    printf("\nYour Cash:  %d\n",cash);
                                    printf("Please, Enter a price: ");
                                    scanf("%d",&price);

                                    cash += price;
                                    printf("\nCash: %d\n",cash);
                                    break;

                                case 3:
                                    printf("\nYour Cash:  %d\n",cash);
                                    printf("Please, Enter a price for transfer: ");
                                    scanf("%d",&price);
                                    if(price > cash){
                                        printf("\nCash is not enough\n");
                                    }
                                    else{
                                        cash -= price;
                                        printf("\nYour rest cash: %d\n",cash);
                                    }
                                    break;

                                case 4:
                                    printf("\nYour Cash: %d\n",cash);
                                    break;

                                case 5:
                                    printf("\nCard was returned.\n");
                                    break;
                                default:
                                    printf("Request is not understood.\nPlease, choose an option\n");
                                    printf("Options\n1:Lodgement\n2:Withdrawal\n3:Transfer\n4:Cash Learning\n5:Card Refund\n");
                                    scanf("%d",&option1);
                            }
                        }
                    }
                }
                else{
                    printf("username is not correct");
                }
            }
            break;
        case 2:
            printf("Please create a username: ");
            scanf("%s",&usernamenew);
            usernames[6]==usernamenew;
            printf("Please create a password: ");
            scanf("%d",&password1);
            passwords[5]==password1;
            printf("You created a new account in our bank. Please, log in your account.");
            accountOperations();
            break;

        default :
            printf("Request is not understood.\nPlease, choose an option\n");
            printf("Options:\n1:Sign In\n2:Create a new user\n");
            scanf("%d",&option);

    }

    return 0;
}