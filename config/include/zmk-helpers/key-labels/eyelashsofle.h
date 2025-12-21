/*                60 KEY MATRIX with ENCODER and JOYSTICK / LAYOUT MAPPING

Based on Aliexpress variation of Sofle: https://github.com/a741725193/zmk-sofle 
with encoder and 5-way switch/joystick

  ╭────────────────────────╮             ╭────╮      ╭─────────────────────────╮
  │  0   1   2   3   4   5 │         ╭───╯  6 ╰───╮  │   7   8   9  10  11  12 │
  │ 13  14  15  16  17  18 │ ╭────╮  │ 19  20  21 │  │  22  23  24  25  26  27 │
  │ 28  29  30  31  32  33 │ │ 34 │  ╰───╮ 35 ╭───╯  │  36  37  38  39  40  41 │
  │ 42  43  44  45  46  47 │ ╰────╯      ╰────╯      |  48  49  50  51  52  53 |
  ╰───╮ 54  55  56  57  58 │                         │  59  60  61  62  63 ╭───╯
      ╰────────────────────╯                         ╰─────────────────────╯

  ╭──────────────────────────────╮                           ╭──────────────────────────────╮
  | LN5  LN4  LN3  LN2  LN1  LN0 |              ╭─────╮      | RN0  RN1  RN2  RN3  RN4  RN5 |
  │ LT5  LT4  LT3  LT2  LT1  LT0 │          ╭───╯ JS0 ╰───╮  │ RT0  RT1  RT2  RT3  RT4  RT5 │
  │ LM5  LM4  LM3  LM2  LM1  LM0 │ ╭─────╮  │ JS1 JS2 JS3 │  │ RM0  RM1  RM2  RM3  RM4  RM5 │
  │ LB5  LB4  LB3  LB2  LB1  LB0 │ │ LEC │  ╰───╮ JS4 ╭───╯  │ RB0  RB1  RB2  RB3  RB4  RB5 │
  ╰────╮ LH4  LH3  LH2  LH1  LH0 │ ╰─────╯      ╰─────╯      │ RH0  RH1  RH2  RH3  RH4 ╭────╯
       ╰─────────────────────────╯                           ╰─────────────────────────╯ 

*/

#pragma once

#define LN0  5  // left-number row
#define LN1  4
#define LN2  3
#define LN3  2
#define LN4  1
#define LN5  0

#define RN0  7  // right-number row
#define RN1  8
#define RN2  9
#define RN3 10
#define RN4 11
#define RN5 12

#define LT0 18  // left-top row
#define LT1 17
#define LT2 16
#define LT3 15
#define LT4 14
#define LT5 13

#define RT0 22  // right-top row
#define RT1 23
#define RT2 24
#define RT3 25
#define RT4 26
#define RT5 27

#define LM0 33  // left-middle row
#define LM1 32
#define LM2 31
#define LM3 30
#define LM4 29
#define LM5 28

#define RM0 36  // right-middle row
#define RM1 37
#define RM2 38
#define RM3 39
#define RM4 40
#define RM5 41

#define LB0 47  // left-bottom row
#define LB1 46
#define LB2 45
#define LB3 44
#define LB4 43
#define LB5 42

#define RB0 48  // right-bottom row
#define RB1 49
#define RB2 50
#define RB3 51
#define RB4 52
#define RB5 53

#define LH0 58  // left thumb keys
#define LH1 57
#define LH2 56
#define LH3 55
#define LH4 54

#define RH0 58  // right thumb keys
#define RH1 60
#define RH2 61
#define RH3 62

#define RH4 63  //encoder

#define JS0  6  //joystick
#define JS1 19
#define JS2 20
#define JS3 21
#define JS4 35

#define LEC 34