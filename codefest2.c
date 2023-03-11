#include <stdio.h>

int main() {
    int T, N, H, S, R;
    printf("Enter number of townships: ");
    scanf("%d", &T);
    for(int i=1; i<=T; i++) {
        printf("\nTownship %d:\n", i);
        printf("Enter number of houses: ");
        scanf("%d", &N);
        int total_hours = 0;
        float accent_qty = 0, regular_qty = 0;
        for(int j=1; j<=N; j++) {
            printf("\nHouse %d:\n", j);
            printf("Enter number of Victorian style halls: ");
            scanf("%d", &H);
            printf("Enter number of standard rooms: ");
            scanf("%d", &S);
            printf("Enter number of roof bed rooms: ");
            scanf("%d", &R);
            int hall_walls = 6*H;
            int room_walls = 4*S + 3*R;
            accent_qty += 1.5*hall_walls/3 + 1.5*room_walls/3;
            regular_qty += 2.25*hall_walls*2/3 + 2.25*room_walls*2/3;
            total_hours += 2.5*hall_walls/3 + 3.25*hall_walls*2/3;
            total_hours += 2.5*room_walls/3 + 3.25*room_walls*2/3;
        }
        printf("\nCase %d: %.2f hours, %.2f litres of accent colour, %.2f litres of regular colour\n", i, (float)total_hours, accent_qty, regular_qty);
    }
    return 0;
}