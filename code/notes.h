/*
 * Arduino 1D Pong Game with (60) WS2812B LEDs
 *
 * Copyright (C) 2015  B.Stultiens
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef __ARDUINO_1DP_NOTES_H
#define __ARDUINO_1DP_NOTES_H

/*
 * Frequencies of all notes playable by an Arduino spanning the most used
 * misical range.
 */
#define NTONE_PITCH	61	/* Number of pitches */

/* These are offset+1 into the pitch table */
#define NOTE_C3		1
#define NOTE_Cs3	2
#define NOTE_Df3	NOTE_Cs3
#define NOTE_D3		3
#define NOTE_Ds3	4
#define NOTE_Ef3	NOTE_Ds3
#define NOTE_E3		5
#define NOTE_F3		6
#define NOTE_Fs3	7
#define NOTE_Gf3	NOTE_Fs3
#define NOTE_G3		8
#define NOTE_Gs3	9
#define NOTE_Af3	NOTE_Gs3
#define NOTE_A3		10
#define NOTE_As3	11
#define NOTE_Bf3	NOTE_As3
#define NOTE_B3		12
#define NOTE_C4		13
#define NOTE_Cs4	14
#define NOTE_Df4	NOTE_Cs4
#define NOTE_D4		15
#define NOTE_Ds4	16
#define NOTE_Ef4	NOTE_Ds4
#define NOTE_E4		17
#define NOTE_F4		18
#define NOTE_Fs4	19
#define NOTE_Gf4	NOTE_Fs4
#define NOTE_G4		20
#define NOTE_Gs4	21
#define NOTE_Af4	NOTE_Gs4
#define NOTE_A4		22		/* This should be 440Hz */
#define NOTE_As4	23
#define NOTE_Bf4	NOTE_As4
#define NOTE_B4		24
#define NOTE_C5		25
#define NOTE_Cs5	26
#define NOTE_Df5	NOTE_Cs5
#define NOTE_D5		27
#define NOTE_Ds5	28
#define NOTE_Ef5	NOTE_Ds5
#define NOTE_E5		29
#define NOTE_F5		30
#define NOTE_Fs5	31
#define NOTE_Gf5	NOTE_Fs5
#define NOTE_G5		32
#define NOTE_Gs5	33
#define NOTE_Af5	NOTE_Gs5
#define NOTE_A5		34
#define NOTE_As5	35
#define NOTE_Bf5	NOTE_As5
#define NOTE_B5		36
#define NOTE_C6		37
#define NOTE_Cs6	38
#define NOTE_Df6	NOTE_Cs6
#define NOTE_D6		39
#define NOTE_Ds6	40
#define NOTE_Ef6	NOTE_Ds6
#define NOTE_E6		41
#define NOTE_F6		42
#define NOTE_Fs6	43
#define NOTE_Gf6	NOTE_Fs6
#define NOTE_G6		44
#define NOTE_Gs6	45
#define NOTE_Af6	NOTE_Gs6
#define NOTE_A6		46
#define NOTE_As6	47
#define NOTE_Bf6	NOTE_As6
#define NOTE_B6		48
#define NOTE_C7		49
#define NOTE_Cs7	50
#define NOTE_Df7	NOTE_Cs7
#define NOTE_D7		51
#define NOTE_Ds7	52
#define NOTE_Ef7	NOTE_Ds7
#define NOTE_E7		53
#define NOTE_F7		54
#define NOTE_Fs7	55
#define NOTE_Gf7	NOTE_Fs7
#define NOTE_G7		56
#define NOTE_Gs7	57
#define NOTE_Af7	NOTE_Gs7
#define NOTE_A7		58
#define NOTE_As7	59
#define NOTE_Bf7	NOTE_As7
#define NOTE_B7		60
#define NOTE_C8		61

/* Duration in ms at 120 BPM */
#define DUR_1_1		2000
#define DUR_1_2		1000
#define DUR_2_2		DUR_1_1
#define DUR_1_4		500
#define DUR_2_4		DUR_1_2
#define DUR_3_4		1500
#define DUR_4_4		DUR_2_2
#define DUR_1_8		250
#define DUR_2_8		DUR_1_4
#define DUR_3_8		750
#define DUR_4_8		DUR_2_4
#define DUR_5_8		1250
#define DUR_6_8		DUR_3_4
#define DUR_7_8		1750
#define DUR_8_8		DUR_4_4
#define DUR_1_16	125
#define DUR_2_16	DUR_1_8
#define DUR_3_16	375
#define DUR_4_16	DUR_2_8
#define DUR_5_16	625
#define DUR_6_16	DUR_3_8
#define DUR_7_16	875
#define DUR_8_16	DUR_4_8
#define DUR_9_16	1125
#define DUR_10_16	DUR_5_8
#define DUR_11_16	1375
#define DUR_12_16	DUR_6_8
#define DUR_13_16	1625
#define DUR_14_16	DUR_7_8
#define DUR_15_16	1875
#define DUR_16_16	DUR_8_8
#define DUR_1_32	63
#define DUR_2_32	DUR_1_16
#define DUR_3_32	188
#define DUR_4_32	DUR_2_16
#define DUR_5_32	313
#define DUR_6_32	DUR_3_16
#define DUR_7_32	438
#define DUR_8_32	DUR_4_16
#define DUR_9_32	563
#define DUR_10_32	DUR_5_16
#define DUR_11_32	688
#define DUR_12_32	DUR_6_16
#define DUR_13_32	813
#define DUR_14_32	DUR_7_16
#define DUR_15_32	938
#define DUR_16_32	DUR_8_16
#define DUR_17_32	1063
#define DUR_18_32	DUR_9_16
#define DUR_19_32	1188
#define DUR_20_32	DUR_10_16
#define DUR_21_32	1313
#define DUR_22_32	DUR_11_16
#define DUR_23_32	1438
#define DUR_24_32	DUR_12_16
#define DUR_25_32	1563
#define DUR_26_32	DUR_13_16
#define DUR_27_32	1688
#define DUR_28_32	DUR_14_16
#define DUR_29_32	1813
#define DUR_30_32	DUR_15_16
#define DUR_31_32	1938
#define DUR_32_32	DUR_16_16

#endif
