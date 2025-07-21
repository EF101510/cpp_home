
// 攝轉華
double c_to_f(double c)
{
    auto f = ((9 * c) / 5) + 32;
    return f;
}

// 華轉攝
double f_to_c(double f)
{
    auto c = (f - 32) * 5 / 9;
    return c;
}