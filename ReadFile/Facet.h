#pragma once
#include"Point.h"
#include <vector>
using namespace std;
class Facet
{

private:
	// �ڼ�����Ƭ
	int index; 

	// ��Ƭ�ĸ��������Ϣ
	Point x; Point y; Point z;

	// �����Ƭ�Ӹ������Ϣ
	vector<Point>_facetList;

public:

	Facet(Point x1, Point y1, Point z1){
		x = x1;
		y = y1;
		z = z1;
	}
	void addFacet(Point point)
	{
		_facetList.push_back(point);
	}
	Facet() {};
	void setX(Point x1) {
		x = x1;
	}
	void setY(Point y1) {
		x = y1;
	}
	void setZ(Point z1) {
		x = z1;
	}
};

