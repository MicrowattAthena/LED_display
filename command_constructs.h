#ifndef __COMMAND_CONSTRUCTS_H
#define __COMMAND_CONSTRUCTS_H

char first_header_construct[] = 
{ 	0xA5, 0xFF, 0x77, 0x00, 0x01, 0x00,

	0x01 //Screen Number

};


char second_header_construct[] = 
{
	0x40, 0x02, 0x00, 0x00, 0x01, 0x00, 0x00, 0x01, // Effect Type
	
	0x00,
	
	0x02, //Screen Speed
	
	0x00,

	0x03, // Stay Time

	0x00,

	0x00, //Border Type

	0x00, 0x00, 0x10, 0x10, 0x08, 0x00, 
	
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,

	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,

	0x71, //CRC Check - Total of second message so far
	
	0x00,
	};

#endif // __COMMAND_CONSTRUCTS_H