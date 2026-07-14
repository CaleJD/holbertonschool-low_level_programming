#include <stdio.h>
#include <time.h>

#define DATASET_SIZE 50000
#define SEED_VALUE 42u

static int dataset[DATASET_SIZE];

static unsigned int next_value(unsigned int *state)
{
    *state = (*state * 1103515245u) + 12345u;
    return *state;
}

static void build_dataset(void)
{
    unsigned int state;
    int i;

    state = SEED_VALUE;

    for (i = 0; i < DATASET_SIZE; i++)
        dataset[i] = (int)(next_value(&state) % 100000);
}

static void process_dataset(void)
{
    int i;
    int v;

    for (i = 0; i < DATASET_SIZE; i++)
    {
        v = dataset[i];
        v = (v * 3) + (v / 7) - (v % 11);
        if (v < 0)
            v = -v;
        dataset[i] = v;
    }
}

static unsigned long reduce_checksum(void)
{
    unsigned long sum;
    int i;

    sum = 0;
    for (i = 0; i < DATASET_SIZE; i++)
        sum = (sum * 131ul) + (unsigned long)dataset[i];

    return sum;
}

int main(void)
{
	clock_t total_clock_start, total_clock_end;
	clock_t build_data_clock_start, build_data_clock_end;
	clock_t process_clock_start, process_clock_end;
	clock_t reduce_clock_start, reduce_clock_end;
	double total_duration, build_data_duration, process_duration, reduce_duration;
    	unsigned long checksum;

    	/* Students must add clock-based timing and print required lines. */
	total_clock_start = clock();
	build_data_clock_start = clock();
    	build_dataset();
	build_data_clock_end = clock();
	process_clock_start = clock();
    	process_dataset();
	process_clock_end = clock();
	reduce_clock_start = clock();
    	checksum = reduce_checksum();
	reduce_clock_end = clock();
	total_clock_end = clock();
    	
	if (checksum == 0ul)
	{
        	printf("impossible\n");
	}
	total_duration = 1000.0 * (total_clock_end - total_clock_start) / CLOCKS_PER_SEC;
	build_data_duration = 1000.0 * (build_data_clock_end - build_data_clock_start) / CLOCKS_PER_SEC;
	process_duration = 1000.0 * (process_clock_end - process_clock_start) / CLOCKS_PER_SEC;
	reduce_duration = 1000.0 * (reduce_clock_end - reduce_clock_start) / CLOCKS_PER_SEC;
	
	printf("TOTAL seconds: %.6f ms\n", total_duration);
	printf("BUILD_DATA seconds: %.6f ms\n", build_data_duration);
	printf("PROCESS seconds: %.6f ms\n", process_duration);
	printf("REDUCE seconds: %.6f ms\n", reduce_duration);

    /* Required output (exact format, no extra lines):
     * TOTAL seconds: <float>
     * BUILD_DATA seconds: <float>
     * PROCESS seconds: <float>
     * REDUCE seconds: <float>
     */

    return 0;
}
