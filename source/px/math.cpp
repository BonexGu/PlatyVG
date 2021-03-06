﻿#include "math.hpp"
#include <math.h>

namespace Px
{
	float Math::MinF(const float a, const float b)
	{
		return fminf(a, b);
	}

	float Math::MaxF(const float a, const float b)
	{
		return fmaxf(a, b);
	}

	float Math::Sqrt(const float v)
	{
		return sqrtf(v);
	}

	float Math::Cos(const float v)
	{
		return cosf(v);
	}

	float Math::Sin(const float v)
	{
		return sinf(v);
	}

	float Math::Atan(const float x, const float y)
	{
		return atan2f(y, x);
	}

	float Math::Distance(const float x1, const float y1, const float x2, const float y2)
	{
		const float X = x1 - x2;
		const float Y = y1 - y2;
		return Sqrt(X * X + Y * Y);
	}
}
