/* 
 * conditional - same as x ? y : z 
 *   Example: conditional(2,4,5) = 4
 *   Legal ops: ! ~ & ^ | + << >>
 */
int conditional(int x, int y, int z) {
  return ((((!x)<<31)>>31) & z) + ((((!(!x))<<31)>>31) & y);
}
