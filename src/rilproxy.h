/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this file,
 * You can obtain one at http://mozilla.org/MPL/2.0/. */

#define RILD_SOCKET_NAME        "rild"
#define RILD_SOCKET_NAME1       "rild1"
const char *RILD_SOCKET_NAMES[] = {
  RILD_SOCKET_NAME,
  RILD_SOCKET_NAME1,
};
const int NUM_RILD = sizeof(RILD_SOCKET_NAMES) / sizeof(char*);
