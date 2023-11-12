#include <stdio.h>

int main() {

    printf("===================================\n");
    printf("NIM: 231110062\n");
    printf("Name: Joko Supriyanto\n");

    const long distanceEarthFromSun = 149600000;
    int spacecraft, speed, destination;
    long distancePlanetFromSun, distancePlanetFromEarth;
    float time;

    printf("===================================\n");
    printf("Spacecrafts:\n");
    printf("1 => Juno\n");
    printf("2 => Apollo 11\n");
    printf("3 => Voyager 1\n");
    printf("4 => New Horizons\n");
    printf("5 => Parker Solar Probe\n");

    printf("===================================\n");
    do {
        printf("Please select the spacecraft: ");
        scanf("%d", &spacecraft);

        switch (spacecraft) {
            case 1:
                speed = 27400;
                printf("Selected spacecraft: Juno\n");
                break;
            case 2:
                speed = 39937;
                printf("Selected spacecraft: Apollo 11\n");
                break;
            case 3:
                speed = 61000;
                printf("Selected spacecraft: Voyager 1\n");
                break;
            case 4:
                speed = 55000;
                printf("Selected spacecraft: New Horizons\n");
                break;
            case 5:
                speed = 700000;
                printf("Selected spacecraft: Parker Solar Probe\n");
                break;
            default:
                printf("Selected spacecraft (%d) is not valid, please try again.\n", spacecraft);
        }
    } while (spacecraft != 1 && spacecraft != 2 && spacecraft != 3 && spacecraft != 4 && spacecraft != 5);

    printf("===================================\n");
    printf("Destinations:\n");
    printf("1 => Mercury\n");
    printf("2 => Venus\n");
    printf("3 => Mars\n");
    printf("4 => Jupiter\n");
    printf("5 => Saturn\n");
    printf("6 => Uranus\n");
    printf("7 => Neptune\n");

    printf("===================================\n");
    do {
        printf("Please select the destination: ");
        scanf("%d", &destination);

        switch (destination) {
            case 1:
                distancePlanetFromSun = 57900000;
                printf("Selected destination: Mercury\n");
                break;
            case 2:
                distancePlanetFromSun = 108200000;
                printf("Selected destination: Venus\n");
                break;
            case 3:
                distancePlanetFromSun = 227900000;
                printf("Selected destination: Mars\n");
                break;
            case 4:
                distancePlanetFromSun = 778600000;
                printf("Selected destination: Jupiter\n");
                break;
            case 5:
                distancePlanetFromSun = 1433500000;
                printf("Selected destination: Saturn\n");
                break;
            case 6:
                distancePlanetFromSun = 2872500000;
                printf("Selected destination: Uranus\n");
                break;
            case 7:
                distancePlanetFromSun = 4495100000;
                printf("Selected destination: Neptune\n");
                break;
            default:
                printf("Selected destination (%d) is not valid, please try again.\n", destination);
        }
    } while (destination != 1 && destination != 2 && destination != 3 && destination != 4 && destination != 5 &&
             destination != 6 && destination != 7);

    printf("===================================\n");
    printf("Calculating travel time\n");
    if (distancePlanetFromSun > distanceEarthFromSun) {
        distancePlanetFromEarth = distancePlanetFromSun - distanceEarthFromSun;
    } else {
        distancePlanetFromEarth = distanceEarthFromSun - distancePlanetFromSun;
    }
    printf("Estimated destination distance from Earth: %ld km\n", distancePlanetFromEarth);
    printf("Estimated speed: %d km/h\n", speed);

    time = distancePlanetFromEarth / speed;
    printf("Estimated travel time from Earth to destination: %.2f hour (±%f month)\n", time, time / 730);


    return 0;
}


