/*
 * Copyright (c) Kernergetiks
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <zephyr/kernel.h>
#include <zephyr/sys/printk.h>

#define STACKSIZE 1024

/* STEP 5 - Change the priority of thread0 to 6 */
#define THREAD0_PRIORITY 7
#define THREAD1_PRIORITY 7

void thread0(void)
{
	while (1) {
            printk("Hello, I am thread0\n");
            k_busy_wait(500000);
	}
}

void thread1(void)
{
	while (1) {
            printk("Hello, I am thread1\n");
            k_busy_wait(1000000);
	}
}
