/*
 * isPower2 - returns 1 if x is a power of 2, and 0 otherwise
 *   Examples: isPower2(5) = 0, isPower2(8) = 1, isPower2(0) = 0
 *   Legal ops: ! ~ & ^ | + << >>
 */
int isPower2(int x) {
  return !(!x) & (((x>>31)+1) & !(x & (x + ~0)));
}
