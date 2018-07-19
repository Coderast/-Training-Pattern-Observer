#pragma once

enum Team : bool {
	RADIANT = true,
	DIRE = false
};

enum Side : char {
	TOP,
	MIDDLE,
	BOTTOM
};

inline const char * toString(const Side &side)
{
	if (side == TOP)
		return "top";
	if (side == MIDDLE)
		return "middle";
	return "bottom";
}