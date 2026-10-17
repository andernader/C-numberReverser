/////////////////////////////////////////////
//About:                                   //
//This program is a c program meant to     //
//reverse the number that the user inputs, //
//the number in this program must be only  //
//2 digits number.                         //
//We have two methods the first one can    //
//only reverse two digits number, while    //
//the second one can reverse any number.   //
//The third one also only entended for the //
//digits.                                  //
//                                         //
//Author: Ammar MULLAOGLU                  //
//Date  : 17.10.2026                       //
/////////////////////////////////////////////

#include <stdio.h>

int main()
{
    printf("Hello, we have in this example two ways to reverse the number\n");
    printf("Which one you want to use?\n");
    printf("1. Normal Digits reverse using scanf with %1d\n");
    printf("2. Using divider and reminder operators\n");
    printf("3. Digits reverse using printf with the divider and reminder operator\n");
    printf("\nPress 1, 2 or 3: ");

    method_choosment:
    char temp = getchar();

    if(temp == '1'){
        int i, j;
        printf("Enter the \x1b[31mtwo digits\x1b[0m number you wanna reverse: ");
        scanf("%1d%1d", &i, &j);
        printf("The number we captured is: %d%d\n", i, j);
        printf("The reverse number is %d%d\n", j, i);
        return 0;
    }else if(temp == '2'){
        int user_number, temp = 0, reversed_number = 0;
        printf("Enter \x1b[31many\x1b[0m digits number you wanna reverse: ");
        scanf("%d", &user_number);
        process_again:
        temp = temp + user_number % 10;
        user_number = user_number / 10;
        if(user_number == 0){
            printf("The reversed number is: %d\n", temp);
            return 0;
        }
        temp = temp * 10;
        goto process_again;
    }else if(temp == '3'){
        int number;
        printf("Enter the \x1b[31mtwo digits\x1b[0m number you wanna reverse: ");
        scanf("%d", &number);
        printf("The reversed number is: %d%d\n", number % 10, number / 10);
    }
    else{
        printf("Wrong user input, try again!\n");
        getchar();
        goto method_choosment;
    }
}
