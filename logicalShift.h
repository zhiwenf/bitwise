/* 
 * logicalShift - shift x to the right by n, using a logical shift
 *   Can assume that 0 <= n <= 31
 *   Examples: logicalShift(0x87654321,4) = 0x08765432
 *   Legal ops: ~ & ^ | + << >>
 */
int logicalShift(int x, int n) {
	return (x>>n) ^ (((x&(1<<31))>>n) << 1);
}
