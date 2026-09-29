#include <stdio.h>

int main() {
    int value, option;

   
    const int LIGHTS = 1;       
    const int HEATER = 2;       
    const int AC = 4;           
    const int CAMERA = 8;       

    while (1) {
        
        printf("Enter current appliance value (-1 to stop): ");
        scanf("%d", &value);

        
        if (value == -1) {
            break;
        }

        printf("Choose an option:\n");
        printf("1. Switch Water Heater ON\n");
        printf("2. Switch Air Conditioner OFF\n");
        printf("3. Toggle Main Lights\n");
        printf("4. Check Security Camera\n");
        printf("Enter option: ");
        scanf("%d", &option);

        switch (option) {

            case 1:
                
                value = value | HEATER;
                break;

            case 2:
                
                value = value & ~AC;
                break;

            case 3:
                
                value = value ^ LIGHTS;
                break;

            case 4:
                
                if (value & CAMERA)
                    printf("Security Camera is ON.\n");
                else
                    printf("Security Camera is OFF.\n");
                break;

            default:
                printf("Invalid option.\n");
        }

       
        printf("New combined appliance value: %d\n", value);

        
        if ((value & AC) && (value & HEATER))
            printf("OVERLOAD WARNING: Air Conditioner and Water Heater are both ON!\n");
        else
            printf("No overload: Air Conditioner and Water Heater are not both ON.\n");

        printf("\n");
    }

    printf("Shift completed.\n");

    return 0;
}

