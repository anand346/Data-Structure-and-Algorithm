// 1^0 = 1
// 0^1 = 1
// 1^1 = 0
// 0^0 = 0

// A^0 = A;
// A^A = 0;
// A^B = B^A;
// A+B = A^B + 2*(A&B);


// 0xaaaaaaaa = 01010101010 //even bits are set to 1
// 0x55555555 = 10101010101 //odd bits are set to 1
// 0x0f       = 00001111 // right most 4 bits of a byte are full (set to 1)
// 0xf0       = 11110000 // left most 4 bits of a byte are full (set to 1)
// 1U<<5      = 00100000 // 1 unsigned bit left shift by 5  
