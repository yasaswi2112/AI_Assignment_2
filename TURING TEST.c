#include <stdio.h>
#include <string.h>

int main() {
    char question[200];
    int guess;

    printf("== Simple Turing Test Simulation ==\n");

    printf("Judge: Ask a question:\n");
    fgets(question, sizeof(question), stdin);

    printf("\nParticipant A: I think that's an interesting question.\n");
    printf("Participant B: I'm not sure, but maybe humans enjoy thinking about that.\n");

    printf("\nWhich one is the machine?\n");
    printf("Enter 1 for A or 2 for B: ");
    scanf("%d", &guess);

    if (guess == 1)
        printf("Correct! Participant A was the machine.\n");
    else
        printf("Wrong guess! The machine was Participant A.\n");

    return 0;
}
