#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
	long double a[4], b[4], util;
	FILE *fp;
        fp = fopen("/proc/stat","r");
        fscanf(fp,"%*s %Lf %Lf %Lf %Lf",&a[0],&a[1],&a[2],&a[3]);
        fclose(fp);
        usleep(500000);
        fp = fopen("/proc/stat","r");
        fscanf(fp,"%*s %Lf %Lf %Lf %Lf",&b[0],&b[1],&b[2],&b[3]);
        fclose(fp);

	util = 100 * ((b[0] + b[1] + b[2] - a[0] - a[1] - a[2])/(b[0]+b[1]+b[2]+b[3]-a[0]-a[1]-a[2]-a[3]));
	printf("%05.1LF", util);
	fflush(stdout);
	return 0;
}
