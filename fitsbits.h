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
