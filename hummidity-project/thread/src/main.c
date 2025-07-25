/*
 * Copyright (c) 2012-2014 Wind River Systems, Inc.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <zephyr/kernel.h>
#define SLEEP_TIME_MS 100U

int main(void)
{
	printf("Hello Houston, from Apollo 11! %s\n", CONFIG_BOARD_TARGET);
    printk("Message in a bottle.\n");
    while (1)
    {
        k_msleep(SLEEP_TIME_MS);
    }
}
