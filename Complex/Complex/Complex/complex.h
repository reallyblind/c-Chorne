#ifndef __COMPLEX__
#define __COMPLEX__

class complex
{
public:
	complex(double r = 0, double i = 0)
		:re(r), im(i)
	{};

	complex& operator += (const complex& r);
	double real() const { return re; }
	double imag() const { return im; }
	friend complex& __doap1(complex* ths, const complex& r);
	

private:
	double re, im;
	

	
};

#endif // !__COMPLEX__
