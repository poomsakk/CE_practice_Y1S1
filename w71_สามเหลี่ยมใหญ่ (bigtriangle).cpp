#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
struct graph {
	double x, y;
};
double area(graph p1, graph p2, graph p3)
{
	return fabs((p1.x*p2.y+p2.x*p3.y+p3.x*p1.y-p2.x*p1.y-p3.x*p2.y-p1.x*p3.y)/2);
}
int main()
{
	int i, j, k, num;
	double max = -1;
	graph point[101];
	scanf("%d", &num);
	for (i = 1; i <= num; i++)
		scanf("%lf %lf", &point[i].x, &point[i].y);
	for (i = 1; i <= num; i++)
		for (j = 1; j <= num; j++)
			for (k = 1; k <= num; k++)
				if (i != j && i != k && j != k)
					if (area(point[i], point[j], point[k]) > max)
						max = area(point[i], point[j], point[k]);
	printf("%.3lf", max);
	return 0;
}