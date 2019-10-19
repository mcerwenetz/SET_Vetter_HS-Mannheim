class Vector{
	double m_x;
	double m_y;
	double m_z;
	
public:
	Vector(const double& x=0, const double& y=0, const double& z=0);
	double getX()
	{
		return m_x;
	}
	double getY()
	{
		return m_y;
	}
	double getZ();
	void add (const Vector& v);
	void sub (const Vector& v);
	double dot (const Vector& v) const;
	Vector cross(const Vector& v) const;
	void print() const;
}
	