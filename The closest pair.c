#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct Point3D {
    int x, y, z;
};

int distance(int, int, int, int, int, int);

int main() {
    struct Point3D arr[5];
    int dist;
    float  min = -1;
    int index1, index2;

    for (int i = 0; i < 5; i++) {
        printf("Enter %d. Point (x,y,z) :", i + 1);
        scanf("%d%d%d", &arr[i].x, &arr[i].y, &arr[i].z);
    }

    for (int a = 0; a < 5; a++) {
        for (int b = a + 1; b < 5; b++) {
            dist = distance(arr[a].x, arr[a].y, arr[a].z,
                            arr[b].x, arr[b].y, arr[b].z);

            if (min == -1 || dist < min) {
                min = dist;
                index1 = a;
                index2 = b;
            }
        }
    }
    
    printf("Closest points are Point-%d and Point-%d Distance between them = %.3f\n",
           index1 + 1, index2 + 1, min);

    return 0;
}

int distance(int a, int b, int c, int x, int y, int z) {
    return sqrt(pow(a - x, 2) + pow(b - y, 2) + pow(c - z, 2));
}
