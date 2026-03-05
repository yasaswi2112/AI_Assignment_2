#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int captcha, user_input;

    srand(time(0));
    captcha = rand() % 9000 + 1000;//4 digit  

    printf("=== CAPTCHA Verification ===\n");
    printf("Enter the following number: %d\n", captcha);

    printf("Your input: ");
    scanf("%d", &user_input);

    if (user_input == captcha)
        printf("Verification Successful. You are human!\n");
    else
        printf("Incorrect CAPTCHA. Access denied.\n");

    return 0;
}
