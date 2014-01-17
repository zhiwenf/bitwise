/* 
 * bitXor - x^y using only ~ and & 
 *   Example: bitXor(4, 5) = 1
 *   Legal ops: ~ &
 */
int bitXor(int x, int y) {
  return ~(~(x&~y) & ~(~x & y));
}
