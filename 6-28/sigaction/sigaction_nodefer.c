 ///
 /// @file    sigaction_nodefer.c
 /// @author  gsw(1499186594@qq.com)
 ///
   
#include "func.h"

void sigfunc(int signum, siginfo_t *p, void *p1)
{
	printf("before sleep %d is coming\n", signum);
	sleep(3);
	printf("after sleep %d is coming\n", signum);
}

int main()
{
	struct sigaction act;
	bzero(&act, sizeof(act));
	act.sa_sigaction = sigfunc;
	act.sa_flags = SA_SIGINFO | SA_NODEFER;
	int ret;
	ret = sigaction(SIGINT, &act, NULL);
	check_error(-1, ret, "sigaction");
	ret = sigaction(SIGQUIT, &act, NULL);
	check_error(-1, ret, "sigaction");
	while (1)
		;
}

