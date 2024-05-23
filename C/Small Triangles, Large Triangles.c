#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;
double calculate_area(int a, int b, int c){
    double p = (a+b+c)/2.0;
    return (p * ((p-a) * (p-b) * (p - c)));
}

void sort_by_area(triangle* tr, int n) {
    double areas[n];
    for(int i = 0; i < n; i++){
        areas[i] = calculate_area(tr[i].a, tr[i].b, tr[i].c);
    }

    triangle temp;
    int tempi;

    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(areas[i] > areas[j]){
                temp = tr[i];
                tr[i] = tr[j];
                tr[j] = temp;
                tempi = areas[i];
                areas[i] = areas[j];
                areas[j] = tempi;
            }
        }
    }
}

int main()
{
	int n;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}
