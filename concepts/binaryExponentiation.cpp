int binpow(int base, int pow){
    int result = 1;
    while (pow > 0) {
        if (pow % 2 == 1) {// why this condition?
            // If pow is odd, multiply the result by the base
            // and reduce pow by 1 to make it even.
            // This is because we can express pow as (pow - 1) + 1,
            // allowing us to handle the even part separately.
            // This is the key step in binary exponentiation.
            // It allows us to reduce the problem size by half at each step.
            // This is the essence of binary exponentiation.
            // This condition ensures that we multiply the base only when pow is odd.   
            result *= base;
        }
        base *= base;
        pow>>= 1;
    }
    return result;
}