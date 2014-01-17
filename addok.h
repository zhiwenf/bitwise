/* 
 * addOK - Determine if can compute x+y without overflow
 *   Example: addOK(0x80000000,0x80000000) = 0,
 *            addOK(0x80000000,0x70000000) = 1, 
 *   Legal ops: ! ~ & ^ | + << >>
 */
int addOK(int x, int y) {
  return ((x>>31&1) ^ (y>>31&1)) | !(((x>>31)^((x+y)>>31)) | ((y>>31)^((x+y)>>31)));
}
