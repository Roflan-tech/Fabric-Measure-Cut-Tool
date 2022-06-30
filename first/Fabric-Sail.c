#include <stdio.h>

void getinput(double * sh_width, double * sh_height, double * sl_widht, double * sl_height, double * overlap)
{
    printf("Sheet dimensions:\n");
    scanf("%lf %lf", sh_width, sh_height);
    printf("Sail dimensions:\n");
    scanf("%lf %lf", sl_widht, sl_height);
    printf("Overlap:\n");
    scanf("%lf", overlap);
}

int main()
{
    double sh_width = 0, sh_height = 0, sl_widht = 0, sl_height = 0, overlap;
    getinput(&sh_width, &sh_height, &sl_widht, &sl_height, &overlap);
    printf("overlap: %lf\n", overlap);
}