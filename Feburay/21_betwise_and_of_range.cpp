 int rangeBitwiseAnd(int left, int right) {
       
    // //    first find when the both are equal at which point
    // int shift=0;

    // while(left !=right){

    //     left=(left>>1);
    //     right=(right>>1);
    //     shift++;
    // }

    // // we got our comman prefix so shift by no of times so that it become actual no
    // return (left<<shift);

    
    // more optimized approch using gormula n&(n-1)

    while(right>left)
        right=right &(right-1);
    return right;
    }