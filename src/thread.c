/**
 * Rex C Library
 *
 * Copyright (C) 2014 Rex Lee <duguying2008@gmail.com>
 *
 * This program is free and opensource software; 
 * you can redistribute it and/or modify
 * it under the terms of the GNU General Public License
 */

#include "thread.h"

#if defined _WIN32
int
thread_create(
	///thread id
	TID* tid,
	///the routine function
	void* fun,
	///the arguments
	void* arg
	){
	HANDLE create_thread_result;
	create_thread_result=CreateThread(NULL,0,fun,arg,0,tid);
	if(NULL==create_thread_result){
		return -1;
	}else{
		return 0;
	}
}
#else
int
thread_create(
	///thread id
	TID* tid,
	///the routine function
	void* fun,
	///the arguments
	void* arg
	){
	int create_thread_result;
	create_thread_result=pthread_create(tid,NULL,fun,arg);
	if (0!=create_thread_result)
	{
		return -1;
	}else{
		return 0;
	}
}
#endif
