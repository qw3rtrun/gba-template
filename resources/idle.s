
@{{BLOCK(idle)

@=======================================================================
@
@	idle, 128x32@4, 
@	+ palette 16 entries, not compressed
@	+ 64 tiles Metatiled by 2x4 not compressed
@	Total size: 32 + 2048 = 2080
@
@	Time-stamp: 2020-04-17, 21:35:46
@	Exported by Cearn's GBA Image Transmogrifier, v0.8.15
@	( http://www.coranac.com/projects/#grit )
@
@=======================================================================

	.section .rodata
	.align	2
	.global idleTiles		@ 2048 unsigned chars
	.hidden idleTiles
idleTiles:
	.word 0x00000000,0x00000000,0x55000000,0x55511000,0x99554000,0x99995000,0xD9955000,0x2D595000
	.word 0x00000000,0x00990990,0x00995999,0x00999999,0x00059999,0x00055595,0x0000DDDD,0x00022D22
	.word 0x2DB5D000,0xFDC4F000,0xFFBB1000,0xFFDD0000,0xFDD00000,0x6AAAE000,0xAAAEAE00,0xEAAAEEE0
	.word 0x00002BBD,0xA700FB9F,0x7770FFFF,0x0777FFDD,0x00111FFF,0x007183B9,0x00088436,0x00A8CC5E
	.word 0xEEAAEEE0,0xEEAAEEEE,0x44AA0EEE,0xD8800AAA,0x88110EEE,0xAA111FFD,0x11111FFF,0xC8011FFF
	.word 0x00AECCC4,0x0AAEECCC,0x0AAEEECC,0x066EEEEB,0x0AAAEEEE,0x0BB0AAAA,0x0DDD1FFC,0x0DBD4488
	.word 0xCCC00000,0xCCC00000,0xCCC80000,0xCCCC0000,0x0CB80000,0x00110000,0x00440000,0x00440000
	.word 0x0000881C,0x00008848,0x00008884,0x00000884,0x00000888,0x00000110,0x00000110,0x00001410

	.word 0x00000000,0x00000000,0x55000000,0x55511000,0x99554000,0x99995000,0xD9955000,0x2D595000
	.word 0x00000000,0x00990990,0x00995999,0x00999999,0x00059999,0x00055595,0x0000DDDD,0x00022D22
	.word 0xBD551000,0xFDC4F000,0xFFBB1000,0xFFDD0000,0xFDD00000,0x6AAAE000,0xAAAEAE00,0xEAAAEEE0
	.word 0x0000BBBC,0xA700FBBF,0x7770FFFF,0x0777FFDD,0x00111FFF,0x007183B9,0x00088436,0x00A8CC4E
	.word 0xEEAAEEE0,0xEEAAEEEE,0x44AA0EEE,0xC8800AAA,0x88110EEE,0xAA111FFD,0x14111FFF,0xC5011FFF
	.word 0x00AECCC5,0x0AAEECCC,0x0AAEEECC,0x066EEEEC,0x0AA0EEEE,0x0BB0AAAA,0x0DDD1FFC,0x0DBD4488
	.word 0xCCC00000,0xCCC00000,0xCCC80000,0xCCCC0000,0x0CB80000,0x00110000,0x00440000,0x00440000
	.word 0x0000884C,0x00008818,0x00008884,0x00000884,0x00000888,0x00000110,0x00000110,0x00001410

	.word 0x00000000,0x55000000,0x55511000,0x99554000,0x99995000,0xD9955000,0x2D595000,0xBD551000
	.word 0x00000000,0x00095995,0x00995999,0x00999999,0x00055595,0x0005DDDD,0x00022D22,0x0000BBBB
	.word 0xDDC5D000,0xFFBD1000,0xFFDD0000,0xFDD00000,0x6AAAA000,0xAAAAE000,0xEAAEAE00,0xEEAAEEE0
	.word 0x00002BBD,0xA700FFFF,0x7770FFDD,0x07770FFF,0x0011839B,0x00788436,0x00088C5E,0x00AECCC5
	.word 0xEEAAEEE0,0x44AAEEEE,0xDC800EEE,0x88000AAA,0xAA110EEE,0xAA111FFD,0x11111FFF,0xC8010FFF
	.word 0x00AEECCC,0x0AAEEECC,0x0AAEEEEC,0x066AEEEE,0x0AA0EEEE,0x0BB0AAAA,0x0DDD1FFC,0x0DBD4488
	.word 0xCCC00000,0xCCC00000,0xCCC80000,0xCBCC0000,0x0CC80000,0x00110000,0x00440000,0x00440000
	.word 0x0000881C,0x00008848,0x00008884,0x00000884,0x00000888,0x00000110,0x00000110,0x00001410

	.word 0x00000000,0x55000000,0x55511000,0x99554000,0x99995000,0xD9955000,0x2D595000,0xBD551000
	.word 0x00000000,0x00995995,0x00999999,0x00999999,0x00055555,0x0000DDDD,0x00022D22,0x0000BBBB
	.word 0xFDB4F000,0xFFCB1000,0xFFDD0000,0xFDD00000,0x6AAAE000,0xAAAEAE00,0xEAAEAE00,0xEEAAEEE0
	.word 0xA700FBBF,0x7770FFFF,0x0777FFDD,0x00711FFF,0x001183B9,0x00088436,0x00088C4E,0x00AECCC5
	.word 0xEAAAEEE0,0x44A0EEEE,0xCC800AAA,0x88110EEE,0xAA111FFD,0x14111FFF,0x88011FFF,0xC8000FF0
	.word 0x00AEECCC,0x0AAEEEBC,0x066EEEEC,0x0AA6EEEE,0x0BB0AAAA,0x0DDD1FFC,0x0DBD4488,0x00D04188
	.word 0xCCC00000,0xCCC80000,0xCBCC0000,0x8CCC0000,0x0CC80000,0x00110000,0x00440000,0x00440000
	.word 0x0000884C,0x00008884,0x00000884,0x00000888,0x00000880,0x00000110,0x00000110,0x00001410

	.word 0x00000000,0x55000000,0x55511000,0x99554000,0x99995000,0xD9955000,0x2D595000,0xBD551000
	.word 0x00990990,0x00995999,0x00999999,0x00059999,0x00055595,0x0000DDDD,0x00022D22,0x0000BBBB
	.word 0xFDB4F000,0xFFCB1000,0xFFDD0000,0xFDD00000,0x6AAAE000,0xAAAEAE00,0xEEAAEEE0,0xEEAAEEE0
	.word 0xA700FBBF,0x7770FFFF,0x0777FFDD,0x00711FFF,0x001183B9,0x00088436,0x00A8CC4E,0x00AECCC5
	.word 0xEAAAEEEE,0x44A00EEE,0xC8800AAA,0x88110EEE,0xAA111FFD,0x11111FFF,0x88011FFF,0xCC000FF0
	.word 0x00AEECCC,0x0AAEEECC,0x066AEEEC,0x0AA0AEEE,0x0BB0AAAA,0x0DDD1FFC,0x0DBD4188,0x00D0448C
	.word 0xCCC00000,0xCCB80000,0xCCCC0000,0x8CCC0000,0x0BC80000,0x00110000,0x00440000,0x00440000
	.word 0x00008848,0x00008884,0x00000881,0x00000888,0x00000880,0x00000110,0x00000110,0x00001410

	.word 0x00000000,0x00000000,0x55500000,0x95511000,0x99554000,0x99995000,0xD9955000,0x2D595000
	.word 0x00000000,0x00995999,0x00999999,0x00059999,0x00059999,0x00095595,0x0000DDDD,0x00022D22
	.word 0x2D551000,0xFDC4F000,0xFFBB1000,0xFFDD0000,0xFDD00000,0x6AAAE000,0x6AAAEE00,0xAAAEAEE0
	.word 0x0000BBBB,0xA700FBBF,0x7770FFFF,0x0777FFDD,0x00111FFF,0x0071139B,0x000183BB,0x00A8C436
	.word 0xEEAAEEE0,0xEEAAEEEE,0xEAAA0AAA,0x44A00EEE,0x88810FFD,0x88111FFF,0x14111FFF,0xC8011FF0
	.word 0x00A8CC4E,0x0AAECCC4,0x066EECCC,0x0AAAEECC,0x0BB0EEEC,0x0DDDAAAA,0x0DBD1FFB,0x00D04488
	.word 0xCCC00000,0xCCC00000,0xCCC80000,0xCCCC0000,0x0CC80000,0x00110000,0x00140000,0x00440000
	.word 0x0000884C,0x00008818,0x00008884,0x00000884,0x00000888,0x00000110,0x00000110,0x00001410

	.word 0x00000000,0x00000000,0x00000000,0x55500000,0x95511000,0x99554000,0x99995000,0xD9955000
	.word 0x00000000,0x00000000,0x00995999,0x00999999,0x00059999,0x00059999,0x00095595,0x0000DDDD
	.word 0x2D595000,0x2DB5D000,0xFDD1F000,0xFFBB4000,0xFFDD0000,0xFDD00000,0x6AAAEA00,0xAAAEAEE0
	.word 0x00022D22,0x00002BBD,0xA700F9BF,0x7770FFFF,0x0777FFDD,0x00711FFF,0x0011839B,0x00088436
	.word 0xEAAAEEE0,0xEEAAEEEE,0xEAAAEEEE,0x44AA0AAA,0xD8800EEE,0x88110FFD,0xAA111FFF,0x11111FFF
	.word 0x00A8CC5E,0x0AAECCC4,0x0AAEECCC,0x066EEECC,0x0AAAEEEC,0x0BB0EEEE,0x0DDDAAAA,0x0DBD1FFC
	.word 0xCC000000,0xCCC00000,0xCCC00000,0xCBCC0000,0x8CC80000,0x00110000,0x00440000,0x00440000
	.word 0x0000418C,0x0000884C,0x00008848,0x00008884,0x00000884,0x00000110,0x00000110,0x00001410

	.word 0x00000000,0x00000000,0x00000000,0x55000000,0x95511000,0x99554000,0x99995000,0xD9955000
	.word 0x00000000,0x00000000,0x00990990,0x00995999,0x00999999,0x00059999,0x00055595,0x0000DDDD
	.word 0x2D595000,0x2DB5D000,0xFDD1F000,0xFFBB4000,0xFFDD0000,0xFDD00000,0x6AAAE000,0xAAAEAE00
	.word 0x00022D22,0x00002BBD,0xA700F9BF,0x7770FFFF,0x0777FFDD,0x00711FFF,0x0011839B,0x00088436
	.word 0xEAAAEEE0,0xEEAAEEE0,0xEEAAEEEE,0x45AA0EEE,0xC8800AAA,0x58110EEE,0xAA111FFD,0x14111FFF
	.word 0x00A8CC5E,0x00AECCC4,0x0AAEECCC,0x0AAEEECC,0x066EEEED,0x0AAAEEEE,0x0BB0AAAA,0x0DDD1FFC
	.word 0xCC000FF0,0xCCC00000,0xCCC00000,0xCBCC0000,0x8CC80000,0x00110000,0x00440000,0x00440000
	.word 0x00D0418C,0x0000884C,0x00008848,0x00008884,0x00000884,0x00000110,0x00000110,0x00001410

	.section .rodata
	.align	2
	.global idlePal		@ 32 unsigned chars
	.hidden idlePal
idlePal:
	.hword 0x0000,0x1486,0x0887,0x1CA3,0x1CEB,0x18CC,0x2924,0x2129
	.hword 0x2150,0x1D71,0x3E08,0x25B6,0x2A17,0x3E7C,0x4F0D,0x4F3F

@}}BLOCK(idle)
