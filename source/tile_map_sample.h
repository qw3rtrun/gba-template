
//{{BLOCK(tile_map_sample)

//======================================================================
//
//	tile_map_sample, 240x160@4, 
//	+ palette 8 entries, not compressed
//	+ 50 tiles (t|f|p reduced) not compressed
//	+ regular map (flat), not compressed, 30x20 
//	Total size: 16 + 1600 + 1200 = 2816
//
//	Time-stamp: 2020-03-25, 19:24:36
//	Exported by Cearn's GBA Image Transmogrifier, v0.8.3
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_TILE_MAP_SAMPLE_H
#define GRIT_TILE_MAP_SAMPLE_H

#define tile_map_sampleTilesLen 1600
extern const unsigned short tile_map_sampleTiles[800];

#define tile_map_sampleMapLen 1200
extern const unsigned short tile_map_sampleMap[600];

#define tile_map_samplePalLen 16
extern const unsigned short tile_map_samplePal[8];

#endif // GRIT_TILE_MAP_SAMPLE_H

//}}BLOCK(tile_map_sample)
