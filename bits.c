/* 
 * bitAnd - x&y using only ~ and | 
 *   Example: bitAnd(6, 5) = 4
 *   Legal ops: ~ |
 */
int bitAnd(int x, int y) {
  return ~(~x|~y);
}
/* 
 * bitXor - x^y using only ~ and & 
 *   Example: bitXor(4, 5) = 1
 *   Legal ops: ~ &
 */
int bitXor(int x, int y) {
  return (x&~y) | (~x & y);
}
/* 
 * fitsBits - return 1 if x can be represented as an 
 *  n-bit, two's complement integer.
 *   1 <= n <= 32
 *   Examples: fitsBits(5,3) = 0, fitsBits(-4,3) = 1
 *   Legal ops: ! ~ & ^ | + << >>
 */
int fitsBits(int x, int n) {
	n = n + ~0; //n = n - 1
	return  ((!(((1<<n)+~x)>>31)) | (x>>31)) & !((x>>31)&(x+(1<<n))>>31);
}
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
/* 
 * getByte - Extract byte n from word x
 *   Bytes numbered from 0 (LSB) to 3 (MSB)
 *   Examples: getByte(0x12345678,1) = 0x56
 *   Legal ops: ! ~ & ^ | + << >>
 */
int getByte(int x, int n) {
  return (x >> (n<<3)) & 0xff;
}
/* 
 * logicalShift - shift x to the right by n, using a logical shift
 *   Can assume that 0 <= n <= 31
 *   Examples: logicalShift(0x87654321,4) = 0x08765432
 *   Legal ops: ~ & ^ | + << >>
 */
int logicalShift(int x, int n) {
	return (x>>n) ^ (((x&(1<<31))>>n) << 1);
}
/* 
 * addOK - Determine if can compute x+y without overflow
 *   Example: addOK(0x80000000,0x80000000) = 0,
 *            addOK(0x80000000,0x70000000) = 1, 
 *   Legal ops: ! ~ & ^ | + << >>
 */
int addOK(int x, int y) {
  return ((x>>31&1) ^ (y>>31&1)) | !(((x>>31)^((x+y)>>31)) | ((y>>31)^((x+y)>>31)));
}
/* 
 * bang - Compute !x without using !
 *   Examples: bang(3) = 0, bang(0) = 1
 *   Legal ops: ~ & ^ | + << >>
 */
int bang(int x) {
  return ((x>>31) + 1) & ((((~x)+1)>>31)+1) ;
}
/* 
 * conditional - same as x ? y : z 
 *   Example: conditional(2,4,5) = 4
 *   Legal ops: ! ~ & ^ | + << >>
 */
int conditional(int x, int y, int z) {
  return ((((!x)<<31)>>31) & z) + ((((!(!x))<<31)>>31) & y);
}
/*
 * isPower2 - returns 1 if x is a power of 2, and 0 otherwise
 *   Examples: isPower2(5) = 0, isPower2(8) = 1, isPower2(0) = 0
 *   Legal ops: ! ~ & ^ | + << >>
 */
int isPower2(int x) {
  return !(!x) & (((x>>31)+1) & !(x & (x + ~0)));
}
