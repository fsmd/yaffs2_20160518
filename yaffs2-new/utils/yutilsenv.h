/*
 * YAFFS: Yet another Flash File System . A NAND-flash specific file system.
 *
 * Copyright (C) 2002-2011 Aleph One Ltd.
 *   for Toby Churchill Ltd and Brightstar Engineering
 *
 * Created by Charles Manning <charles@aleph1.co.uk>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License version 2.1 as
 * published by the Free Software Foundation.
 *
 * Note: Only YAFFS headers are LGPL, YAFFS C code is covered by GPL.
 */


#ifndef __YAFFS_UTILSENV_H__
#define __YAFFS_UTILSENV_H__

#define YCHAR char
#define YUCHAR unsigned char

#include <sys/types.h>
#include <string.h>
#include "yaffs_list.h"
#include "yaffs_hweight.h"

#define hweight8(x) yaffs_hweight8(x)
#define hweight32(x) yaffs_hweight32(x)

#define yaffs_trace(...) do {} while (0)
#endif
