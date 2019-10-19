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
	double dot (const Vector& v) const
	{
		return((this.x*v.x)+(this.y*v.y)+(this.y*v.y));
	}
	Vector cross(const Vector& v) const
	{
		Vector result& = new Vector;
		result.x=((this.y*v.z)-(this.z*v.y));
		result.y=((this.z*v.x)-(this.x*v.z));
		result.z=((this.x*v.y)+(this.y*v.x));
		return result;
	}
	void print() const
	{
		printf("%lf \n", m_x;)
		printf("%lf \n", m_y;)
		printf("%lf \n", m_z;)
	}
	void garbage_function()
	{
		printf("I am printing useful facts  \n");
	}
}
	