#include <stdio.h>
#include <math.h>

int get_iteration_count();

int main() {
  int i;
  double pi;
  const double PI = 3.1415926535897938;

  int iteration_count = get_iteration_count("iteration count");

  for (i = 0; i < iteration_count; i++) {
    int sign = pow(-1, i);
    int denominator = 2*(i+1) - 1;

    pi += sign * pow(denominator, -1);
  }

  pi *= 4;
  double diff = PI - pi;

  printf("approx. of π after %d iterations:\n", iteration_count);
  printf("%.16lf\n", pi);
  printf("which was only off approx. by %.16lf\n", diff);

  return 0;
}

int get_iteration_count() {
  int iter;

  printf("iteration count: ");
  scanf("%d", &iter);

  return iter;
}
