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
	double getZ()
	{
		return m_z;
	}
	void add (const Vector& v)
	{
		this.m_x+=v.m_x;
		this.m_y+=v.m_y;
		this.m_z+=v.m_z;
	}
	void sub (const Vector& v)
	{
		this.m_x-=v.m_x;
		this.m_y-=v.m_y;
		this.m_z-=v.m_z;
	}
	double dot (const Vector& v) const;
	Vector cross(const Vector& v) const;
	void print() const;
}
	