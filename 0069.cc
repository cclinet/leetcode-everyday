class Solution {
public:
int mySqrt(int x) {
    if (x == 0) return 0;

    double x0 = x;
    double x1 = x;
    do {
        x0 = x1;
        x1 = (x1 + x / x1) / 2;
    } while (abs(x1 - x0) > 1e-6);
    return int(x1);
}
};
