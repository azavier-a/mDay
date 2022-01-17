#pragma once

static const float PI = 3.141592f;
static const float PIP = PI * 1.5;
static const float TWO_PI = PI * 2;
static const float TAU = TWO_PI;
static const float HALF_PI = PI / 2;
static const float FOURTH_PI = PI / 4;
static const float SIXTH_PI = PI / 6;
static const float EIGHTH_PI = PI / 8;

static const float E = 2.718281f;

namespace mDay {
	/** Definition:
	 * Maps one value onto another, with an input and an output range given.
	 *	Parameters:
	 * val - the value you wish to map.
	 * minRA - the minimum of the input range.
	 * maxRA - the maximum of the input range.
	 * minRB - the minimum of the output range.
	 * maxRB - the maximum of the output range.
	 *	Examples:
	 * map(3, 0, 9, 0, 100) == 33.3333
	 * map(500, 450, 550, 0, 1) = 0.5
	**/
	float map(float val, float minRA, float maxRA, float minRB, float maxRB);

	/** Definition:
	 * Maps one value onto another, with an input range of -1 - 1 and an output range given. For good use with sin, cos.
	 *	Parameters:
	 * val - the value you wish to map.
	 * minR - the minimum of the output range.
	 * maxR - the maximum of the output range.
	**/
	float map(float val, float minR, float maxR);

	/** Definition:
	 * Absolute value.
	**/
	float abs(float val);
}