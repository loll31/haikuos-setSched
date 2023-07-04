/* $Id: setSched.c,v 1.0.0 2023/07/04 12:00:00 ljr $
 * Scheduler mode tui: set scheduler mode from cmdline
 *
 */

#include <stdio.h>
#include <string.h>
#include <scheduler.h>

int 
main (int argc, char *argv[])
{
     if (argc != 2) {
		int32 mode=get_scheduler_mode();
		switch(mode)
		{
			case 0: // perfomance mode 
				printf("Scheduler mode is actually Performance\n");
				break;
			case 1: // economic mode
				printf("Scheduler mode is actually Economic\n");
				break;
			default: // unknown
				printf("Scheduler mode is <unknown>\n");
				break;
		}
		return 0;
     }
     if (strcmp (argv[1], "-e") == 0) {
		printf("set sched to Eco mode\n");
 		set_scheduler_mode(SCHEDULER_MODE_POWER_SAVING);
     }
     else if (strcmp (argv[1], "-p") == 0) {
		printf("set sched to Perf mode\n");
		set_scheduler_mode(SCHEDULER_MODE_LOW_LATENCY);
     }
     else if (strcmp (argv[1], "-h") == 0) {
		printf("usage: setSched [-e|-p|-h]\n");
		printf(" -e : economic mode\n");
		printf(" -p : performance/low latency mode\n");
     }
     else {
		int32 mode=get_scheduler_mode();
		printf("Scheduler mode is actually %i\n\n", mode);
     }
     return 0;
}
