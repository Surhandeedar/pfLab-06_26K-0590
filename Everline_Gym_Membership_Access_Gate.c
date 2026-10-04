#include <stdio.h>

int main() {
    int accessNumber;

    printf("Enter stored access number (or 9999 to exit shift): ");
    scanf("%d", &accessNumber);

    while (accessNumber != 9999) {
        int hour;

        printf("Enter current hour (0-23): ");
        scanf("%d", &hour);

        int isLateNight = (hour >= 22 || hour < 6) ? 1 : 0;
        printf("Mode: %s\n", isLateNight ? "LATE NIGHT MODE" : "STANDARD MODE");

        int accessGranted = 0;

        if (isLateNight) {
            if (accessNumber & 8) {
                accessGranted = 1;
            }
        } else {
            if (accessNumber & (1 | 2 | 4)) {
                accessGranted = 1;
            }
        }

        if (accessGranted) {
            printf("Access: GRANTED\n");
        } else {
            printf("Access: DENIED\n");
        }

        if (accessNumber & 4) {
            printf("Trainer Info: Has Personal Trainer Access\n");
        } else {
            printf("Trainer Info: Does NOT have Personal Trainer Access\n");
        }

        printf("\nEnter next stored access number (or 9999 to exit shift): ");
        scanf("%d", &accessNumber);
    }

    return 0;
}
