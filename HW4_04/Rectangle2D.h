class Rectangle2D
{
private:
	double x, y, width, height;
public:

	Rectangle2D()
	{
		x = 0;
		y = 0;
		width = 1;
		height = 1;
	};
	Rectangle2D(int x, int y, int width, int height);

	double getX() const;
	void setX(int x);
	double getY() const;
	void setY(int y);
	double getWidth() const;
	void setWidth(int width);
	double getHeight() const;
	void setHeight(int height);
	double getArea() const;
	double getPerimeter() const;
	bool contains(double x, double y) const;
	bool contains(const Rectangle2D &r) const;
	bool overlaps(const Rectangle2D &r) const;


};