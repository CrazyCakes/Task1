#pragma once
class Point
{
	// �ڼ�����
	int index; 

	// �����ά����
	double x; 
	double y; 
	double z;
public:
	Point(double x1, double y1, double z1) {
		x = x1;
		y = y1;
		z = z1;
	}
	Point() {}
	double getX() {
		return x;
	}
	double getY() {
		return y;
	}
	double getZ() {
		return z;
	}
	int  getIndex() {
		return index;
	}
	bool operator<(const Point& _b)
	{
		if (x > _b.x) {
			return true;
		}
		// ��ȱȽ� y
		else if (x == _b.x) {
			if (y > _b.y) {
				return true;
			}
			else if (z > _b.z) {
				return true;
			}
			else {
				return false;
			}
		}
		else {
			return false;
		}
	}
};

