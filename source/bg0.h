
//{{BLOCK(bg0)

//======================================================================
//
//	bg0, 512x256@4, 
//	+ palette 8 entries, not compressed
//	+ 80 tiles (t|f|p reduced) not compressed
//	+ regular map (in SBBs), not compressed, 64x32 
//	Total size: 16 + 2560 + 4096 = 6672
//
//	Time-stamp: 2020-04-08, 22:05:02
//	Exported by Cearn's GBA Image Transmogrifier, v0.8.3
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_BG0_H
#define GRIT_BG0_H

#define bg0TilesLen 2560
extern const unsigned short bg0Tiles[1280];

#define bg0MapLen 4096
extern const unsigned short bg0Map[2048];

#define bg0PalLen 16
extern const unsigned short bg0Pal[8];

#endif // GRIT_BG0_H

//}}BLOCK(bg0)
