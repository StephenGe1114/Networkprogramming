 ///
 /// @file    func.h
 /// @author  gsw(1499186594@qq.com)
 ///

#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#include <dirent.h>
#include <string.h>
#include <time.h>
#include <grp.h>
#include <pwd.h>
#include <fcntl.h>
#include <strings.h>
#include <sys/select.h>
#include <sys/time.h>
#define args_check(a, b)            \
	{                               \
		if (a != b)                 \
		{                           \
			printf("error args\n"); \
			return -1;              \
		}                           \
	}

   
