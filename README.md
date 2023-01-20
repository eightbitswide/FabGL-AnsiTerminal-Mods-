# FabGL
### **ESP32** Display Controller (VGA, Color NTSC/PAL Composite, I2C and SPI displays), PS/2 Mouse and Keyboard Controller, Graphics Library, Sound Engine, Graphical User Interface (GUI), Game/Emulation Engine and ANSI/VT Terminal

**[Please look here for full API documentation](http://www.fabglib.org)**

This fork is for modifications of AnsiTerminal.  All original ESC-code functionality is maintained.

   * Changed VGA8x8 font to PETSCII font.
   * Added ESC_#{RESOLUTION}$ for resolution selection.
   * Added ESC_#{FONT}$ for font selection.
   * Added ESC_#APPLYSETTINGS$ to switch font/resoltion.
   * Added 320x200x64 resolution to option menu.
   * Altered the boot greeting to fit cleanly in all resolutions.

### Resolution Selection Notes:
The following resolution settings are avaible by ESC code:  (ESC "_#{RESOLUTION}$" : ESC "_#APPLYSETTINGS$")

  * 1280x768x2
  * 1024x720x4
  * 800x600x8
  * 720x520x16
  * 640x480@73x16
  * 640x480@60x16
  * 640x350x16
  * 512x384x64
  * 400x300x64
  * 320x200x64

Usage Example: 

10 PRINT CHR$(27)+"_#320x200x64$" <BR>
20 PRINT CHR$(27)+"_#APPLYSETTINGS$"

It is a good idea to apply some type of delay for the program continues to allow the monitor to catch up.
  
  
### Font Selection Notes:
The following font settings are are avaible by ESC code:  (ESC "_#{FONT}$" : ESC "_#APPLYSETTINGS$")
  
  * VGA 4x6
  * VGA 5x7
  * VGA 5x8
  * VGA 6x8
  * VGA 6x9
  * VGA 6x10
  * VGA 6x12
  * VGA 6x13
  * VGA 7x13
  * VGA 7x14
  * VGA 8x8
  * VGA 8x9
  * VGA 8x13
  * VGA 8x14
  * VGA 8x16
  * VGA 8x19
  * VGA 9x15
  * VGA 9x18
  * VGA 10x20
  * BigSerif 8x14
  * BigSerif 8x16
  * Block 8x14
  * Broadway 8x14
  * Computer 8x14
  * Courier 8x14
  * LCD 8x14
  * Old English 8x16
  * Sans Serif 8x14
  * Sans Serif 8x16
  * Slant 8x14
  * Wiggly 8x16 
  
Usage Example: 

10 PRINT CHR$(27)+"_#VGA 8x8$" <BR>
20 PRINT CHR$(27)+"_#APPLYSETTINGS$"

It is a good idea to apply some type of delay for the program continues to allow the monitor to catch up.
  
### Misc Notes:

If using resolution and font settings together, only a single _#APPLYSETTINGS$ is required.
  
Usage Example:
  
10 PRINT CHR$(27)+"_#VGA 8x8$" <BR>
20 PRINT CHR$(27)+"_#320x200x64$" <BR>
30 PRINT CHR$(27)+"_#APPLYSETTINGS$"  

Again, a small delay in the code will allow the monitor to catch up when these settings are applied.
  
  
  
  <B>Additional:</B> <BR>
In 320x200x64 mode, the GUI menu does not fit the screen.  You can however select a new resolution and press F10 to save/exit. 
  
  <B>Additional:</B> <BR>
The original "VGA 8x8" font has been altered. A preview of the new font can be seen on this link: <BR>
https://github.com/eightbitswide/FabGl_font_8x8_replacement/blob/main/petscii_8x8_font_sample.jpg


### Discussion on the changes being made are on:
https://groups.google.com/g/programming-on-cpm  <BR>
https://groups.google.com/g/altair-duino
  
