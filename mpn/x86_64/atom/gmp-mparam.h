/* Intel Atom/64 gmp-mparam.h -- Compiler/machine parameter header file.

Copyright 2019 Free Software Foundation, Inc.

This file is part of the GNU MP Library.

The GNU MP Library is free software; you can redistribute it and/or modify
it under the terms of either:

  * the GNU Lesser General Public License as published by the Free
    Software Foundation; either version 3 of the License, or (at your
    option) any later version.

or

  * the GNU General Public License as published by the Free Software
    Foundation; either version 2 of the License, or (at your option) any
    later version.

or both in parallel, as here.

The GNU MP Library is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
for more details.

You should have received copies of the GNU General Public License and the
GNU Lesser General Public License along with the GNU MP Library.  If not,
see https://www.gnu.org/licenses/.  */

#define GMP_LIMB_BITS 64
#define GMP_LIMB_BYTES 8

#define SHLD_SLOW 1
#define SHRD_SLOW 1

/* 1600 MHz Diamondville (Atom 330) */
/* FFT tuning limit = 50,646,641 */
/* Generated by tuneup.c, 2019-10-16, gcc 8.3 */

#define MOD_1_NORM_THRESHOLD                 0  /* always */
#define MOD_1_UNNORM_THRESHOLD               0  /* always */
#define MOD_1N_TO_MOD_1_1_THRESHOLD          5
#define MOD_1U_TO_MOD_1_1_THRESHOLD          3
#define MOD_1_1_TO_MOD_1_2_THRESHOLD     MP_SIZE_T_MAX
#define MOD_1_2_TO_MOD_1_4_THRESHOLD         0  /* never mpn_mod_1s_2p */
#define PREINV_MOD_1_TO_MOD_1_THRESHOLD     12
#define USE_PREINV_DIVREM_1                  1  /* native */
#define DIV_QR_1_NORM_THRESHOLD              1
#define DIV_QR_1_UNNORM_THRESHOLD        MP_SIZE_T_MAX  /* never */
#define DIV_QR_2_PI2_THRESHOLD           MP_SIZE_T_MAX  /* never */
#define DIVEXACT_1_THRESHOLD                 0  /* always (native) */
#define BMOD_1_TO_MOD_1_THRESHOLD           16

#define DIV_1_VS_MUL_1_PERCENT             201

#define MUL_TOOM22_THRESHOLD                12
#define MUL_TOOM33_THRESHOLD                74
#define MUL_TOOM44_THRESHOLD               106
#define MUL_TOOM6H_THRESHOLD               155
#define MUL_TOOM8H_THRESHOLD               212

#define MUL_TOOM32_TO_TOOM43_THRESHOLD      73
#define MUL_TOOM32_TO_TOOM53_THRESHOLD      77
#define MUL_TOOM42_TO_TOOM53_THRESHOLD      73
#define MUL_TOOM42_TO_TOOM63_THRESHOLD      72
#define MUL_TOOM43_TO_TOOM54_THRESHOLD      58

#define SQR_BASECASE_THRESHOLD               5
#define SQR_TOOM2_THRESHOLD                 22
#define SQR_TOOM3_THRESHOLD                 73
#define SQR_TOOM4_THRESHOLD                130
#define SQR_TOOM6_THRESHOLD                159
#define SQR_TOOM8_THRESHOLD                236

#define MULMID_TOOM42_THRESHOLD             16

#define MULMOD_BNM1_THRESHOLD                9
#define SQRMOD_BNM1_THRESHOLD                9

#define MUL_FFT_MODF_THRESHOLD             220  /* k = 5 */
#define MUL_FFT_TABLE3                                      \
  { {    220, 5}, {     11, 6}, {      6, 5}, {     13, 6}, \
    {     13, 7}, {      7, 6}, {     15, 7}, {      8, 6}, \
    {     17, 7}, {     13, 8}, {      7, 7}, {     17, 8}, \
    {      9, 7}, {     19, 8}, {     11, 7}, {     23, 8}, \
    {     13, 9}, {      7, 8}, {     19, 9}, {     11, 8}, \
    {     25,10}, {      7, 9}, {     15, 8}, {     33, 9}, \
    {     19, 8}, {     39, 9}, {     23, 8}, {     47, 9}, \
    {     27,10}, {     15, 9}, {     39,10}, {     23, 9}, \
    {     47,11}, {     15,10}, {     31, 9}, {     67,10}, \
    {     39, 9}, {     79,10}, {     47, 9}, {     95,11}, \
    {     31,10}, {     63, 9}, {    127, 8}, {    255,10}, \
    {     71, 9}, {    143, 8}, {    287,10}, {     79,11}, \
    {     47,10}, {     95, 9}, {    191,12}, {     31,11}, \
    {     63,10}, {    127, 9}, {    255, 8}, {    511,10}, \
    {    143, 9}, {    287,11}, {     79,10}, {    159, 9}, \
    {    319,10}, {    175, 9}, {    351,11}, {     95,10}, \
    {    191, 9}, {    383,10}, {    207,11}, {    111,10}, \
    {    223,12}, {     63,11}, {    127,10}, {    255, 9}, \
    {    511,11}, {    143,10}, {    287, 9}, {    575,11}, \
    {    159,10}, {    319,11}, {    175,10}, {    351,12}, \
    {     95,11}, {    191,10}, {    383,11}, {    207,10}, \
    {    415,11}, {    223,13}, {     63,12}, {    127,11}, \
    {    255,10}, {    511,11}, {    287,10}, {    575,12}, \
    {    159,11}, {    319,10}, {    639,11}, {    351,12}, \
    {    191,11}, {    383,10}, {    767,12}, {    223,11}, \
    {    447,13}, {    127,12}, {    255,11}, {    511,12}, \
    {    287,11}, {    575,12}, {    319,11}, {    639,12}, \
    {    351,13}, {    191,12}, {    383,11}, {    767,12}, \
    {    447,14}, {    127,13}, {    255,12}, {    575,13}, \
    {    319,12}, {    703,13}, {    383,12}, {    767,13}, \
    {    447,14}, {    255,13}, {    511,12}, {   1023,13}, \
    {    575,12}, {   1151,13}, {    703,14}, {    383,13}, \
    {    831,12}, {   1663,15}, {    255,14}, {    511,13}, \
    {   1087,12}, {   2175,13}, {   1151,14}, {    639,13}, \
    {   1407,12}, {   2815,14}, {    767,13}, {   1663,14}, \
    {    895,13}, {   1791,15}, {    511,14}, {   1023,13}, \
    {   2175,14}, {   1151,13}, {   2431,12}, {   4863,14}, \
    {   1407,13}, {   2815,15}, {    767,14}, {   1791,16}, \
    {    511,15}, {   1023,14}, {   2431,13}, {   4863,15}, \
    {   1279,14}, {   2943,15}, {   1535,14}, {  16384,15}, \
    {  32768,16}, {  65536,17}, { 131072,18}, { 262144,19}, \
    { 524288,20}, {1048576,21}, {2097152,22}, {4194304,23}, \
    {8388608,24} }
#define MUL_FFT_TABLE3_SIZE 169
#define MUL_FFT_THRESHOLD                 2240

#define SQR_FFT_MODF_THRESHOLD             184  /* k = 5 */
#define SQR_FFT_TABLE3                                      \
  { {    184, 5}, {     11, 6}, {     13, 7}, {      7, 6}, \
    {     15, 7}, {      8, 6}, {     17, 7}, {     13, 8}, \
    {      7, 7}, {     17, 8}, {      9, 7}, {     19, 8}, \
    {     11, 7}, {     23, 8}, {     13, 9}, {      7, 8}, \
    {     19, 9}, {     11, 8}, {     25,10}, {      7, 9}, \
    {     15, 8}, {     33, 9}, {     19, 8}, {     39, 9}, \
    {     23,10}, {     15, 9}, {     39,10}, {     23, 9}, \
    {     47,11}, {     15,10}, {     31, 9}, {     63, 8}, \
    {    127, 7}, {    255,10}, {     39, 8}, {    159,10}, \
    {     47, 9}, {     95, 8}, {    191,11}, {     31,10}, \
    {     63, 9}, {    127, 8}, {    255, 7}, {    511,10}, \
    {     71, 9}, {    143, 8}, {    287, 7}, {    575, 9}, \
    {    159, 8}, {    319,11}, {     47,10}, {     95, 9}, \
    {    191, 8}, {    383,12}, {     31,11}, {     63,10}, \
    {    127, 9}, {    255, 8}, {    511,10}, {    143, 9}, \
    {    287, 8}, {    575,10}, {    159, 9}, {    319, 8}, \
    {    639,10}, {    175, 9}, {    351,11}, {     95,10}, \
    {    191, 9}, {    383,11}, {    111,10}, {    223, 9}, \
    {    447,12}, {     63,11}, {    127,10}, {    255, 9}, \
    {    511,11}, {    143,10}, {    287, 9}, {    575,11}, \
    {    159,10}, {    319, 9}, {    639,11}, {    175,10}, \
    {    351,12}, {     95,11}, {    191,10}, {    383, 9}, \
    {    767,11}, {    223,10}, {    447,13}, {     63,12}, \
    {    127,11}, {    255,10}, {    511,11}, {    287,10}, \
    {    575,12}, {    159,11}, {    319,10}, {    639,11}, \
    {    351,12}, {    191,11}, {    383,10}, {    767,12}, \
    {    223,11}, {    447,13}, {    127,12}, {    255,11}, \
    {    511,12}, {    287,11}, {    575,12}, {    319,11}, \
    {    639,12}, {    351,13}, {    191,12}, {    383,11}, \
    {    767,12}, {    447,14}, {    127,13}, {    255,12}, \
    {    575,13}, {    319,12}, {    703,13}, {    383,12}, \
    {    767,13}, {    447,14}, {    255,13}, {    511,12}, \
    {   1023,13}, {    575,12}, {   1151,13}, {    703,14}, \
    {    383,13}, {    831,12}, {   1663,15}, {    255,14}, \
    {    511,13}, {   1151,14}, {    639,13}, {   1407,12}, \
    {   2815,14}, {    767,13}, {   1663,14}, {    895,13}, \
    {   1791,15}, {    511,14}, {   1023,13}, {   2047,14}, \
    {   1151,13}, {   2431,12}, {   4863,14}, {   1407,13}, \
    {   2815,15}, {    767,14}, {   1791,16}, {    511,15}, \
    {   1023,14}, {   2431,13}, {   4863,15}, {   1279,14}, \
    {   2943,15}, {   1535,14}, {  16384,15}, {  32768,16}, \
    {  65536,17}, { 131072,18}, { 262144,19}, { 524288,20}, \
    {1048576,21}, {2097152,22}, {4194304,23}, {8388608,24} }
#define SQR_FFT_TABLE3_SIZE 172
#define SQR_FFT_THRESHOLD                 1728

#define MULLO_BASECASE_THRESHOLD             0  /* always */
#define MULLO_DC_THRESHOLD                  33
#define MULLO_MUL_N_THRESHOLD             4392
#define SQRLO_BASECASE_THRESHOLD             0  /* always */
#define SQRLO_DC_THRESHOLD                  85
#define SQRLO_SQR_THRESHOLD               3176

#define DC_DIV_QR_THRESHOLD                 34
#define DC_DIVAPPR_Q_THRESHOLD             119
#define DC_BDIV_QR_THRESHOLD                31
#define DC_BDIV_Q_THRESHOLD                 76

#define INV_MULMOD_BNM1_THRESHOLD           22
#define INV_NEWTON_THRESHOLD               149
#define INV_APPR_THRESHOLD                 123

#define BINV_NEWTON_THRESHOLD              179
#define REDC_1_TO_REDC_2_THRESHOLD          24
#define REDC_2_TO_REDC_N_THRESHOLD          39

#define MU_DIV_QR_THRESHOLD                807
#define MU_DIVAPPR_Q_THRESHOLD             807
#define MUPI_DIV_QR_THRESHOLD               77
#define MU_BDIV_QR_THRESHOLD               748
#define MU_BDIV_Q_THRESHOLD                807

#define POWM_SEC_TABLE  1,22,114,326,1486

#define GET_STR_DC_THRESHOLD                16
#define GET_STR_PRECOMPUTE_THRESHOLD        30
#define SET_STR_DC_THRESHOLD               381
#define SET_STR_PRECOMPUTE_THRESHOLD      1565

#define FAC_DSC_THRESHOLD                  960
#define FAC_ODD_THRESHOLD                    0  /* always */

#define MATRIX22_STRASSEN_THRESHOLD         13
#define HGCD2_DIV1_METHOD                    3  /* 5.86% faster than 4 */
#define HGCD_THRESHOLD                      88
#define HGCD_APPR_THRESHOLD                 88
#define HGCD_REDUCE_THRESHOLD             1182
#define GCD_DC_THRESHOLD                   241
#define GCDEXT_DC_THRESHOLD                192
#define JACOBI_BASE_METHOD                   3  /* 9.43% faster than 2 */

/* Tuneup completed successfully, took 193098 seconds */