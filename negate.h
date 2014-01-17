/* 
 * negate - Compute !x without using !
 *   Examples: bang(3) = 0, bang(0) = 1
 *   Legal ops: ~ & ^ | + << >>
 */
int negate(int x) {
  return ((x>>31) + 1) & ((((~x)+1)>>31)+1) ;
}
