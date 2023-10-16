#include<stdio.h>
#include<math.h>
int main() {
    float distance, x1, y1, x2, y2;
    printf("enetr the point 1:");
    scanf("%f %f", &x1, &y1);
    printf("enetr the point 2:");
    scanf("%f %f, &x2, &y2");
    distance = ((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
    printf("distance between two point is : %f", distance);
}
