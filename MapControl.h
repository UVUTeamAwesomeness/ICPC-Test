#pragma once
#include<string>
struct vec {
	int x,y;
};

class MapControl
{
	vec Position;
	std::string MapData;
	int m_Height;
	int m_Width;
	MapControl();
	~MapControl();
	int QueryDirection(int QueryDirection);

};

