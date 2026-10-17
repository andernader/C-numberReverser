/////////////////////////////////////////////
//About:                                   //
//This program is a c program meant to     //
//reverse the number that the user inputs, //
//the number in this program must be only  //
//2 digits number.                         //
//We have two methods the first one can    //
//only reverse two digits number, while    //
//the second one can reverse any number.   //
//                                         //
//Author: Ammar MULLAOGLU                  //
//Date  : 17.10.2026                       //
/////////////////////////////////////////////

#include <stdio.h>

int main()
{
    printf("Hello, we have in this example two ways to reverse the number\n");
    printf("Which one you want to use?\n");
    printf("1. Normal Digits reverse\n");
    printf("2. Using divider and reminder operators\n");
    printf("Press 1 or 2: ");

    method_choosment:
    char temp = getchar();

    if(temp == '1'){
        int i, j;
        printf("Enter the two digits number you wanna reverse: ");
        scanf("%1d%1d", &i, &j);
        printf("The number we captured is: %d%d\n", i, j);
        printf("The reverse number is %d%d\n", j, i);
        return 0;
    }else if(temp == '2'){
        int user_number, temp = 0, reversed_number = 0;
        printf("Enter the two digits number you wanna reverse: ");
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
    }else{
        printf("Wrong user input, try again!\n");
        getchar();
        goto method_choosment;
    }
}
