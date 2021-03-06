/*
 * config_parser.h
 *
 * Configuration file-related definitions for user space suspend and resume
 * tools.
 *
 * Copyright (C) 2006 Rafael J. Wysocki <rjw@sisk.pl>
 *
 * This file is released under the GPLv2.
 *
 */

#include <getopt.h>

#define MAX_STR_LEN	256

struct config_par {
	char *name;	/* NULL on last record */
	char *fmt;
	void *ptr;
	unsigned int len;
};

int parse_line(char *str, struct config_par *parv);
int parse(char *my_name, char *file_name, struct config_par *parv);

void usage(char *my_name, struct option options[], const char *short_options);
void version(char *my_name, char *extra_version);

#define CONFIG_FILE	"/etc/suspend.conf"
