
/*
 * count the total number of N queue by bitwise
 */

class NqueenCounter {
public:
    int totalNQueens(int n) {
        return nQueen(0, 0, 0, n);
    }
    
	/*
	 * use tree integers to indicate the forbiden postion by row and the two diagonals
	 * I just don't understart now
   * Oh, I understand
   */
    int nQueen(int row, int r, int d, int n) {
        if (row == (1<<n) - 1) {
            return 1;
        }
        int sum = 0;
        int v = row | r | d;
     	while (((~v) & (v+1)) < (1<<n)) {
			sum += nQueen(row | ((~v) & (v+1)), (r<<1) | (((~v) & (v+1))<<1), (d>>1) | (((~v) & (v+1))>>1), n);
			v |= ((~v) & (v+1));
        }
        return sum;
    }

    int feature1(int row, int r, int d, int n) {
      // to do
      return 0;
    }
    int xx(){}
    int feature2() {}
};

