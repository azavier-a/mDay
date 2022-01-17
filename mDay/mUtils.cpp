#include "pch.h"
#include "framework.h"
#include "mUtils.h"

namespace mDay {
	float map(float val, float minRA, float maxRA, float minRB, float maxRB) {
		return minRB + (maxRB - minRB) / (maxRA - minRA) * abs(val - minRA);
	}

	float map(float val, float min, float max) {
		return min + (max - min) * .5 * (val + 1);
	}

	float abs(float val) {
		return val < 0 ? -val : val;
	}
}

/*
13
0 - 26 | Input: 13
0 - 20 | Expected Output: 10
---------
v = 13
MiRA = 0 | MaRA = 26
MiRB = 0 | MaRB = 20


MiRB + (MaRB - MiRB) / (MaRA - MiRA) * |(v - MiRA)|

// My thought process:

Add the minimum of our output range to offset our "Origin" to the minimum output range.

We divide by the differences of the start/end range, to "normalize" our range

and finally, we multiply by the distance of our value to the start of
our start range.

I belive this will map one numeric with range onto another..

Let's work it out.

0 + (20 - 0) / (26 - 0) * (13 - 0)
20 / 26 * 13
10/13 * 13
10

v = 256
MiRA = 200 | MaRA = 300
MiRB = 1200 | MaRB = 1500

1200 + (1500 - 1200) / (300 - 200) * (256 - 200)
1200 + 300 / 100 * 56
1200 + 3 * 56
1200 + 168
1368
*/