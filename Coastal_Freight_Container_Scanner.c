#include <stdio.h>

int main() {
    int totalContainers;
    int containerNum;

    printf("Enter total number of containers for today: ");
    scanf("%d", &totalContainers);

    for (containerNum = 1; containerNum <= totalContainers; containerNum++) {
        float weight;
        int cargoType;

        printf("\nContainer %d:\n", containerNum);
        printf("Enter container weight (kg): ");
        scanf("%f", &weight);
        printf("Enter cargo type (1: General, 2: Hazardous, 3: Refrigerated): ");
        scanf("%d", &cargoType);

        int allowed = 0;

        switch (cargoType) {
            case 1:
                if (weight <= 20000.0f) {
                    allowed = 1;
                }
                break;
            case 2:
                if (weight <= 15000.0f && (containerNum % 2 != 0)) {
                    allowed = 1;
                }
                break;
            case 3:
                if (weight <= 18000.0f) {
                    allowed = 1;
                }
                break;
            default:
                allowed = 0;
                break;
        }

        int trackingCode = ((int)weight % 97) % 100;

        if (allowed) {
            printf("Decision: May be loaded\n");
        } else {
            printf("Decision: CANNOT be loaded\n");
        }

        printf("Tracking Code: %02d\n", trackingCode);
    }

    return 0;
}
