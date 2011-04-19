class Polygon
{
public:
	void set_sides(int);
	void set_angles(int);
	void set_vertices(int);
	void set_diagonals(int);
	
protected:
	int sides, angles, vertices, diagonals;
};

void polygon::set_sides(int s)
{
	sides = s;
}
void polygon::set_angles(int a)
{
	angles = a;
}
void polygon::set_vertices(int v)
{
	vertices = v;
}
void polygon::set_diagonals(int d)
{
	diagonals = d;
}
