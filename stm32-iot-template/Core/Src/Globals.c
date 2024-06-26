/*
 * Globals.c
 *
 *  Created on: Jun 10, 2024
 *      Author: hidirektor
 */


#include "Globals.h"

char currentVersion[10] = "1.0.0";
char newVersion[10] = "";
const char *checkVersionURL = "https://hidirektor.com.tr:3000/api/v1/machine/checkVersion";
const char *downloadNewVersionURL = "https://hidirektor.com.tr:3000/api/v1/machine/downloadNewVersion";

uint8_t defaultData[110] = {
    0x00, 0x01, 0x02, // Default EEPROM Data
};
