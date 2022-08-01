#pragma once
#define MODES_DEFAULT_RATE         2000000
#define MODES_DEFAULT_FREQ         1090000000
#define MODES_ASYNC_BUF_NUMBER     12
#define MODES_DATA_LEN             (16*16384)   /* 256k */


#define MODES_PREAMBLE_US             8         /* microseconds */
#define MODES_LONG_MSG_BITS         112
#define MODES_SHORT_MSG_BITS         56
#define MODES_FULL_LEN             (MODES_PREAMBLE_US + MODES_LONG_MSG_BITS)
#define MODES_LONG_MSG_BYTES       (MODES_LONG_MSG_BITS / 8)
#define MODES_SHORT_MSG_BYTES      (MODES_SHORT_MSG_BITS / 8)
#define MODES_MAX_SBS_SIZE          256
#define RAW_IQ_DATA_LEN (MODES_DATA_LEN + 4 * (MODES_FULL_LEN - 1))

#define MODES_ICAO_CACHE_LEN       1024   /* Power of two required. */
#define MODES_ICAO_CACHE_TTL         60   /* Time to live of cached addresses (sec). */
#define MODES_UNIT_FEET               0
#define MODES_UNIT_METERS             1

/**
 * When debug is set to DEBUG_NOPREAMBLE, the first sample must be
 * at least greater than a given level for us to dump the signal.
 */
#define DEBUG_NOPREAMBLE_LEVEL           25

#define MODES_INTERACTIVE_REFRESH_TIME  250   /* Milliseconds */
#define MODES_INTERACTIVE_ROWS           15   /* Rows on screen */
#define MODES_INTERACTIVE_TTL         60000   /* TTL (msec) before being removed */
#define MODES_CONNECT_TIMEOUT          5000   /* msec timeout for an active connect */

#define MG_NET_POLL_TIME             (MODES_INTERACTIVE_REFRESH_TIME / 8)

#define MODES_CONTENT_TYPE_CSS    "text/css;charset=utf-8"
#define MODES_CONTENT_TYPE_HTML   "text/html;charset=utf-8"
#define MODES_CONTENT_TYPE_JSON   "application/json"
#define MODES_CONTENT_TYPE_JS     "application/javascript;charset=utf-8"
#define MODES_CONTENT_TYPE_PNG    "image/png"

#include "lut.h"