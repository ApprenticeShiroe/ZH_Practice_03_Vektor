#pragma once
class vector
{
private:
	double x;
	double y;
public:
	vector();
	vector(double px);
	vector(double px, double py) :x(px), y(py){};
	double getX()const;
	double getY()const;
	void setX(double px);
	void setY(double py);
	void add(vector &v1, vector &v2);
	void sub(vector& v1, vector& v2);
	void mult(vector& v1, vector& v2);
	void print()const;
};

