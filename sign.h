/* 
 * sign - return 1 if positive, 0 if zero, and -1 if negative
 *  Examples: sign(130) = 1
 *            sign(-23) = -1
 *  Legal ops: ! ~ & ^ | + << >>
 */
int sign(int x) {
	//printf("x:%d %d %d \n",x, x>>31, ((((~x)>>31)+2) & 1));
	return (x>>31) ^ (((((~x)+1)>>31)+2) & 1);
}
