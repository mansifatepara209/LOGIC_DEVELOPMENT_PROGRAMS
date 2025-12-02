#include <stdio.h>
#include <math.h>

int main()
{
    int hour, minute;
    double hour_angle, min_angle, angle;

    printf("Enter Hour (1-12): ");
    scanf("%d", &hour);
    printf("Enter minutes (0-59): ");
    scanf("%d", &minute);

    hour_angle = 30 * hour + 0.5 * minute;
    min_angle = 6 * minute;

    angle = fabs(hour_angle - min_angle);

    if (angle > 180)
        angle = 360 - angle;

    printf("Angle between %d and %d is %f degree", hour, minute, angle);
    return 0;
}