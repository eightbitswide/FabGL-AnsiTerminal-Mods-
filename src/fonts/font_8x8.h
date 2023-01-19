#pragma once

// PETSCII Interpetation of 8x8
// By Eightbitswide
//
// Not a perfect translation because each ASCII character can be two different PETSCII characters.
// Replication of shifted alpha characters placed in the area which colors are typcial.
// Some additional characters also added because there was plenty of space.
//
// For easy insertion into the FabGL terminal, replace font_8x8.h in the /FabGL/src/fonts/ library folder
// with this file (after renaming the original as a backup) and recompile AnsiTerminal onto your device.

namespace fabgl {

#ifdef FABGL_FONT_INCLUDE_DEFINITION

static const uint8_t FONT_8x8_DATA[] = {
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,//0
   0x7e, 0x81, 0xa5, 0x81, 0xbd, 0x99, 0x81, 0x7e,//1
   0x7e, 0xff, 0xdb, 0xff, 0xc3, 0xe7, 0xff, 0x7e,//2
   0x6c, 0xfe, 0xfe, 0xfe, 0x7c, 0x38, 0x10, 0x00,//3
   0x10, 0x38, 0x7c, 0xfe, 0x7c, 0x38, 0x10, 0x00,//4
   0x3c, 0x3c, 0x18, 0xff, 0xe7, 0x18, 0x3c, 0x00,//5
   0x10, 0x38, 0x7c, 0xfe, 0xee, 0x10, 0x38, 0x00,//6
   0x00, 0x00, 0x18, 0x3c, 0x3c, 0x18, 0x00, 0x00,//7
   0xff, 0xff, 0xe7, 0xc3, 0xc3, 0xe7, 0xff, 0xff,//8
   0x00, 0x3c, 0x66, 0x42, 0x42, 0x66, 0x3c, 0x00,//9
   0xff, 0xc3, 0x99, 0xbd, 0xbd, 0x99, 0xc3, 0xff,//10
   0x1e, 0x06, 0x0a, 0x78, 0xcc, 0xcc, 0x78, 0x00,//11
   0x3c, 0x42, 0x42, 0x42, 0x3c, 0x18, 0x7e, 0x18,//12
   0x08, 0x0c, 0x0a, 0x0a, 0x08, 0x78, 0xf0, 0x00,//13
   0x18, 0x14, 0x1a, 0x16, 0x72, 0xe2, 0x0e, 0x1c,//14
   0x10, 0x54, 0x38, 0xee, 0x38, 0x54, 0x10, 0x00,//15
   0x80, 0xe0, 0xf8, 0xfe, 0xf8, 0xe0, 0x80, 0x00,//16
   0x02, 0x0e, 0x3e, 0xfe, 0x3e, 0x0e, 0x02, 0x00,//17
   0x18, 0x3c, 0x5a, 0x18, 0x5a, 0x3c, 0x18, 0x00,//18
   0x66, 0x66, 0x66, 0x66, 0x66, 0x00, 0x66, 0x00,//19
   0x7f, 0xdb, 0xdb, 0xdb, 0x7b, 0x1b, 0x1b, 0x00,//20
   0x1c, 0x22, 0x38, 0x44, 0x44, 0x38, 0x88, 0x70,//21
   0x00, 0x00, 0x00, 0x00, 0x7e, 0x7e, 0x7e, 0x00,//22
   0x18, 0x3c, 0x5a, 0x18, 0x5a, 0x3c, 0x18, 0x7e,//23
   0x18, 0x3c, 0x5a, 0x18, 0x18, 0x18, 0x18, 0x00,//24
   0x18, 0x18, 0x18, 0x18, 0x5a, 0x3c, 0x18, 0x00,//25
   0x00, 0x18, 0x0c, 0xfe, 0x0c, 0x18, 0x00, 0x00,//26
   0x00, 0x30, 0x60, 0xfe, 0x60, 0x30, 0x00, 0x00,//27
   0x00, 0x00, 0x00, 0xc0, 0xc0, 0xc0, 0xff, 0x00,//28
   0x00, 0x24, 0x42, 0xff, 0x42, 0x24, 0x00, 0x00,//29
   0x00, 0x10, 0x38, 0x7c, 0xfe, 0xfe, 0x00, 0x00,//30
   0x00, 0xfe, 0xfe, 0x7c, 0x38, 0x10, 0x00, 0x00,//31
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,//32  SPACE
   0x18, 0x18, 0x18, 0x18, 0x18, 0x00, 0x18, 0x00,//33  !      

  0b11001100, 
  0b11001100, 
  0b11001100, 
  0b00000000, 
  0b00000000, 
  0b00000000, 
  0b00000000, 
  0b00000000,//34  "  

  0b01100110, 
  0b01100110, 
  0b11111111,
  0b01100110, 
  0b11111111, 
  0b01100110, 
  0b01100110,  
  0b00000000,//35  #

  0b00110000, 
  0b01111100, 
  0b11000000, 
  0b01111000, 
  0b00001100, 
  0b11111000, 
  0b00110000, 
  0b00000000,//36  $

  0b11000100, 
  0b11001100, 
  0b00011000, 
  0b00110000, 
  0b01100000, 
  0b11001100, 
  0b10001100, 
  0b00000000,//37  %

  0b01111000, 
  0b11001100, 
  0b01111000, 
  0b01110000, 
  0b11001110, 
  0b11001100, 
  0b01111110, 
  0b00000000,//38  &

  0b00110000, 
  0b01100000, 
  0b11000000, 
  0b00000000, 
  0b00000000, 
  0b00000000, 
  0b00000000, 
  0b00000000,//39  '

  0b00110000, 
  0b01100000, 
  0b11000000, 
  0b11000000, 
  0b11000000, 
  0b01100000, 
  0b00110000, 
  0b00000000,//40  (

  0b11000000, 
  0b01100000, 
  0b00110000, 
  0b00110000, 
  0b00110000, 
  0b01100000, 
  0b11000000, 
  0b00000000,//41  )

  0b00000000, 
  0b01100110,
  0b00111100,
  0b11111111, 
  0b00111100, 
  0b01100110, 
  0b00000000, 
  0b00000000,//42  *

   0x00, 0x30, 0x30, 0xfc, 0x30, 0x30, 0x00, 0x00,//43  +
   0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x10, 0x20,//44  ,
   0x00, 0x00, 0x00, 0xfc, 0x00, 0x00, 0x00, 0x00,//45  -

  0b00000000, 
  0b00000000, 
  0b00000000, 
  0b00000000, 
  0b00000000, 
  0b00011000, 
  0b00011000, 
  0b00000000,//46  .

   0x02, 0x06, 0x0c, 0x18, 0x30, 0x60, 0xc0, 0x00,//47  /

  0b01111000, 
  0b11001100, 
  0b11011100, 
  0b11101100, 
  0b11001100, 
  0b11001100, 
  0b01111000, 
  0b00000000,//48  0

  0b00110000, 
  0b00110000, 
  0b01110000, 
  0b00110000, 
  0b00110000, 
  0b00110000, 
  0b11111100, 
  0b00000000,//49  1

  0b01111000, 
  0b11001100, 
  0b00001100, 
  0b00011000, 
  0b01100000, 
  0b11000000, 
  0b11111100, 
  0b00000000,//50  2

  0b01111000, 
  0b11001100, 
  0b00001100, 
  0b00111000, 
  0b00001100, 
  0b11001100, 
  0b01111000, 
  0b00000000,//51  3

  0b00001100, 
  0b00011100, 
  0b00111100, 
  0b11001100, 
  0b11111110, 
  0b00001100, 
  0b00001100, 
  0b00000000,//52  4

  0b11111100, 
  0b11000000, 
  0b11111000, 
  0b00001100, 
  0b00001100, 
  0b11001100, 
  0b01111000, 
  0b00000000,//53  5

  0b01111000, 
  0b11001100, 
  0b11000000, 
  0b11111000, 
  0b11001100, 
  0b11001100, 
  0b01111000, 
  0b00000000,//54  6

  0b11111100, 
  0b11001100, 
  0b00011000, 
  0b00110000, 
  0b00110000, 
  0b00110000, 
  0b00110000, 
  0b00000000,//55  7

  0b01111000, 
  0b11001100, 
  0b11001100, 
  0b01111000, 
  0b11001100, 
  0b11001100, 
  0b01111000, 
  0b00000000,//56  8

  0b01111000, 
  0b11001100, 
  0b11001100, 
  0b01111100, 
  0b00001100, 
  0b11001100, 
  0b01111000, 
  0b00000000,//57  9

  0b00000000, 
  0b00000000, 
  0b01100000, 
  0b00000000, 
  0b00000000, 
  0b01100000, 
  0b00000000, 
  0b00000000,//58  :

  0b00000000, 
  0b00000000, 
  0b01100000, 
  0b00000000, 
  0b00000000, 
  0b01100000, 
  0b01100000, 
  0b11000000,//59  ;

  0b00011100, 
  0b00110000, 
  0b01100000, 
  0b11000000, 
  0b01100000, 
  0b00110000, 
  0b00011100, 
  0b00000000,//60  <

  0b00000000, 
  0b00000000, 
  0b11111100, 
  0b00000000, 
  0b11111100, 
  0b00000000, 
  0b00000000, 
  0b00000000,//61  =

  0b11100000, 
  0b00110000, 
  0b00011000, 
  0b00001100, 
  0b00011000, 
  0b00110000, 
  0b11100000, 
  0b00000000,//62  >

  0b01111000, 
  0b11001100, 
  0b00001100, 
  0b00011000, 
  0b00110000, 
  0b00000000, 
  0b00110000, 
  0b00000000,//63  ?

  0b01111000, 
  0b11001100, 
  0b11011100, 
  0b11011100, 
  0b11000000, 
  0b11000100, 
  0b01111000, 
  0b00000000,//64  @

  0b00110000, 
  0b01111000, 
  0b11001100, 
  0b11111100, 
  0b11001100, 
  0b11001100, 
  0b11001100, 
  0b00000000, //65  A

  0b11111000, 
  0b11001100, 
  0b11001100, 
  0b11111000, 
  0b11001100, 
  0b11001100, 
  0b11111000, 
  0b00000000, //66  B

  0b01111000, 
  0b11001100, 
  0b11000000, 
  0b11000000, 
  0b11000000, 
  0b11001100, 
  0b01111000, 
  0b00000000,//67  C

  0b11110000, 
  0b11011000, 
  0b11001100, 
  0b11001100, 
  0b11001100, 
  0b11011000, 
  0b11110000, 
  0b00000000,//68  D

  0b11111100, 
  0b11000000, 
  0b11000000, 
  0b11110000, 
  0b11000000, 
  0b11000000, 
  0b11111100, 
  0b00000000,//69  E

  0b11111100, 
  0b11000000, 
  0b11000000, 
  0b11110000, 
  0b11000000, 
  0b11000000, 
  0b11000000, 
  0b00000000,//70  F

  0b01111000, 
  0b11001100, 
  0b11000000, 
  0b11011100, 
  0b11001100, 
  0b11001100, 
  0b01111000, 
  0b00000000,//71  G

  0b11001100, 
  0b11001100, 
  0b11001100, 
  0b11111100, 
  0b11001100, 
  0b11001100, 
  0b11001100, 
  0b00000000,//72  H

  0b11110000, 
  0b01100000, 
  0b01100000, 
  0b01100000, 
  0b01100000, 
  0b01100000, 
  0b11110000, 
  0b00000000, //73  I

  0b00111100, 
  0b00011000, 
  0b00011000, 
  0b00011000, 
  0b00011000, 
  0b11011000, 
  0b01110000, 
  0b00000000,//74  J

  0b11001100, 
  0b11011000, 
  0b11110000, 
  0b11100000, 
  0b11110000, 
  0b11011000, 
  0b11001100, 
  0b00000000,//75  K

  0b11000000, 
  0b11000000, 
  0b11000000, 
  0b11000000, 
  0b11000000, 
  0b11000000, 
  0b11111100, 
  0b00000000,//76  L

  0b11000110, 
  0b11101110, 
  0b11111110, 
  0b11010110, 
  0b11000110, 
  0b11000110, 
  0b11000110, 
  0b00000000,//77  M

  0b11001100, 
  0b11101100, 
  0b11111100, 
  0b11111100, 
  0b11011100, 
  0b11001100, 
  0b11001100, 
  0b00000000,//78  N

  0b01111000, 
  0b11001100, 
  0b11001100, 
  0b11001100, 
  0b11001100, 
  0b11001100, 
  0b01111000, 
  0b00000000,//79  O

  0b11111000, 
  0b11001100, 
  0b11001100, 
  0b11111000, 
  0b11000000, 
  0b11000000, 
  0b11000000, 
  0b00000000,//80  P

  0b01111000, 
  0b11001100, 
  0b11001100, 
  0b11001100, 
  0b11001100, 
  0b01111000, 
  0b00011100, 
  0b00000000,//81  Q

  0b11111000, 
  0b11001100, 
  0b11001100, 
  0b11111000, 
  0b11110000, 
  0b11011000, 
  0b11001100, 
  0b00000000,//82  R

  0b01111000, 
  0b11001100, 
  0b11000000, 
  0b01111000, 
  0b00001100, 
  0b11001100, 
  0b01111000, 
  0b00000000,//83  S

  0b11111100, 
  0b00110000, 
  0b00110000, 
  0b00110000, 
  0b00110000, 
  0b00110000, 
  0b00110000, 
  0b00000000,//84  T

  0b11001100, 
  0b11001100, 
  0b11001100, 
  0b11001100, 
  0b11001100, 
  0b11001100, 
  0b01111000, 
  0b00000000,//85  U

  0b11001100, 
  0b11001100, 
  0b11001100, 
  0b11001100, 
  0b11001100, 
  0b01111000, 
  0b00110000, 
  0b00000000,//86  V

  0b11000110, 
  0b11000110, 
  0b11000110, 
  0b11010110, 
  0b11111110, 
  0b11101110, 
  0b11000110, 
  0b00000000,//87  W

  0b11001100, 
  0b11001100, 
  0b01111000, 
  0b00110000, 
  0b01111000, 
  0b11001100, 
  0b11001100, 
  0b00000000,//88  X

  0b11001100, 
  0b11001100, 
  0b11001100, 
  0b01111000, 
  0b00110000, 
  0b00110000, 
  0b00110000, 
  0b00000000,//89  Y

  0b11111100, 
  0b00001100, 
  0b00011000, 
  0b00110000, 
  0b01100000, 
  0b11000000, 
  0b11111100, 
  0b00000000,//90  Z

   0x78, 0x60, 0x60, 0x60, 0x60, 0x60, 0x78, 0x00,//91  [
   0xc0, 0x60, 0x30, 0x18, 0x0c, 0x06, 0x02, 0x00,//92  backslash
   0x78, 0x18, 0x18, 0x18, 0x18, 0x18, 0x78, 0x00,//93  ]

  0b00011000, 
  0b00111100, 
  0b01111110, 
  0b11111111, 
  0b00011000, 
  0b00011000, 
  0b00011000, 
  0b00011000,//94  ^

  0b00010000, 
  0b00110000, 
  0b01110000, 
  0b11111111, 
  0b11111111, 
  0b01110000, 
  0b00110000, 
  0b00010000,//95  _

  0b00000000,   
  0b11111111, 
  0b11111111,
  0b00000000, 
  0b00000000,
  0b00000000, 
  0b00000000, 
  0b00000000,//96  '

  0b00000000, 
  0b00000000, 
  0b01111000, 
  0b00001100, 
  0b01111100, 
  0b11001100, 
  0b01111100, 
  0b00000000, //97 a

  0b00000000, 
  0b11000000, 
  0b11000000, 
  0b11111000, 
  0b11001100, 
  0b11001100, 
  0b11111000, 
  0b00000000,//98 b

  0b00000000, 
  0b00000000, 
  0b01111000, 
  0b11000000, 
  0b11000000, 
  0b11000000, 
  0b01111000, 
  0b00000000,//99 c

  0b00000000, 
  0b00001100, 
  0b00001100, 
  0b01111100, 
  0b11001100, 
  0b11001100, 
  0b01111100, 
  0b00000000,//100 d

  0b00000000, 
  0b00000000, 
  0b01111000, 
  0b11001100, 
  0b11111100, 
  0b11000000, 
  0b01111000, 
  0b00000000,//101 e

  0b00000000, 
  0b00111000, 
  0b01100000, 
  0b11111000, 
  0b01100000, 
  0b01100000, 
  0b01100000, 
  0b00000000,//102 f

  0b00000000, 
  0b00000000, 
  0b01111100, 
  0b11001100, 
  0b11001100, 
  0b01111100, 
  0b00001100, 
  0b11111000,//103 g

  0b00000000, 
  0b11000000, 
  0b11000000, 
  0b11111000, 
  0b11001100, 
  0b11001100, 
  0b11001100, 
  0b00000000,//104 h

  0b00000000, 
  0b00110000, 
  0b00000000, 
  0b01110000, 
  0b00110000, 
  0b00110000, 
  0b01111000, 
  0b00000000,//105 i

  0b00000000, 
  0b00011000, 
  0b00000000, 
  0b00011000, 
  0b00011000, 
  0b00011000, 
  0b00011000, 
  0b11110000,//106 j

  0b00000000, 
  0b11000000, 
  0b11000000, 
  0b11011000, 
  0b11110000, 
  0b11011000, 
  0b11001100, 
  0b00000000,//107 k

  0b00000000, 
  0b01110000, 
  0b00110000, 
  0b00110000, 
  0b00110000, 
  0b00110000, 
  0b01111000, 
  0b00000000,//108 l

  0b00000000, 
  0b00000000, 
  0b11001100, 
  0b11111110, 
  0b11111110, 
  0b11010110, 
  0b11000110, 
  0b00000000,//109 m

  0b00000000, 
  0b00000000, 
  0b11111000, 
  0b11001100, 
  0b11001100, 
  0b11001100, 
  0b11001100, 
  0b00000000,//110 n

  0b00000000, 
  0b00000000, 
  0b01111000, 
  0b11001100, 
  0b11001100, 
  0b11001100, 
  0b01111000, 
  0b00000000,//111 o

  0b00000000, 
  0b00000000, 
  0b11111000, 
  0b11001100, 
  0b11001100, 
  0b11111000, 
  0b11000000, 
  0b11000000,//112 p

  0b00000000, 
  0b00000000, 
  0b01111100, 
  0b11001100, 
  0b11001100, 
  0b01111100, 
  0b00001100, 
  0b00001100,//113 q

  0b00000000, 
  0b00000000, 
  0b11111000, 
  0b11001100, 
  0b11000000, 
  0b11000000, 
  0b11000000, 
  0b00000000,//114 r

  0b00000000, 
  0b00000000, 
  0b01111100, 
  0b11000000, 
  0b01111000, 
  0b00001100, 
  0b11111000, 
  0b00000000,//115 s

  0b00000000, 
  0b00110000, 
  0b11111100, 
  0b00110000, 
  0b00110000, 
  0b00110000, 
  0b00011100, 
  0b00000000,//116 t

  0b00000000, 
  0b00000000, 
  0b11001100, 
  0b11001100, 
  0b11001100, 
  0b11001100, 
  0b01111100, 
  0b00000000,//117 u

  0b00000000, 
  0b00000000, 
  0b11001100, 
  0b11001100, 
  0b11001100, 
  0b01111000, 
  0b00110000, 
  0b00000000,//118 v

  0b00000000, 
  0b00000000, 
  0b11000110, 
  0b11010110, 
  0b11111110, 
  0b01111100, 
  0b01101100, 
  0b00000000,//119 w

  0b00000000, 
  0b00000000, 
  0b11001100, 
  0b01111000, 
  0b00110000, 
  0b01111000, 
  0b11001100, 
  0b00000000,//120 x

  0b00000000, 
  0b00000000, 
  0b11001100, 
  0b11001100, 
  0b11001100, 
  0b01111100, 
  0b00011000, 
  0b11110000,//121 y

  0b00000000, 
  0b00000000, 
  0b11111100, 
  0b00011000, 
  0b00110000, 
  0b01100000, 
  0b11111100, 
  0b00000000,//122 z

  0b00011000,   
  0b00011000, 
  0b00011000,
  0b11111111, 
  0b11111111,
  0b00011000, 
  0b00011000, 
  0b00011000,//123

  0b11000000,   
  0b11000000, 
  0b00110000,
  0b00110000, 
  0b11000000,
  0b11000000, 
  0b00110000, 
  0b00110000,//124

  0b00011000,   
  0b00011000, 
  0b00011000,
  0b00011000, 
  0b00011000,
  0b00011000, 
  0b00011000, 
  0b00011000,//125

  0b00110011,   
  0b00110011, 
  0b11001100,   
  0b11001100,  
  0b00110011,   
  0b00110011, 
  0b11001100,   
  0b11001100,//126

  0b11111111, 
  0b11111111, 
  0b01111111, 
  0b00111111,
  0b00011111, 
  0b00001111, 
  0b00000111, 
  0b00000011,//127

  0b01000010,   
  0b00100100, 
  0b10011001,
  0b10111101, 
  0b11011011,
  0b01111110, 
  0b00100100, 
  0b11100111,//128

  0b00001000, 
  0b00011100, 
  0b00111110, 
  0b01111111, 
  0b01111111, 
  0b00011100, 
  0b00111110, 
  0b00000000,//129  Shifted A

  0b00011000, 
  0b00011000, 
  0b00011000, 
  0b00011000, 
  0b00011000, 
  0b00011000, 
  0b00011000, 
  0b00011000,//130  Shifted B

  0b00000000, 
  0b00000000, 
  0b00000000, 
  0b11111111, 
  0b11111111, 
  0b00000000, 
  0b00000000, 
  0b00000000,//131  Shifted C

  0b00000000, 
  0b00000000,  
  0b11111111, 
  0b11111111,
  0b00000000, 
  0b00000000, 
  0b00000000, 
  0b00000000,//132  Shifted D

  0b00000000,   
  0b11111111, 
  0b11111111,
  0b00000000, 
  0b00000000,
  0b00000000, 
  0b00000000, 
  0b00000000,//133  Shifted E

  0b00000000, 
  0b00000000,
  0b00000000, 
  0b00000000, 
  0b11111111, 
  0b11111111,  
  0b00000000, 
  0b00000000,//134  Shifted F

  0b00110000, 
  0b00110000, 
  0b00110000, 
  0b00110000, 
  0b00110000, 
  0b00110000, 
  0b00110000, 
  0b00110000,//135  Shifted G

  0b00001100, 
  0b00001100, 
  0b00001100, 
  0b00001100, 
  0b00001100, 
  0b00001100, 
  0b00001100, 
  0b00001100,//136  Shifted H

  0b00000000, 
  0b00000000, 
  0b00000000, 
  0b11110000, 
  0b11111000, 
  0b00011000, 
  0b00011000, 
  0b00011000,//137  Shifted I

  0b00011000, 
  0b00011000, 
  0b00011000, 
  0b00011111, 
  0b00001111, 
  0b00000000, 
  0b00000000, 
  0b00000000,//138  Shifted J

  0b00011000, 
  0b00011000, 
  0b00011000, 
  0b11111000, 
  0b11110000, 
  0b00000000, 
  0b00000000, 
  0b00000000,//139  Shifted K

  0b11000000, 
  0b11000000, 
  0b11000000, 
  0b11000000, 
  0b11000000, 
  0b11000000, 
  0b11111111, 
  0b11111111,//140  Shifted L

  0b11000000, 
  0b11100000, 
  0b01110000, 
  0b00111000,
  0b00011100, 
  0b00001110, 
  0b00000111, 
  0b00000011,//141  Shifted M

  0b00000011, 
  0b00000111, 
  0b00001110, 
  0b00011100,
  0b00111000, 
  0b01110000, 
  0b11100000, 
  0b11000000,//142  Shifted N

  0b11111111, 
  0b11111111, 
  0b11000000, 
  0b11000000,
  0b11000000, 
  0b11000000, 
  0b11000000, 
  0b11000000,//143  Shifted O

  0b11111111, 
  0b11111111, 
  0b00000011, 
  0b00000011,
  0b00000011, 
  0b00000011, 
  0b00000011, 
  0b00000011,//144  Shifted P

  0b00000000, 
  0b00111100, 
  0b01111110, 
  0b01111110, 
  0b01111110, 
  0b01111110, 
  0b00111100, 
  0b00000000,//145  Shifted Q

  0b00000000, 
  0b00000000,
  0b00000000, 
  0b00000000, 
  0b00000000, 
  0b11111111,  
  0b11111111, 
  0b00000000,//146  Shifted R

  0b00110110, 
  0b01111111, 
  0b01111111, 
  0b01111111, 
  0b00111110, 
  0b00011100, 
  0b00001000, 
  0b00000000,//147  Shifted S

  0b01100000, 
  0b01100000,
  0b01100000, 
  0b01100000, 
  0b01100000, 
  0b01100000,  
  0b01100000, 
  0b01100000,//148  Shifted T

  0b00000000, 
  0b00000000, 
  0b00000000, 
  0b00001111, 
  0b00011111, 
  0b00011000, 
  0b00011000, 
  0b00011000,//149  Shifted U

  0b11000011, 
  0b11100111, 
  0b01111110, 
  0b00111100,
  0b00111100, 
  0b01111110, 
  0b11100111, 
  0b11000011,//150  Shifted V

  0b00000000, 
  0b00111100, 
  0b01111110, 
  0b01100110, 
  0b01100110, 
  0b01111110, 
  0b00111100, 
  0b00000000,//151  Shifted W

  0b00011000, 
  0b00011000, 
  0b01100110, 
  0b01100110, 
  0b00011000, 
  0b00011000, 
  0b00111100, 
  0b00000000,//152  Shifted X

  0b00000110, 
  0b00000110, 
  0b00000110, 
  0b00000110, 
  0b00000110, 
  0b00000110, 
  0b00000110, 
  0b00000110,//153  Shifted Y

  0b00001000, 
  0b00011100, 
  0b00111110, 
  0b01111111, 
  0b00111110, 
  0b00011100, 
  0b00001000, 
  0b00000000,//154  Shifted Z 

  0b01111110, 
  0b10000001,
  0b10100101, 
  0b10000001, 
  0b10100101, 
  0b10111101,  
  0b10000001, 
  0b01111110,//155

  0b00001100, 
  0b00010010, 
  0b00110000, 
  0b01111100, 
  0b00110000, 
  0b01100010, 
  0b11111100, 
  0b00000000,//156

  0b00000000, 
  0b01111110,
  0b01011010, 
  0b01111110, 
  0b01011010, 
  0b01000010,  
  0b01111110, 
  0b00000000,//157

  0b00111100, 
  0b11100111,
  0b10000001, 
  0b11100111, 
  0b00100100, 
  0b00100100,  
  0b00111100, 
  0b00000000,//158

  0b00011000, 
  0b00000000,
  0b00011000, 
  0b00100100, 
  0b01100010, 
  0b01111010,  
  0b00111100, 
  0b00000000,//159

  0b10000001, 
  0b10100101,
  0b10100101, 
  0b11111111, 
  0b11011011, 
  0b10111101,  
  0b10000001, 
  0b00000000,//160

  0b11110000, 
  0b11110000, 
  0b11110000, 
  0b11110000, 
  0b11110000, 
  0b11110000, 
  0b11110000, 
  0b11110000,//161

  0b00000000, 
  0b00000000, 
  0b00000000, 
  0b00000000, 
  0b11111111, 
  0b11111111, 
  0b11111111, 
  0b11111111,//162

  0b11111111, 
  0b00000000, 
  0b00000000, 
  0b00000000, 
  0b00000000, 
  0b00000000, 
  0b00000000, 
  0b00000000,//163

  0b00000000, 
  0b00000000, 
  0b00000000, 
  0b00000000, 
  0b00000000, 
  0b00000000, 
  0b11111111, 
  0b11111111,//164

  0b10000000, 
  0b10000000, 
  0b10000000, 
  0b10000000, 
  0b10000000, 
  0b10000000, 
  0b10000000, 
  0b10000000,//165

  0b11001100,   
  0b11001100, 
  0b00110011,   
  0b00110011, 
  0b11001100,   
  0b11001100, 
  0b00110011,   
  0b00110011,//166


  0b00000001, 
  0b00000001, 
  0b00000001, 
  0b00000001, 
  0b00000001, 
  0b00000001, 
  0b00000001, 
  0b00000001,//167

  0b00000000,   
  0b00000000, 
  0b00000000,   
  0b00000000, 
  0b11001100,   
  0b11001100, 
  0b00110011,   
  0b00110011,//168

  0b11111111, 
  0b11111111, 
  0b11111110, 
  0b11111100,
  0b11111000, 
  0b11110000, 
  0b11100000, 
  0b11000000,//169

  0b00000011, 
  0b00000011, 
  0b00000011, 
  0b00000011, 
  0b00000011, 
  0b00000011, 
  0b00000011, 
  0b00000011,//170

  0b00011000, 
  0b00011000, 
  0b00011000, 
  0b00011111, 
  0b00011111, 
  0b00011000, 
  0b00011000, 
  0b00011000,//171

  0b00000000, 
  0b00000000, 
  0b00000000, 
  0b00000000, 
  0b00001111, 
  0b00001111, 
  0b00001111, 
  0b00001111,//172

  0b00011000, 
  0b00011000, 
  0b00011000, 
  0b00011111, 
  0b00011111, 
  0b00000000, 
  0b00000000, 
  0b00000000,//173

  0b00000000, 
  0b00000000, 
  0b00000000, 
  0b11111000, 
  0b11111000, 
  0b00011000, 
  0b00011000, 
  0b00011000,//174

  0b00000000, 
  0b00000000, 
  0b00000000, 
  0b00000000, 
  0b00000000, 
  0b00000000, 
  0b11111111, 
  0b11111111,//175

  0b00000000, 
  0b00000000, 
  0b00000000, 
  0b00011111, 
  0b00011111, 
  0b00011000, 
  0b00011000, 
  0b00011000,//176

  0b00011000, 
  0b00011000, 
  0b00011000, 
  0b11111111, 
  0b11111111, 
  0b00000000, 
  0b00000000, 
  0b00000000,//177

  0b00000000, 
  0b00000000, 
  0b00000000, 
  0b11111111, 
  0b11111111, 
  0b00011000, 
  0b00011000, 
  0b00011000,//178

  0b00011000, 
  0b00011000, 
  0b00011000, 
  0b11111000, 
  0b11111000, 
  0b00011000, 
  0b00011000, 
  0b00011000,//179

  0b11000000, 
  0b11000000, 
  0b11000000, 
  0b11000000, 
  0b11000000, 
  0b11000000, 
  0b11000000, 
  0b11000000,//180

  0b11100000, 
  0b11100000, 
  0b11100000, 
  0b11100000, 
  0b11100000, 
  0b11100000, 
  0b11100000, 
  0b11100000,//181

  0b00000111, 
  0b00000111, 
  0b00000111, 
  0b00000111, 
  0b00000111, 
  0b00000111, 
  0b00000111, 
  0b00000111,//182

  0b11111111, 
  0b11111111, 
  0b00000000, 
  0b00000000, 
  0b00000000, 
  0b00000000, 
  0b00000000, 
  0b00000000,//183

  0b11111111, 
  0b11111111, 
  0b11111111, 
  0b00000000, 
  0b00000000, 
  0b00000000, 
  0b00000000, 
  0b00000000,//184

  0b00000000, 
  0b00000000, 
  0b00000000, 
  0b00000000, 
  0b00000000, 
  0b11111111, 
  0b11111111, 
  0b11111111,//185

  0b00000011, 
  0b00000011, 
  0b00000011, 
  0b00000011, 
  0b00000011, 
  0b00000011, 
  0b11111111, 
  0b11111111,//186

  0b00000000, 
  0b00000000, 
  0b00000000, 
  0b00000000, 
  0b11110000, 
  0b11110000, 
  0b11110000, 
  0b11110000,//187

  0b00001111, 
  0b00001111, 
  0b00001111, 
  0b00001111, 
  0b00000000, 
  0b00000000, 
  0b00000000, 
  0b00000000,//188

  0b00011000, 
  0b00011000, 
  0b00011000, 
  0b11111000, 
  0b11111000, 
  0b00000000, 
  0b00000000, 
  0b00000000,//189

  0b11110000, 
  0b11110000, 
  0b11110000, 
  0b11110000, 
  0b00000000, 
  0b00000000, 
  0b00000000, 
  0b00000000,//190

  0b11110000, 
  0b11110000, 
  0b11110000, 
  0b11110000, 
  0b00001111, 
  0b00001111, 
  0b00001111, 
  0b00001111,//191

  0b00000000, 
  0b00000000, 
  0b00000000, 
  0b11111111, 
  0b11111111, 
  0b00000000, 
  0b00000000, 
  0b00000000,//192

  0b00001000, 
  0b00011100, 
  0b00111110, 
  0b01111111, 
  0b01111111, 
  0b00011100, 
  0b00111110, 
  0b00000000,//193

  0b00011000, 
  0b00011000, 
  0b00011000, 
  0b00011000, 
  0b00011000, 
  0b00011000, 
  0b00011000, 
  0b00011000,//194

  0b00000000, 
  0b00000000, 
  0b00000000, 
  0b11111111, 
  0b11111111, 
  0b00000000, 
  0b00000000, 
  0b00000000,//195

  0b00000000, 
  0b00000000, 
  0b11111111, 
  0b11111111, 
  0b00000000, 
  0b00000000, 
  0b00000000, 
  0b00000000,//196

  0b00000000, 
  0b11111111, 
  0b11111111, 
  0b00000000, 
  0b00000000, 
  0b00000000, 
  0b00000000, 
  0b00000000,//197

  0b00000000, 
  0b00000000, 
  0b00000000, 
  0b00000000, 
  0b11111111, 
  0b11111111, 
  0b00000000, 
  0b00000000,//198

  0b00110000, 
  0b00110000, 
  0b00110000, 
  0b00110000, 
  0b00110000, 
  0b00110000, 
  0b00110000, 
  0b00110000,//199

  0b00001100, 
  0b00001100, 
  0b00001100, 
  0b00001100, 
  0b00001100, 
  0b00001100, 
  0b00001100, 
  0b00001100,//200

  0b00000000, 
  0b00000000, 
  0b00000000, 
  0b11110000, 
  0b11111000, 
  0b00011000, 
  0b00011000, 
  0b00011000,//201

  0b00011000, 
  0b00011000, 
  0b00011000, 
  0b00011111, 
  0b00001111, 
  0b00000000, 
  0b00000000, 
  0b00000000,//202

  0b00011000, 
  0b00011000, 
  0b00011000, 
  0b11111000, 
  0b11110000, 
  0b00000000, 
  0b00000000, 
  0b00000000,//203

  0b11000000, 
  0b11000000, 
  0b11000000, 
  0b11000000, 
  0b11000000, 
  0b11000000, 
  0b11111111, 
  0b11111111,//204

  0b11000000, 
  0b11100000, 
  0b01110000, 
  0b00111000,
  0b00011100, 
  0b00001110, 
  0b00000111, 
  0b00000011,//205

  0b00000011, 
  0b00000111, 
  0b00001110, 
  0b00011100,
  0b00111000, 
  0b01110000, 
  0b11100000, 
  0b11000000,//206

  0b11111111, 
  0b11111111, 
  0b11000000, 
  0b11000000,
  0b11000000, 
  0b11000000, 
  0b11000000, 
  0b11000000,//207

  0b11111111, 
  0b11111111, 
  0b00000011, 
  0b00000011,
  0b00000011, 
  0b00000011, 
  0b00000011, 
  0b00000011,//208

  0b00000000, 
  0b00111100, 
  0b01111110, 
  0b01111110, 
  0b01111110, 
  0b01111110, 
  0b00111100, 
  0b00000000,//209

  0b00000000, 
  0b00000000, 
  0b00000000, 
  0b00000000, 
  0b00000000, 
  0b11111111, 
  0b11111111, 
  0b00000000,//210

  0b00110110, 
  0b01111111, 
  0b01111111, 
  0b01111111, 
  0b00111110, 
  0b00011100, 
  0b00001000, 
  0b00000000,//211

  0b01100000, 
  0b01100000, 
  0b01100000, 
  0b01100000,
  0b01100000, 
  0b01100000, 
  0b01100000, 
  0b01100000,//212

  0b00000000, 
  0b00000000, 
  0b00000000, 
  0b00001111, 
  0b00011111, 
  0b00011000, 
  0b00011000, 
  0b00011000,//213

  0b11000011, 
  0b11100111, 
  0b01111110, 
  0b00111100,
  0b00111100, 
  0b01111110, 
  0b11100111, 
  0b11000011,//214

  0b00000000, 
  0b00111100, 
  0b01111110, 
  0b01100110, 
  0b01100110, 
  0b01111110, 
  0b00111100, 
  0b00000000,//215

  0b00011000, 
  0b00011000, 
  0b01100110, 
  0b01100110, 
  0b00011000, 
  0b00011000, 
  0b00111100, 
  0b00000000,//216

  0b00000110, 
  0b00000110, 
  0b00000110, 
  0b00000110,
  0b00000110, 
  0b00000110, 
  0b00000110, 
  0b00000110,//217

  0b00001000, 
  0b00011100, 
  0b00111110, 
  0b01111111, 
  0b00111110, 
  0b00011100, 
  0b00001000, 
  0b00000000,//218

  0b00011000, 
  0b00011000, 
  0b00011000, 
  0b11111111, 
  0b11111111, 
  0b00011000, 
  0b00011000, 
  0b00011000,//219

  0b11000000, 
  0b11000000, 
  0b00110000, 
  0b00110000, 
  0b11000000, 
  0b11000000, 
  0b00110000, 
  0b00110000,//220

  0b00011000, 
  0b00011000, 
  0b00011000, 
  0b00011000, 
  0b00011000, 
  0b00011000, 
  0b00011000, 
  0b00011000,//221

  0b00000000, 
  0b00000011, 
  0b01111110, 
  0b11100110, 
  0b01100110, 
  0b01100110, 
  0b01100110, 
  0b00000000,//222

  0b11111111, 
  0b11111111, 
  0b01111111, 
  0b00111111,
  0b00011111, 
  0b00001111, 
  0b00000111, 
  0b00000011,//223

  0b00000000, 
  0b00000000, 
  0b00000000, 
  0b00000000,
  0b00000000, 
  0b00000000, 
  0b00000000, 
  0b00000000,//224

  0b11110000, 
  0b11110000, 
  0b11110000, 
  0b11110000,
  0b11110000, 
  0b11110000, 
  0b00000000, 
  0b00000000,//225

  0b00000000, 
  0b00000000, 
  0b00000000, 
  0b11111111, 
  0b11111111, 
  0b11111111, 
  0b00000000, 
  0b00000000,//226

  0b11111111, 
  0b00000000, 
  0b00000000, 
  0b00000000, 
  0b00000000, 
  0b00000000, 
  0b00000000, 
  0b00000000,//227

  0b00000000, 
  0b00000000, 
  0b00000000, 
  0b00000000, 
  0b00000000, 
  0b00000000, 
  0b00000000, 
  0b11111111,//228

  0b11000000, 
  0b11000000, 
  0b11000000, 
  0b11000000, 
  0b11000000, 
  0b11000000, 
  0b11000000, 
  0b11000000,//229

  0b11001100, 
  0b11001100, 
  0b00110011, 
  0b00110011, 
  0b11001100, 
  0b11001100, 
  0b00110011, 
  0b00110011,//230

  0b00000011, 
  0b00000011, 
  0b00000011, 
  0b00000011, 
  0b00000011, 
  0b00000011, 
  0b00000011, 
  0b00000011,//231

  0b00000000, 
  0b00000000, 
  0b00000000, 
  0b00000000, 
  0b11001100, 
  0b11001100, 
  0b00110011, 
  0b00110011,//232

  0b11111111, 
  0b11111111, 
  0b11111110, 
  0b11111100,
  0b11111000, 
  0b11110000, 
  0b11100000, 
  0b11000000,//233

  0b00000011, 
  0b00000011, 
  0b00000011, 
  0b00000011,
  0b00000011, 
  0b00000011, 
  0b00000011, 
  0b00000011,//234

  0b00011000, 
  0b00011000, 
  0b00011000, 
  0b00011111, 
  0b00011111, 
  0b00011000, 
  0b00011000, 
  0b00011000,//235

  0b00000000, 
  0b00000000, 
  0b00000000, 
  0b00000000,
  0b00001111, 
  0b00001111, 
  0b00001111, 
  0b00001111,//236

  0b00011000, 
  0b00011000, 
  0b00011000, 
  0b00011111, 
  0b00011111, 
  0b00000000, 
  0b00000000, 
  0b00000000,//237

  0b00000000, 
  0b00000000, 
  0b00000000, 
  0b11111000, 
  0b11111000, 
  0b00011000, 
  0b00011000, 
  0b00011000,//238

  0b00000000, 
  0b00000000, 
  0b00000000, 
  0b00000000, 
  0b00000000, 
  0b00000000, 
  0b11111111, 
  0b11111111,//239

  0b00000000, 
  0b00000000, 
  0b00000000, 
  0b00011111, 
  0b00011111, 
  0b00011000, 
  0b00011000, 
  0b00011000,//240

  0b00011000, 
  0b00011000, 
  0b00011000, 
  0b11111111, 
  0b11111111, 
  0b00000000, 
  0b00000000, 
  0b00000000,//241

  0b00000000, 
  0b00000000, 
  0b00000000, 
  0b11111111, 
  0b11111111, 
  0b00011000, 
  0b00011000, 
  0b00011000,//242

  0b00011000, 
  0b00011000, 
  0b00011000, 
  0b11111000, 
  0b11111000, 
  0b00011000, 
  0b00011000, 
  0b00011000,//243

  0b11000000, 
  0b11000000, 
  0b11000000, 
  0b11000000, 
  0b11000000, 
  0b11000000, 
  0b11000000, 
  0b11000000,//244

  0b11100000, 
  0b11100000, 
  0b11100000, 
  0b11100000, 
  0b11100000, 
  0b11100000, 
  0b11100000, 
  0b11100000,//245

  0b00000111, 
  0b00000111, 
  0b00000111, 
  0b00000111, 
  0b00000111, 
  0b00000111, 
  0b00000111, 
  0b00000111,//246

  0b11111111, 
  0b11111111, 
  0b00000000, 
  0b00000000, 
  0b00000000, 
  0b00000000, 
  0b00000000, 
  0b00000000,//247

  0b11111111, 
  0b11111111, 
  0b11111111, 
  0b00000000, 
  0b00000000, 
  0b00000000, 
  0b00000000, 
  0b00000000,//248

  0b00000000, 
  0b00000000, 
  0b00000000, 
  0b00000000, 
  0b00000000, 
  0b11111111, 
  0b11111111, 
  0b11111111,//249

  0b00000011, 
  0b00000011, 
  0b00000011, 
  0b00000011, 
  0b00000011, 
  0b00000011, 
  0b11111111, 
  0b11111111,//250

  0b00000000, 
  0b00000000, 
  0b00000000, 
  0b00000000, 
  0b11110000, 
  0b11110000, 
  0b11110000, 
  0b11110000,//251

  0b00001111, 
  0b00001111, 
  0b00001111, 
  0b00001111, 
  0b00000000, 
  0b00000000, 
  0b00000000, 
  0b00000000,//252

  0b00011000, 
  0b00011000, 
  0b00011000, 
  0b11111000, 
  0b11111000, 
  0b00000000, 
  0b00000000, 
  0b00000000,//253

  0b11110000, 
  0b11110000, 
  0b11110000, 
  0b11110000, 
  0b00000000, 
  0b00000000, 
  0b00000000, 
  0b00000000,//254

  0b11110000, 
  0b11110000, 
  0b11110000, 
  0b11110000, 
  0b00001111, 
  0b00001111, 
  0b00001111, 
  0b00001111,//255

   0x00, 0x00, 0x3c, 0x3c, 0x3c, 0x3c, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
 };


extern const FontInfo FONT_8x8 = {
  .pointSize = 6,
  .width     = 8,
  .height    = 8,
  .ascent    = 7,
  .inleading = 0,
  .exleading = 0,
  .flags     = 0,
  .weight    = 400,
  .charset   = 255,
  .data      = FONT_8x8_DATA,
  .chptr     = nullptr,
  .codepage  = 437,
};

#else

extern const FontInfo FONT_8x8;

#endif

}


